#include <iostream>

using namespace std;

class User
{
private:
    string firstName;
    string lastName;
    string email;
    int age;
    string password;

public:
    User();
    User(string newFirstName, string newLastName, string newEmail, int newAge, string newPassword);
    void getOlder();
    string getFirstName() const;
    int getAge() const;
    void changePassword(string newPassword);
    void changeEmail(string newEmail);
    string getLastName() const;
    void setLastName(string newLastName);
    ~User();
};