#ifndef _GUI_H_
#define _GUI_H_


#include <iostream>
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include "type_def.h"
#include "vector_manager.h"
#include "screen_action.h"

class GUI
{
    public:
        GUI();
        ~GUI();
        void mainLoop();

    private:
        Fl_Window* window_;
        Fl_Button* addVectorB_;
        Fl_RGB_Image* mainScreen_;
        void pLoadVec();
        static void callAddVectorB(Fl_Widget*, void*);
        void pLoadScreen();
};


#endif


