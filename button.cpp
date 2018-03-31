#include "button.h"

Button::Button()
{

}

void Button::setCallbackPressed(callbackPressed p){
    cbp = p;
}

void Button::setCallbackReleased(callbackReleased p){
    cbr = p;
}

void Button::press(void){
    if (checkButton()){
        state = RELEASED;
        if (cbr){
            cbr(this);
        }
    }
    else{
        state = PRESSED;
        if (cbp){
            cbp(this);
        }
    }
}

BUTTONSTATE Button::checkButton(void){
    return state;
}

