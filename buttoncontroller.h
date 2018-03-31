#ifndef BUTTONMANAGER_H
#define BUTTONMANAGER_H

#include "button.h"

using namespace std;

class ButtonController
{
private:
    Button* theButton;

public:
    ButtonController();
    void initializeRelations(Button* b);
private:
    void onButtonPressed(Button* b);
    void onButtonReleased(Button* b);


};

#endif // BUTTONMANAGER_H
