#ifdef _BUTTON_BASE_H_
#define _BUTTON_BASE_H_

#include <FL/Fl_Button.H>
#include <string>

class ButtonBase
{
    protected:
        ButtonBase(int x_, int y_, int width_, int height_, std::string name_);
        virtual void callbackButton(Fl_Widget*, void*);

    private:
        int x_;
        int y_;
        int width_;
        int height_;
        std::string name_;
};

#endif

