#include <iostream>
#include "gtest/gtest.h"
#include <pangolin/display/display.h>
#include <pangolin/display/view.h>
#include <pangolin/handler/handler.h>
#include <pangolin/gl/gldraw.h>

class guiTest : public::testing::Test
{
    protected:
        virtual void SetUp()override{}
        virtual void TearDown()override{}
};

TEST_F(guiTest, LoadWindow)
{
    pangolin::CreateWindowAndBind("Main",640,480);
    glEnable(GL_DEPTH_TEST);

    pangolin::OpenGlRenderState s_cam(
            pangolin::ProjectionMatrix(640,480,420,420,320,240,0.2,100),
            pangolin::ModelViewLookAt(-2,2,-2, 0,0,0, pangolin::AxisY)
            );

    pangolin::Handler3D handler(s_cam);
    pangolin::View& d_cam = pangolin::CreateDisplay()
        .SetBounds(0.0, 1.0, 0.0, 1.0, -640.0f/480.0f)
        .SetHandler(&handler);

    while( !pangolin::ShouldQuit() )
    {
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        d_cam.Activate(s_cam);

        pangolin::glDrawColouredCube();

        pangolin::FinishFrame();
    }
}
