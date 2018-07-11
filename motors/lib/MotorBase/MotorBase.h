#pragma once
#include <Arduino.h>
#include <MyOLED.h>

/**
 * TODO: Move these motor pin listings into constants.h
 *
 */

constexpr int8_t highPwmPins[] = {PA0, PA2};
constexpr int8_t lowPwmPins[] = {PA1, PA3};

static_assert(sizeof highPwmPins == sizeof lowPwmPins);

class MotorBase {
private:
    int16_t speeds[sizeof highPwmPins];

public:
    MotorBase();
    constexpr static int8_t size();
    void stop(const int8_t&);
    void speed(const int8_t&, int16_t);
};

extern MotorBase motor;
