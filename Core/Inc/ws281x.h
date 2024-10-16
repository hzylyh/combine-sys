#ifndef _WS281X_H
#define _WS281X_H

#include "main.h"


#define PIXEL_NUM		64
#define NUM				(24*PIXEL_NUM + 200)        // Reset 280us / 1.25us = 224
#define WS1				65
#define WS0				24

extern uint16_t send_Buf[NUM];

void WS_Load(void);
void WS_WriteAll_RGB(uint8_t n_R, uint8_t n_G, uint8_t n_B);
void WS_CloseAll(void);

uint32_t WS281x_Color(uint8_t red, uint8_t green, uint8_t blue);
void WS281x_SetPixelColor(uint16_t n, uint32_t GRBColor);
void WS281x_SetPixelRGB(uint16_t n ,uint8_t red, uint8_t green, uint8_t blue);

uint32_t Wheel(uint8_t WheelPos);
void rainbow(uint8_t wait);
void rainbowCycle(uint8_t wait);



#endif



