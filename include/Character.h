#include <string>
#include "GameObject.h"
#ifndef __CHARACTER_H__
#define __CHARACTER_H__
#define MAX_PROPINQUITY 10.0
class Character : public GameObject
{
    
    public:
    Character();
    ~Character();

    protected:
    std::string name;
    int age;
    double propinquity;
    std::string major;
    std::string gender;
    std::string hobby;
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
    } sun,moon,rising;
    enum State
    {
        AVAILABLE = 0,
        ASLEEP,
        IN_CLASS,
        AT_WORK
    } char_state;
    

    public:
    void ChangePropinquity(bool sign, int multiplier);
    inline void RaiseAge(){age++;}
    inline std::string GetName() const{return name;}
    inline std::string GetMajor() const{return major;}
    inline std::string GetGender() const{return gender;}
    inline std::string GetHobby() const{return hobby;}
    void RelationshipChange(bool sign);
    void ShowStatus();

    private:
    bool dating_player = false;
};

#endif