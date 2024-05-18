#ifndef _GUI_H_
#define _GUI_H_


#include <iostream>
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include <opencv2/core.hpp>
#include "type_def.h"
#include "vector_manager.h"
#include "screen_action.h"
#include "add_vector.h"

class GUI
{
    public:
        GUI();
        ~GUI();
        void mainLoop();

    private:
        Fl_Window* window_;
        AddVector addVectorB_;
        Fl_Box* displayBox_;
        Fl_RGB_Image* mainScreen_;
        cv::Mat display_;
        uchar* imageData_;

        void pLoadVec();
        static void callAddVectorB(Fl_Widget*, void*);
        void pLoadScreen();
};


#endif


