/***********************************************************************************/
/***********************************************************************************/
/* Auther : Ahmed Samir */
/* Version: V0          */
/* Date   : 6/10/2022   */
/***********************************************************************************/
/***********************************************************************************/

#ifndef RCC_INTERFACE_H
#define RCC_INTERFACE_H

/* Buses Names */
#define RCC_AHB                      0
#define RCC_APB1                     1
#define RCC_APB2                     2

/* MCO Sources */
#define RCC_MCO_NO                       0
#define RCC_MCO_SYSCLK                   4
#define RCC_MCO_HSI                      5
#define RCC_MCO_HSE                      6
#define RCC_MCO_PLL_DIV_2                7

/* PLL Mul Factor */
#define RCC_MUL_FACTOR_2                 0
#define RCC_MUL_FACTOR_3                 1
#define RCC_MUL_FACTOR_4                 2
#define RCC_MUL_FACTOR_5                 3
#define RCC_MUL_FACTOR_6                 4
#define RCC_MUL_FACTOR_7                 5
#define RCC_MUL_FACTOR_8                 6
#define RCC_MUL_FACTOR_9                 7
#define RCC_MUL_FACTOR_10                8
#define RCC_MUL_FACTOR_11                9
#define RCC_MUL_FACTOR_12                A
#define RCC_MUL_FACTOR_13                B
#define RCC_MUL_FACTOR_14                C
#define RCC_MUL_FACTOR_15                D
#define RCC_MUL_FACTOR_16                E
#define RCC_MUL_FACTOR_17                F

/* ADC Prescalers */
#define RCC_ADC_PRE_2                    0
#define RCC_ADC_PRE_4                    1
#define RCC_ADC_PRE_6                    2
#define RCC_ADC_PRE_8                    3

/* APB2 Prescalers */
#define RCC_APB2_PRE_NO                  0
#define RCC_APB2_PRE_2                   4
#define RCC_APB2_PRE_4                   5
#define RCC_APB2_PRE_8                   6
#define RCC_APB2_PRE_16                  7

/* APB1 Prescalers */
#define RCC_APB1_PRE_NO                  0
#define RCC_APB1_PRE_2                   4
#define RCC_APB1_PRE_4                   5
#define RCC_APB1_PRE_8                   6
#define RCC_APB1_PRE_16                  7

/* AHB Prescalers */
#define RCC_AHB_PRE_NO                  0
#define RCC_AHB_PRE_2                   8
#define RCC_AHB_PRE_4                   9
#define RCC_AHB_PRE_8                   A
#define RCC_AHB_PRE_16                  B
#define RCC_AHB_PRE_64                  C
#define RCC_AHB_PRE_128                 D
#define RCC_AHB_PRE_256                 E
#define RCC_AHB_PRE_512                 F

/* System clock sources */
#define RCC_HSI          0
#define RCC_HSE          1
#define RCC_PLL          2

/* Peripherals Names */
typedef enum
{
	DMA1,
	DMA2,
	SRAM,
	FLITF=4,
	CRC=6,
	FSMC=8,
	SDIO=10,
	AFIO=0,
	GPIOA=2,
	GPIOB,
	GPIOC,
	GPIOD,
	GPIOE,
	GPIOF,
	GPIOG,
	ADC1,
	ADC2,
	TIM1,
	SPI1,
	TIM8,
	USART1,
	ADC3,
	TIM9=19,
	TIM10,
	TIM11,
	TIM2=0,
	TIM3,
	TIM4,
	TIM5,
	TIM6,
	TIM7,
	TIM12,
	TIM13,
	TIM14,
	WWDG=11,
	SPI2=14,
	SPI3,
	USART2=17,
	USART3,
	UART4,
	UART5,
	I2C1,
	I2C2,
	USB,
	CAN=25,
	BKP=27,
	PWR,
	DAC

}peripherals_t;


/* Prototypes of functions */
void MRCC_voidInit(void);
void MRCC_voidPeripheralClockEnable(u8 Copy_u8BusName,peripherals_t Copy_u8PeripheralName);
void MRCC_voidPeripheralClockDisable(u8 Copy_u8BusName,peripherals_t Copy_u8PeripheralName);

#endif
