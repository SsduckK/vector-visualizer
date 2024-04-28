#ifndef _GUI_H_
#define _GUI_H_


#include "type_def.h"
#include "vector_manager.h"


class GUI
{
    public:
        GUI();
        ~GUI();
        void mainLoop();
    private:
        void pLoadVec();
};


#endif


