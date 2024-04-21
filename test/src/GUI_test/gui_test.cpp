#include <iostream>
#include "gtest/gtest.h"
#include <pangolin/pangolin.h>
#include <pangolin/display/display.h>
#include <pangolin/display/view.h>
#include <pangolin/handler/handler.h>
#include <pangolin/gl/gldraw.h>

class guiTest : public ::testing::Test
{
    protected:
        virtual void SetUp() override 
        {
            pangolin::CreateWindowAndBind("Main", 640, 480);
            glEnable(GL_DEPTH_TEST);

            s_cam = std::make_unique<pangolin::OpenGlRenderState>(
                    pangolin::ProjectionMatrix(640, 480, 420, 420, 320, 240, 0.2, 100),
                    pangolin::ModelViewLookAt(-2, 2, -2, 0, 0, 0, pangolin::AxisY)
                    );

            handler = std::make_unique<pangolin::Handler3D>(*s_cam);
            d_cam = &pangolin::CreateDisplay()
                .SetBounds(0.0, 1.0, 0.0, 1.0, -640.0f / 480.0f)
                .SetHandler(handler.get());
        }

        virtual void TearDown() override 
        {
            pangolin::QuitAll();
        }

        std::unique_ptr<pangolin::OpenGlRenderState> s_cam;
        std::unique_ptr<pangolin::Handler3D> handler;
        pangolin::View* d_cam;
};

TEST_F(guiTest, LoadWindow) 
{
    while(!pangolin::ShouldQuit())
    {
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        d_cam->Activate(*s_cam);
        pangolin::glDrawColouredCube();
        pangolin::FinishFrame();
    }
}

TEST_F(guiTest, InteractButton) 
{
    pangolin::CreatePanel("ui").SetBounds(1.0, 0.0, 0.0, pangolin::Attach::Pix(180));
    pangolin::Var<bool> button("ui.Button", false, false);

    while(!pangolin::ShouldQuit())
    {
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        d_cam->Activate(*s_cam);
        if (button)
        {
            pangolin::glDrawColouredCube();
            pangolin::FinishFrame();
        }
    }
}

