#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif


#include <iostream>
#include "../include/Player.h"
#include "../include/ASCII_ART.h"
using std::string, std::cout, std::endl, std::cin;

int main(int argc, char** argv)
{
    string* title = new string("Veritas Life");
    ascii_art(*title);
    delete title;
    for(int i = 0; i<10; i++)
    {
        cout << endl;
    }
    cout << "What is your name? ";
    string *name = new string;
    cin >> *name;
    
    cout << "How old are you? ";
    int *age = new int;
    cin >> *age;

    cout << "What is your major? ";
    string *major = new string;
    cin >> *major;

    cout << "What is your Gender? (Note, all characters will refer to you by 'they/them' regardless): ";
    string *gender = new string;
    cin >> *gender;

    cout << "What is your hobby? ";
    string *hobby = new string;
    cin >> *hobby;
    cout << "Last question: What are your Big 3? ";
    string *sun = new string;
    string *moon = new string;
    string *rising = new string;
    cin >> *sun;
    cin >> *moon;
    cin >> *rising;

    cout << "Now creating your player character...";

    sleep(5);
    Player *protag = new Player(name, age, major, gender, hobby, sun, moon, rising, 'M',1);

    return 0;
}