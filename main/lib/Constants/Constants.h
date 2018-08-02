#pragma once
#include <MenuItem.h>

class Constants {
public:
    static MenuItem PROPORTIONAL;//("P", 0, 256, 40);
    static MenuItem INTEGRAL;//("I", 0, 20, 0);
    static MenuItem DERIVATIVE;//("D", 0, 40, 5);
    static MenuItem BASE_SPEED;//("BS", 0, 256, 150);
    static MenuItem LEFT_THRESHOLD;//("LT", 0, 4096, 1024);
    static MenuItem RIGHT_THRESHOLD;//("RT", 0, 4096, 1024);
    static MenuItem EDGE_THRESHOLD;//("RT", 0, 4096, 1024);

    constexpr static int16_t PROPORTIONAL_MOVEMENT = 30;
    constexpr static int16_t DERIVATIVE_MOVEMENT = 3;

    static void init();

    constexpr static uint8_t POT_PIN = PA0;
    constexpr static uint8_t GO_BTN_PIN = PB13;

    constexpr static int8_t oledPins[] = {PB11, PB10};

    constexpr static int8_t trigPins[] = {PB12}; constexpr static int8_t echoPins[] = {PB13};

    constexpr static int8_t highPwmPins[] = {PB9, PB7};
    constexpr static int8_t lowPwmPins[] = {PB8, PB6};

    constexpr static int16_t ENCODER_POLL_TIME = 2; // milliseconds

    // TODO: Assign real pin values
    constexpr static int8_t infraredLeds[] = {PB3};
    constexpr static int8_t infraredReceiver = PA1;
    constexpr static int16_t pickUpInfraredThreshold = 3300;
    constexpr static int16_t distantInfraredThreshold = 1500;
    constexpr static int16_t distantInfraredThreshold1 = distantInfraredThreshold;
    constexpr static int16_t pickUpInfraredThreshold1 = pickUpInfraredThreshold;
    constexpr static int16_t ewokPulseDuration = 15; // m
    constexpr static int8_t CLAW_ARM_PIN = PA2;
    constexpr static int8_t CLAW_PIN = PA8;
    constexpr static int16_t angleOut = 180;
    constexpr static int16_t angleInit = 65;
    constexpr static int16_t angleIn = 80;
    constexpr static int16_t angleOpen = 20;
    constexpr static int16_t angleClose = 130;
    constexpr static int16_t numSteps = 10;
    //constexpr static int16_t angleFullClose = 20;
    constexpr static int8_t buttonSwitchPin = PA15;

    constexpr static uint8_t IR_BEACON_PIN = PA1;

    //constexpr static uint8_t LIFT_MOTOR = 1;
    constexpr static uint8_t frontLift = 2;
    constexpr static uint8_t backLift = PB13;
    constexpr static uint8_t potFront = PA0;
    constexpr static uint8_t potBack = PB13;
    constexpr static uint16_t voltageUpFront = 1231;
    constexpr static uint16_t voltageDownFront = 1528;
    constexpr static uint16_t voltageUpBack = 1050;
    constexpr static uint16_t voltageDownBack = 850;
    constexpr static uint16_t voltageIRFront = 850;
    constexpr static uint8_t speedLiftDown = 180;
    constexpr static uint8_t speedLiftUp = 200;

    constexpr static uint8_t LEFT_QRD_PIN = PA4;
    constexpr static uint8_t RIGHT_QRD_PIN = PA7; //PA3;
    constexpr static uint8_t EDGE_QRD_PIN = PA5; //PA2;
    constexpr static uint8_t QRD_POWER_PIN = PB4;

    constexpr static uint8_t MOTOR_LEFT = 1;
    constexpr static uint8_t MOTOR_RIGHT = 0;
    constexpr static uint8_t MOTOR_FRONT_LIFT = 2;
    constexpr static int16_t LINE_FOLLOW_POLL_TIME = 3; // millis

    // constexpr static int16_t CORRECTION_SPEED = 120;

    constexpr static uint8_t LEFT_ENC_PIN = PB14;
    constexpr static uint8_t RIGHT_ENC_PIN = PB15;

    constexpr static uint8_t MULTIPLEXER_PIN = PB5;
    constexpr static uint8_t BRIDGE_SERVO_PIN = PA3;
};
