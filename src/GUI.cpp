#include "GUI.h"

GUI::GUI() : window_(new Fl_Window(640, 480, "Home")), addVectorB_(new Fl_Button(10, 10, 80, 30, "Add Vector"), mainScreen_(new Fl_RGB_Image())
{
}

GUI::~GUI()
{
    delete addVectorB_;
    delete window_;
}

void GUI::mainLoop()
{
    window_->end();
    addVectorB_->callback(callAddVectorB_, this);
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
}
