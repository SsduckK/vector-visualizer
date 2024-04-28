#include "GUI.h"

GUI::GUI()
{
    pangolin::CreateWindowAndBind("Main", 640, 480);
    pangolin::CreatePanel("ui").SetBounds(0.0, 1.0, 0.0, pangolin::Attach::Pix(200));
    addVector_ = new pangolin::Var<bool>("ui.add_vector", false, false);
}

GUI::~GUI()
{
    delete addVector_;
}

void GUI::mainLoop()
{
    while(!pangolin::ShouldQuit())
    {
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        if(addVector_ && *addVector_)
            pAddVec();
        pangolin::FinishFrame();
    }
}

void GUI::pAddVec()
{
    std::cout << "pushed addvector button" << std::endl;

    *addVector_ = false;
}
