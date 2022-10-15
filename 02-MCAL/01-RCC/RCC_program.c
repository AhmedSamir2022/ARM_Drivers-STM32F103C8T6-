/***********************************************************************************/
/***********************************************************************************/
/* Auther : Ahmed Samir */
/* Version: V0          */
/* Date   : 6/10/2022   */
/***********************************************************************************/
/***********************************************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "RCC_interface.h"
#include "RCC_config.h"
#include "RCC_private.h"

void MRCC_voidInit(void)
{
	RCC->CFGR = 0x00;
	RCC->CFGR &= ~((0b111) << 24);
	RCC->CFGR |= (RCC_MCO_SRC << 24);
	RCC->CFGR &= ~((0b1111) << 18);
	RCC->CFGR |= (RCC_MUL_FACTOR << 18);
	RCC->CFGR &= ~((0b1) << 17);
	RCC->CFGR |= (RCC_PLL_HSE << 17);
	RCC->CFGR &= ~((0b1) << 16);
	RCC->CFGR |= (RCC_PLL_SOURCE << 16);
	RCC->CFGR &= ~((0b11) << 14);
	RCC->CFGR |= (RCC_ADC_PRESCALER << 14);
	RCC->CFGR &= ~((0b111) << 11);
	RCC->CFGR |= (RCC_APB2_PRESCALER << 11);
	RCC->CFGR &= ~((0b111) << 8);
	RCC->CFGR |= (RCC_APB1_PRESCALER << 8);
	RCC->CFGR &= ~((0b1111) << 4);
	RCC->CFGR |= (RCC_AHB_PRESCALER << 4);
	RCC->CFGR &= ~((0b11) << 0);
	RCC->CFGR |= (RCC_SYSCLK_SRC << 0);

	RCC->CR =0x00;
	RCC->CR &= ~((0b1) << 24);
	RCC->CR |= (RCC_PLL_ON << 24);
	RCC->CR &= ~((0b1) << 19);
	RCC->CR |= (RCC_CSS_ON << 19);
	RCC->CR &= ~((0b1) << 18);
	RCC->CR |= (RCC_HSE_BYP << 18);
	RCC->CR &= ~((0b1) << 16);
	RCC->CR |= (RCC_HSE_ON << 16);
	if(RCC_HSI_TRIMMING_VAL <= 32 && RCC_HSI_TRIMMING_VAL >= 0)
	{
		RCC->CR &= ~((0b11111) << 3);
		RCC->CR |= (RCC_HSI_TRIMMING_VAL << 3);
	}
	RCC->CR &= ~((0b1) << 0);
	RCC->CR |= (RCC_HSI_ON << 0);

}
void MRCC_voidPeripheralClockEnable(u8 Copy_u8BusName,peripherals_t Copy_u8PeripheralName)
{
	switch(Copy_u8BusName)
	{
	case RCC_AHB:
		SET_BIT(RCC->AHBENR,Copy_u8PeripheralName);
		break;
	case RCC_APB1:
		SET_BIT(RCC->APB1ENR,Copy_u8PeripheralName);
		break;
	case RCC_APB2:
		SET_BIT(RCC->APB2ENR,Copy_u8PeripheralName);
		break;
	}
}
void MRCC_voidPeripheralClockDisable(u8 Copy_u8BusName,peripherals_t Copy_u8PeripheralName)
{
	switch(Copy_u8BusName)
	{
	case RCC_AHB:
		CLR_BIT(RCC->AHBENR,Copy_u8PeripheralName);
		break;
	case RCC_APB1:
		CLR_BIT(RCC->APB1ENR,Copy_u8PeripheralName);
		break;
	case RCC_APB2:
		CLR_BIT(RCC->APB2ENR,Copy_u8PeripheralName);
		break;
	}
}
