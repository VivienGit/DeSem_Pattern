#include <iostream>
#include "button.h"
#include "buttoncontroller.h"

using namespace std;

int main()
{
    Button button;
    ButtonController buttonController;
    buttonController.initializeRelations(&button);
    cout << "At the beginning the button is released" << endl;
    button.press();
    button.press();
    button.press();
    cout << endl;
}
