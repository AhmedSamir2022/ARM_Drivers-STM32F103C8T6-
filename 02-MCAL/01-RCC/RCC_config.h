/***********************************************************************************/
/***********************************************************************************/
/* Auther : Ahmed Samir */
/* Version: V0          */
/* Date   : 6/10/2022   */
/***********************************************************************************/
/***********************************************************************************/

#ifndef RCC_CONFIG_H
#define RCC_CONFIG_H

/* RCC_HSI_ON
		--> HSI ON	>>	1
		--> HSI OFF	>>	0
   RCC_HSE_ON
		--> HSE ON	>>	1
		--> HSE OFF	>>	0
   RCC_PLL_ON
		--> PLL ON	>>	1
		--> PLL OFF	>>	0
 */
#define RCC_HSE_ON                  1
#define RCC_HSI_ON                  1
#define RCC_PLL_ON                  1

/*Clock security system enable
 Options:
        0: Clock detector OFF
        1: Clock detector ON (Clock detector ON if the HSE oscillator is ready , OFF if not)
*/
#define RCC_CSS_ON                  0

/* External high-speed clock bypass
 Options:
        0: external 4-16 MHz oscillator not bypassed
        1: external 4-16 MHz oscillator bypassed with external clock
 */
#define RCC_HSE_BYP                 0

/* Options:
          -RCC_MCO_NO
          -RCC_MCO_SYSCLK
          -RCC_MCO_HSI
          -RCC_MCO_HSE
          -RCC_MCO_PLL_DIV_2
*/
#define RCC_MCO_SRC               RCC_MCO_NO

/* Internal high-speed clock trimming */
#define RCC_HSI_TRIMMING_VAL            16

/* Options:
          -HSI/2  >> 0
          -HSE    >> 1
*/
#define RCC_PLL_SOURCE          0

/* if u choose HSE as an pll source
  Options:
          -HSE   >> 0
          -HSE/2 >> 1
*/
#define RCC_PLL_HSE             0

/*
 -The PLL output frequency must not exceed 72 MHz
 Options:
        -RCC_MUL_FACTOR_2
        -RCC_MUL_FACTOR_3
        -RCC_MUL_FACTOR_4
        -RCC_MUL_FACTOR_5
        -RCC_MUL_FACTOR_6
        -RCC_MUL_FACTOR_7
        -RCC_MUL_FACTOR_8
        -RCC_MUL_FACTOR_9
        -RCC_MUL_FACTOR_10
        -RCC_MUL_FACTOR_11
        -RCC_MUL_FACTOR_12
        -RCC_MUL_FACTOR_13
        -RCC_MUL_FACTOR_14
        -RCC_MUL_FACTOR_15
        -RCC_MUL_FACTOR_16
        -RCC_MUL_FACTOR_17
*/
#define RCC_MUL_FACTOR                RCC_MUL_FACTOR_2

/* Options:
          -RCC_ADC_PRE_2
          -RCC_ADC_PRE_4
          -RCC_ADC_PRE_6
          -RCC_ADC_PRE_8
*/
#define RCC_ADC_PRESCALER             RCC_ADC_PRE_2

/*
 -APB2 take clock from AHB
 Options:
          -RCC_APB2_PRE_NO
          -RCC_APB2_PRE_2
          -RCC_APB2_PRE_4
          -RCC_APB2_PRE_8
          -RCC_APB2_PRE_16
*/
#define RCC_APB2_PRESCALER             RCC_APB2_PRE_NO

/*
 -APB1 take clock from AHB
 -Warning: the software has to set correctly these bits to not exceed 36 MHz on this domain.
  Options:
          -RCC_APB1_PRE_NO
          -RCC_APB1_PRE_2
          -RCC_APB1_PRE_4
          -RCC_APB1_PRE_8
          -RCC_APB1_PRE_16
*/
#define RCC_APB1_PRESCALER             RCC_APB1_PRE_NO

/*
 -AHB take clock from SYSCLK
 Options:
          -RCC_AHB_PRE_NO
          -RCC_AHB_PRE_2
          -RCC_AHB_PRE_4
          -RCC_AHB_PRE_8
          -RCC_AHB_PRE_16
          -RCC_AHB_PRE_64
          -RCC_AHB_PRE_128
          -RCC_AHB_PRE_256
          -RCC_AHB_PRE_512
*/
#define RCC_AHB_PRESCALER             RCC_AHB_PRE_NO

/*
 Options:
        -RCC_HSI
        -RCC_HSE
        -RCC_PLL
 */
#define RCC_SYSCLK_SRC                 RCC_HSI



#endif
