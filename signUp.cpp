#include "display.h"
#include "signUp.h"
#include "signUpController.h"
SignUp::SignUp()
{
    auto options = vector<string>();
    options.push_back("username and password");
    options.push_back("email");
    options.push_back("phoneNumber");
    options.push_back("back");
    auto result = menu("sign up",":D you can choose one of the following ways to sign up:",options);
    switch(static_cast<SignUpController::Mode>(result)){
        
    }
}