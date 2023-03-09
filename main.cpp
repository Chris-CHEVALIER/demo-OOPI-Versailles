#include "User.cpp"

int main()
{
    /* string schoolName("Hexagone");
    cout << "Bienvenue à l'école " + schoolName + " ! :)" << endl;

    int number = 65;
    char a = 65;

    cout << number << " / " << a << endl;

    cout << schoolName.size() << endl;
    cout << schoolName.substr(4) << endl; */

    User alexandre;
    alexandre.getOlder();
    cout << alexandre.getAge() << endl;
    cout << alexandre.getFirstName() << endl;

    User sirine("Sirine", "Khlifi", "sirine.khlifi@ecole-hexagone.com", 16, "123");
    cout << sirine.getAge() << endl;
    cout << sirine.getFirstName() << endl;
    
    return 0;
}