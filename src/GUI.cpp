#include "GUI.h"

GUI::GUI() : window_(new Fl_Window(640, 480, "Home")), addVectorB_(new Fl_Button(10, 10, 80, 30, "Add Vector"))
{
    pLoadScreen();
}

GUI::~GUI()
{
    delete addVectorB_;
    delete mainScreen_;
    delete displayBox_;
    delete[] imageData_;
    delete window_;
}

void GUI::mainLoop()
{
    window_->end();
    addVectorB_->callback(callAddVectorB, this);
    window_->show();
    Fl::run();
}

void GUI::pLoadVec()
{
    std::cout << "loadvector successed" << std::endl;
}

void GUI::callAddVectorB(Fl_Widget* widget, void* userdata)
{
    GUI* gui = static_cast<GUI*>(userdata);
    gui->pLoadVec();
}

void GUI::pLoadScreen()
{
    Screen displayModule;
    cv::Mat display = displayModule.getScreen(); 
    imageData_ = new uchar[display.total() * display.elemSize()];
    memcpy(imageData_, display.data, display.total() * display.elemSize());
    mainScreen_ = new Fl_RGB_Image(imageData_, display.cols, display.rows, display.channels());
    displayBox_ = new Fl_Box(15, 20, 300, 300); 
    displayBox_->image(mainScreen_);
}
