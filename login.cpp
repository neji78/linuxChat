#include "login.h"
Login::Login(User user, Mode login_mode ):
m_user(user)
{
    switch(login_mode){
        case Login::USER_PASS:
            loginThroughUserPass();
            break;
        case Login::OTP_SMS:
            loginThroughSMS();
            break;
        case Login::OTP_EMAIL:
            loginThroughEmail();
            break;
    }
};
void Login::loginThroughUserPass(){

}
void Login::loginThroughSMS(){

}
void Login::loginThroughEmail(){

}