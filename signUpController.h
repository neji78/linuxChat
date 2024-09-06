#ifndef H_SIGNUPCONTROLLER
#define H_SIGNUPCONTROLLER
#include "user.h"
class SignUpController{
public:
    enum Mode{
        PHONE,
        EMAIL,
        USERPASS,
        BACK
    };
    static SignUpController* getInstance(User user);
    void SignUp(Mode SignUpMode = USERPASS);
    void SignUpThroughPhone();
    void SignUpThroughEmail();
    void SignUpThroughUserPass();
    User getUser() const {return m_user;}
private:
    explicit SignUpController();
    void setUser(const User& user){m_user = user;}

private:
    static SignUpController* m_instance;
    User m_user;
};

#endif