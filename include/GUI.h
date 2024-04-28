#ifndef _GUI_H_
#define _GUI_H_

#include <pangolin/pangolin.h>
#include <pangolin/display/display.h>
#include <pangolin/display/view.h>
#include <pangolin/handler/handler.h>
#include <pangolin/gl/gldraw.h>

#include "type_def.h"
#include "vector_manager.h"


class GUI
{
    public:
        GUI();
        ~GUI();
        void mainLoop();
    private:
        void pAddVec();
        pangolin::Var<bool>* addVector_; 
};


#endif


