#include <string>
#ifndef __INPUT_HANDLING_H__
#define __INPUT_HANDLING_H__
class Invalid_Input
{
    public :
        const std::string  msg_ptr;
        Invalid_Input(std::string in_ptr) : msg_ptr (in_ptr) { }
        
    private :
        Invalid_Input();
    // no default construction
};
#endif