#include <string>
#include "GameObject.h"
#ifndef __CHARACTER_H__
#define __CHARACTER_H__
#define MAX_PROPINQUITY 10.0
class Character : public GameObject
{
    protected:
    enum Zodiac
    {
        ARIES = 0,
        TAURUS,
        GEMINI,
        CANCER,
        LEO,
        VIRGO,
        LIBRA,
        SCORPIO,
        SAGITTARIUS,
        CAPRICORN,
        AQUARIUS,
        PISCES
    };
    enum State
    {
        AVAILABLE = 0,
        ASLEEP,
        IN_CLASS,
        AT_WORK
    };
    public:
    Character(std::string Name,int age,std::string major, std::string gender, std::string hobby, Zodiac Sun,Zodiac Moon,Zodiac Rising, char idc, int idn);
    ~Character();

    protected:
    std::string name;
    int age;
    double propinquity = 0.0;
    std::string major;
    std::string gender;
    std::string hobby;
    
    State char_state = AVAILABLE;
    Zodiac sun, moon, rising;

    public:
    void ChangePropinquity(bool sign, int multiplier);
    inline void RaiseAge(){age++;}
    inline std::string GetName() const{return name;}
    inline std::string GetMajor() const{return major;}
    inline std::string GetGender() const{return gender;}
    inline std::string GetHobby() const{return hobby;}
    inline bool GetRelationship() const{return dating_player;}
    void RelationshipChange(bool sign);
    void ShowStatus();
    std::string ConvertZodiac(Zodiac sign);
    private:
    bool dating_player = false;
};

#endif