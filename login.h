#ifndef H_LOGIN
#define H_LOGIN
#include "user.h"
class Login{
    Login(User user, Mode login_mode = USER_PASS);
private:
    User m_user;
}

#endif