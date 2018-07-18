#pragma once
#include <Arduino.h>
#include <OLED_I2C.h>
#include <UltrasoundBase.h>
#include <Encoder.h>
#include <hcsr04.h>
#include <ClawBase.h>
#include <Menu.h>
#include <LineFollower.h>
#include <FFT.h>

void testUltrasound();
void testEncoder();
void testClawOnly();
void testMenu();
void testLineFollow();
void testPWM();
void testFFT();
