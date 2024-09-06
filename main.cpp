#include <iostream>
#include "display.h"
#include "signUp.h"
#include <vector>
using namespace std;
enum StartMode{
    SIGNUP,
    LOGIN
};
StartMode showMainMenu();
int main()
{
    while(true){
        auto option = showMainMenu();
        switch(option)
        {
            case StartMode::SIGNUP:{
                auto signUpInstance = new SignUp();
                break;
            }
            case StartMode::LOGIN:
                cout<<"get Login";
                break;
        }

    }
    // auto signUpInstance = new SignUp();
};
StartMode showMainMenu()
{
    int ret = -1;
    vector<string> options;
    options.push_back("Sign Up");
    options.push_back("Login");
    ret = menu("LinuChat App","Welcome to LinuChat a C++ code base chat application in Linux{::}",options);
    return static_cast<StartMode>(ret);
};