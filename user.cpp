#include "user.hpp"
#include "uuid.hpp"
User::User(const string& name, int age):
m_name(name),m_age(age),m_uuid("")
{
    m_uuid = Uuid::generate();
};