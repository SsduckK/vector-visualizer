#include <iostream>
#include "gtest/gtest.h"
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>

class guiTest : public ::testing::Test
{
    protected:
        virtual void SetUp() override 
        {
        }

        virtual void TearDown() override 
        {
        }

};

int loadFLTKLoad()
{
    Fl_Window *window = new Fl_Window(300, 180, "FLTK Example");
    Fl_Box *box = new Fl_Box(20, 40, 260, 100, "Hello, World!");
    box->box(FL_UP_BOX);
    box->labelfont(FL_BOLD + FL_ITALIC);
    box->labelsize(36);
    box->labeltype(FL_SHADOW_LABEL);
    window->end();
    window->show();
    return Fl::run();
}

TEST_F(guiTest, fltkLoadTest)
{
    loadFLTKLoad();
}
