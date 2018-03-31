#include "buttoncontroller.h"
#include <iostream>


ButtonController::ButtonController()
{
    theButton = NULL;
}

void ButtonController::initializeRelations(Button *b){
    theButton = b;
    Button::callbackPressed cbp =
              bind(&ButtonController::onButtonPressed, this,
                   placeholders::_1);
    theButton->setCallbackPressed(cbp);
    Button::callbackPressed cbr =
              bind(&ButtonController::onButtonReleased, this,
                   placeholders::_1);
    theButton->setCallbackReleased(cbr);
}

void ButtonController::onButtonPressed(Button *b){
    cout << endl << "The button has just been pressed from " << b << endl;
}

void ButtonController::onButtonReleased(Button *b){
    cout << endl << "The button has just been released from " << b << endl;
}

