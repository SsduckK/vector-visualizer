#include "transformCalc.h"

transformCalculator::transformCalculator() {};

transformCalculator::~transformCalculator() {};

Vector_t transformCalculator::vectorAdd(Vector_t* src, Vector_t* trans)
{
    Vector_t transformedVector;
    transformedVector.vector[0] = src->vector[0] + trans->vector[0];
    transformedVector.vector[1] = src->vector[1] + trans->vector[1];
    transformedVector.vector[2] = src->vector[2] + trans->vector[2];
    transformedVector.ID = -1;
    transformedVector.color = {0.f, 0.f, 0.f};

    return transformedVector;
}
