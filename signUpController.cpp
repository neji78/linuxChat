#include "signUpController.h"
SignUpController* SignUpController::m_instance = nullptr;
SignUpController::SignUpController()
{
}
SignUpController* SignUpController::getInstance(User user)
{
    if(user.isEmpty()){
    // throw an error 
        return nullptr;
    }
    if(m_instance == nullptr){
        m_instance = new SignUpController();
        m_instance->setUser(user);
    }
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