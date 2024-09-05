#ifndef H_USER
#define H_USER
#include<string>
using namespace std;
class User{
public:
    User();
    bool isEmpty();
public:
    string m_name;
    string m_uuid;
    string m_email;
    string m_username;
    string m_phoneNumber;
    string m_password;
};

#endif