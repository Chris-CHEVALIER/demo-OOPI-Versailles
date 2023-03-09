#include "User.hpp"

User::User()
{
    firstName = "Alexandre";
    lastName = "Mulard";
    email = "alexandre.mulard@ecole-hexagone.com";
    age = 19;
    password = "123";
}

User::User(string newFirstName, string newLastName, string newEmail, int newAge, string newPassword)
{
    firstName = newFirstName;
    lastName = newLastName;
    email = newEmail;
    age = newAge;
    password = newPassword;
}

void User::getOlder()
{
    age++;
}

string User::getFirstName() const
{
    return firstName;
}

int User::getAge() const
{
    return age;
}

void User::changePassword(string newPassword)
{
    if (newPassword.size() >= 6)
    {
        password = newPassword;
    }
}

void User::changeEmail(string newEmail)
{
    email = newEmail;
}

string User::getLastName() const
{
    return lastName;
}

void User::setLastName(string newLastName)
{
    if (newLastName.size() >= 3)
    {
        lastName = newLastName;
    }
}

User::~User()
{
    cout << "L'utilisateur " + firstName + " " + lastName + " vient d'être détruit !" << endl;
}
