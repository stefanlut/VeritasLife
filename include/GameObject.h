#ifndef __GAMEOBJECT_H__
#define __GAMEOBJECT_H__
class GameObject
{
    public:
    GameObject(char,int);
    virtual ~GameObject();
    virtual void ShowStatus();
    
    protected:
    char id_char;
    int id_num;
};
#endif