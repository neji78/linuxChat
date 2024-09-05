#include "signUpController.h"
SignUpController* SignUpController::m_instance = nulltpr;
SignUpController::SignUpController(const User& user)
{
    if(user.isEmpty()){
        // throw an error 
        return nullptr;
    }
    m_user = user;
}
SignUpController* SignUpController::getInstance(const User& user){
    if(m_instace == nullptr)
        m_instance = new SignUpController(user);
    return m_instance;
}
void SignUpController::SignUp(Mode SignUpMode)
{
    switch(SignUpMode){
        case SignUpController::USERPASS:
            SignUpThroughUserPass();
            break;
        case SignUpController::PHONE:
            SignUpThroughPhone();
            break;
        case SignUpController::EMAIL:
            SignUpThroughEmail();
            break;
    }
}
void SignUpController::SignUpThroughUserPass()
{

}
void SignUpController::SignUpThroughPhone()
{
    
}
void SignUpController::SignUpThroughEmail()
{
    
}