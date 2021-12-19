#include "GameObject.h"
#ifndef __BUILDING_H__
#define __BUILDING_H__

class Building:public GameObject
{
    public:
    Building();
    ~Building();

    protected:
    bool is_open;
    bool has_contacts;
};

#endif