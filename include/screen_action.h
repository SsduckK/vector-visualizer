#ifndef _SCREEN_ACTION_H_
#define _SCREEN_ACTION_H_

#include <opencv2/opencv.hpp>
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
class Screen
{
    public:
        Screen();
        cv::Mat getScreen();
    private:
        cv::Mat DefaultScreen_;
        void setGrid();

};
#endif
