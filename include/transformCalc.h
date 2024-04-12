#ifndef _TRANSFORM_CALC_H_
#define _TRANSFORM_CALC_H_

#include <vector>
#include <array>
#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Dense>
#include "type_def.h"

class transformCalculator
{
    public:
        transformCalculator();
        ~transformCalculator();
        Vector_t vectorAdd(Vector_t*, Vector_t*);
};

#endif
