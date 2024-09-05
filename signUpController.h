#ifndef H_SIGNUPCONTROLLER
#define H_SIGNUPCONTROLLER
#include "user.h"
class SignUpController{
public:
    enum Mode{
        PHONE,
        EMAIL,
        USERPASS
    }
    static SignUpController* getInstance(const User& user = User());
    void SignUp(Mode SignUpMode = USERPASS);
    void SignUpThroughPhone();
    void SignUpThroughEmail();
    void SignUpThroughUserPass();
    User getUser() const {return m_user;}
private:
    explicit SignUpController(const User& m_user);

private:
    static SignUpController* m_instance;
    User m_user;
}

#endif