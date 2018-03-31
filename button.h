#ifndef BUTTON_H
#define BUTTON_H

#include <functional>

using namespace std;

enum BUTTONSTATE {RELEASED, PRESSED};

class Button
{
private:
    BUTTONSTATE state = RELEASED;

public:
    Button();
    typedef function<void (Button* b)> callbackPressed;
    typedef function<void (Button* b)> callbackReleased;

    void setCallbackPressed(callbackPressed p);
    void setCallbackReleased(callbackReleased p);

    void press(void);

private:
    BUTTONSTATE checkButton(void);

    callbackPressed cbp;
    callbackReleased cbr;
};

#endif // BUTTON_H
