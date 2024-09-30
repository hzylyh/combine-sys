#include "gpio.h"

uint8_t Key_GetNum(void)
{
    uint8_t KeyNum = 0;
    if (HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_12) == GPIO_PIN_RESET)
    {
        HAL_Delay(20);
        while (HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_12) == GPIO_PIN_RESET);
        HAL_Delay(20);
        KeyNum = 1;
    }else if (HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_13) == GPIO_PIN_RESET)
    {
        HAL_Delay(20);
        while (HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_13) == GPIO_PIN_RESET);
        HAL_Delay(20);
        KeyNum = 2;
    }else if (HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_14) == GPIO_PIN_RESET)
    {
        HAL_Delay(20);
        while (HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_14) == GPIO_PIN_RESET);
        HAL_Delay(20);
        KeyNum = 3;
    }
    return KeyNum;
}