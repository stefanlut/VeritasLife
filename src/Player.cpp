#include "../include/Player.h"

Player::Player(std::string Name,int age,std::string major, std::string gender, std::string hobby, Zodiac Sun,Zodiac Moon,Zodiac Rising, char idc, int idn)
:Character(Name,age,major,gender,hobby,Sun,Moon,Rising,idc,idn)
{

}

void Player::Relationships(Character *bach)
{
    bool status = bach->GetRelationship();
    if(status)
    {
        
    }
    else
    {

    }
}
void Player::RaiseStat(char stat)
{
    switch(stat)
    {
        case 'I':
        case 'i':
        intelligence += 0.5;
        break;

        case 'C':
        case 'c':
        charisma += 0.5;
        break;

        case 'K':
        case 'k':
        kindness += 0.5;
        break;

        case 'G':
        case 'g':
        guts += 0.5;

        case 'P':
        case 'p':
        proficiency += 0.5;
        break;
    }
}
