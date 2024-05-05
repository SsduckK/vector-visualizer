#ifndef _SCREEN_ACTION_H_
#define _SCREEN_ACTION_H_

#include <opencv2/opencv.hpp>
#include <std::vector>

class Screen
{
    public:
        Screen();

    private:
        cv::Mat DefaultScreen_;
        voidi setGrid();

};
#endif
