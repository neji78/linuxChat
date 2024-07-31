#ifndef H_USER
#define H_USER
#include<string>
using namespace std;
class User{
    User(const string& name, int age);
private:
    string m_name;
    string m_uuid;
    int    m_age;
}

#endif