#include "loginController.h"
LoginController* LoginController::m_instance = nulltpr;
LoginController::LoginController(){}
LoginController* LoginController::getInstance(){
    if(m_instace == nullptr)
        m_instance = new LoginController();
    return m_instance;
}