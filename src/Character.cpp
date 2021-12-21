#include "../include/Character.h"
#include <iostream>
using std::string, std::cout, std::endl;
Character::Character(string Name,int Age,string Major, string Gender, string Hobby, Zodiac Sun,Zodiac Moon,Zodiac Rising,char idc,int idn)
:GameObject(idc,idn)
{
    name = Name;
    age = Age;
    major = Major;
    gender = Gender;
    hobby = Hobby;
    sun = Sun;
    moon = Moon;
    rising = Rising;
}

void Character::ChangePropinquity(bool sign, int multiplier)
{
    (sign) ? propinquity+= multiplier * 0.5 : propinquity -= multiplier * 0.5;
}   

void Character::RelationshipChange(bool sign)
{
    if(sign && !dating_player) dating_player = true;
    else if(!sign && dating_player) dating_player = false;
}

void Character::ShowStatus()
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << " years old" << endl;
    cout << "Major: " << major << endl;
    cout << "Gender: " << gender << endl;
    cout << "Hobby: " << hobby << endl;
    cout << "Big 3: " << ConvertZodiac(sun) << " Sun, " << ConvertZodiac(moon) << " Moon, " << ConvertZodiac(rising) << " Rising" << endl;
    cout << "Relationship Status: " << ((dating_player) ? "Taken" : "Single") << endl;
}

string Character::ConvertZodiac(Zodiac sign)
{
    switch(sign)
    {
        case ARIES: return "Aries"; break;
        case TAURUS: return "Taurus"; break;
        case GEMINI: return "Gemini"; break;
        case CANCER: return "Cancer"; break;
        case LEO: return "Leo"; break;
        case VIRGO: return "Virgo"; break;
        case LIBRA: return "Libra"; break;
        case SCORPIO: return "Scorpio"; break;
        case SAGITTARIUS: return "Sagittarius"; break;
        case CAPRICORN: return "Capricorn"; break;
        case AQUARIUS: return "Aquarius"; break;
        case PISCES: return "Pisces"; break;
    }
}