#ifdef _BUTTON_BASE_H_
#define _BUTTON_BASE_H_

#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include <string>

class ButtonBase
{
    protected:
        ButtonBase(int x_, int y_, int width_, int height_, std::string name_) : x_(x), y_(y), width_(width), height_(height), name_(name), button_(x, y, width, height, name.c_str()) {};
        virtual void callbackButton(Fl_Widget*, void*) = 0;
        void addButton(Fl_Window* window)
        {
            window->add(&button_);
        }

    private:
        int x_;
        int y_;
        int width_;
        int height_;
        std::string name_;
        Fl_Button button_;
};

#endif

