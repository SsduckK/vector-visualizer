#ifndef _ADD_VEC_BUTTON_H_
#define _ADD_VEC_BUTTON_H_

#include <FL/Fl_Button.H>
#include <string>

#include "button_base.h"

class AddVector : public ButtonBase
{
    public:
        AddVector(int x, int y, int width, int height, std::string name);
};

#endif

