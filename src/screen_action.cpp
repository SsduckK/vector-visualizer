#include "screen_action.h"

Screen::Screen() : DefaultScreen_(cv::Mat::zeroes(300, 300, CV_8UC3))
{
    setGrid();
}

void Screen::setGrid()
{
    for(int i = 0; i < DefaultScreen_.rows; i+= 50)
    {
        cv::line(DefaultScreen_, cv::Point(0, i), cv::Point(DefaultScreen_.cols-1, i), cv::Scalar(255, 255, 255), 1);
    }
    for(int j = 0; j < DefaultScreen_.cols; j += 50)
    {
        cv::line(DefaultScreen_, cv::Point(j, 0), cv::Point(j, DefaultScreen_.rows-1), cv::Scalar(255, 255, 255), 1);
    }
}

cv::Mat Screen::getScreen()
{
    return DefaultScreen_;
} 
