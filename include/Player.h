#include "Character.h"
#ifndef __PLAYER_H__
#define __PLAYER_H__

#define MAX_STAT 5.0
#include <string>
class Player : public Character
{
    public:
    Player(std::string Name,int age,std::string major, std::string gender, std::string hobby, Zodiac Sun,Zodiac Moon,Zodiac Rising, char idc, int idn);
    ~Player();

    private:
    int relationships = 0;
    double intelligence = 0;
    double charisma = 0;
    double kindness = 0;
    double guts = 0;
    double proficiency = 0;
    
    public:
    void Relationships(Character*);
    void RaiseStat(char stat);
    inline double GetIntelligence() const {return intelligence;}
    inline double GetCharisma()const{return charisma;}
    inline double GetKindness()const{return kindness;}
    inline double GetGuts()const{return guts;}
    inline double GetProficiency()const{return proficiency;}
};
#endif