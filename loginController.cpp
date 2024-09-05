#include "loginController.h"
LoginController *LoginController::m_instance = nullptr;
LoginController::LoginController(){};
LoginController* LoginController::getInstance(){
    if(m_instance == nullptr)
        m_instance = new LoginController();
    return m_instance;
};