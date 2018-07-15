#include "EncoderBase.h"

EncoderBase::EncoderBase(){
    EncoderBase::init();
}
void EncoderBase::init(){
    for(int i = 0; i < EncoderBase::size(); i++){
        EncoderBase::encoders[i] = Encoder (leftEncoderPins[i], rightEncoderPins[i]);
        EncoderBase::positions[i] = -999;
        EncoderBase::positionsBefore[i] = -999;
    }
}
constexpr static int8_t EncoderBase::size(){
    return sizeof leftEncoderPins;
}
long EncoderBase::getPosition(const int8_t& encoderNumber){
    long position = (EncoderBase::encoders[encoderNumber]).read();
    EncoderBase::positions[encoderNumber] = position;
    return position
}
long EncoderBase::getPositionChange(const int8_t& encoderNumber){
    long positionBefore = EncoderBase::positionsBefore[encoderNumber];
    EncoderBase::positionsBefore[encoderNumber] = EncoderBase::positions[encoderNumber];
    return EncoderBase::getPosition(encoderNumber) - positionsBefore;
}

EncoderBase encoder;