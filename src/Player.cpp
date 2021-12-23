#include "../include/Player.h"
#include <iostream>
Player::Player(std::string Name,int age,std::string major, std::string gender, std::string hobby, Zodiac Sun,Zodiac Moon,Zodiac Rising, char idc, int idn)
:Character(Name,age,major,gender,hobby,Sun,Moon,Rising,idc,idn)
{

}
Player::~Player()
{
    
}
void Player::Relationships(Character *bach)
{
    bool status = bach->GetRelationship();
    std::cout << "You are currently in " << GetRelationship() << "relationships\n";
    if(status)
    {
        bool yesno;
        char response;
        std::cout << "Do you want to break up with " << bach->GetName() << " ?(y/n)\n";
        std::cin >> response;
        switch(response)
        {
            case 'y':
            case 'Y':
            yesno = false;
            bach->RelationshipChange(yesno);
            relationships--;
            default:
            break;
        }
    }
    else
    {
        bool yesno;
        char response;
        std::cout << "Do you want to get into a relationship with " << bach->GetName() << " ?(y/n)\n";
        std::cin >> response;
        switch(response)
        {
            case 'y':
            case 'Y':
            yesno = true;
            bach->RelationshipChange(yesno);
            relationships++;
            default:
            break;
        }
    }
}
void Player::RaiseStat(char stat)
{
    switch(stat)
    {
        case 'I':
        case 'i':
        {
            if(intelligence < MAX_STAT) intelligence += 0.5;

        }break;

        case 'C':
        case 'c':
        {
            if(charisma < MAX_STAT) charisma += 0.5;
            
        }
        break;

        case 'K':
        case 'k':
        {
            if(kindness < MAX_STAT) kindness += 0.5;
            
        }
        break;

        case 'G':
        case 'g':
        {
            if(guts < MAX_STAT) guts += 0.5;
            
        }

        case 'P':
        case 'p':
        {
            if(proficiency < MAX_STAT) proficiency += 0.5;
            
        }
        break;
    }
}
