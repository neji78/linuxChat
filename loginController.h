#ifndef H_LOGINCONTROLLER
#define H_LOGINCONTROLLER
class LoginController{
public:
    enum Mode{
        OTP_SMS,
        OTP_EMAIL,
        USER_PASS
    }
    static LoginController* getInstance();
    void login(User user, Mode login_mode = USER_PASS);
    void loginThroughSMS();
    void loginThroughEmail();
    void loginThroughUserPass();
private:
    explicit LoginController();

private:
    static LoginController* m_instance;
}

#endif