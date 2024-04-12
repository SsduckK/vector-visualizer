#ifndef _TRANSFORM_CALC_H_
#define _TRANSFORM_CALC_H_

#include <vector>
#include <array>
#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Dense>
#include "type_def.h"

class transformCalculator
{
    private:
        Vector_t vector_;
        Matrix_t Matrix_;
    
    public:
        transformCalculator();
        ~transformCalculator();
        void setVector(std::array<float, 4>);
        void setMatrix(Eigen::Matrix4f);
};

#endif
