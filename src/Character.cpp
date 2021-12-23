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

Character::~Character()
{
    
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

string ConvertZodiac(Zodiac sign)
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
Zodiac ConvertZodiac(string sign)
{
    std::transform(sign.begin(), sign.end(),sign.begin(), ::toupper);
    if(sign.compare("ARIES") == 0) return ARIES;
    else if(sign.compare("TAURUS") == 0) return TAURUS;
    else if(sign.compare("GEMINI") == 0) return GEMINI;
    else if(sign.compare("CANCER") == 0) return CANCER;
    else if(sign.compare("LEO") == 0) return LEO;
    else if(sign.compare("VIRGO") == 0) return VIRGO;
    else if(sign.compare("LIBRA") == 0) return LIBRA;
    else if(sign.compare("SCORPIO") == 0) return SCORPIO;
    else if(sign.compare("SAGITTARIUS") == 0) return SAGITTARIUS;
    else if(sign.compare("CAPRICORN") == 0) return CAPRICORN;
    else if(sign.compare("AQUARIUS") == 0) return AQUARIUS;
    else if(sign.compare("PISCES") == 0) return PISCES;
    else
    {
        string correction;
        cout << "Invalid sign input, please try again: ";
        std::cin >> correction;
        ConvertZodiac(correction);
    }
}