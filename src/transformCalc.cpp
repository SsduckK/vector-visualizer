
#include "transformCalc.h"

transformCalculator::transformCalculator() {};

transformCalculator::~transformCalculator() {};

void transformCalculator::setVector(std::array<float, 4> inputVector)
{
    vector_ = inputVector;
}

void transformCalculator::setMatrix(Eigen::Matrix4f inputMatrix)
{
    Matrix_ = inputMatrix;
}
