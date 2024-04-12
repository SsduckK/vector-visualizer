#include <algorithm>
#include <iostream>
#include <eigen3/Eigen/Core>
#include <array>

#include "vector_manager.h"
#include "type_def.h"
#include "transformCalc.h"

int main()
{
    std::array<float, 4> vector = {0.5f, 0.5f, 0.2f, 1};
    int id = 1;
    std::array<float, 3> color = {0.2f, 0.7f, 0.3f};
    std::array<float, 4> vector2 = {0.5f, 0.5f, 0.2f, 1};
    int id2 = 2;
    std::array<float, 3> color2 = {0.5f, 0.1f, 0.5f};
    Vector_t vec;
    vec.vector = vector;
    vec.ID = id;
    vec.color = color;

    Vector_t vec2;
    vec2.vector = vector2;
    vec2.ID = id2;
    vec2.color = color2;

    VectorManager VM;
    VM.addVector(vec);
    VM.addVector(vec2);
    VM.showVector();
    VM.removeVector(2);
    VM.showVector();

    Eigen::Matrix4f mat;

    mat << 1, 2, 3, 4,
        5, 6, 7, 8,
        9, 10, 11, 12,
        13, 14, 15, 16;

    std::cout << mat << std::endl;

    transformCalculator transformcalc;
    Vector_t transedVec = transformcalc.vectorAdd(&vec, &vec2);
    std::cout << transedVec << std::endl;
}
