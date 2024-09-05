#include "user.h"
#include "uuid.h"
User::User():
m_name(""),m_uuid("")
{
};
bool User::isEmpty()
{
    return (m_email.length == 0) &&
     (m_username.length == 0 && m_password.length == 0) &&
     (m_phoneNumber.length == 0);
}