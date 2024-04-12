#include <iostream>
#include <eigen3/Eigen/Core>
#include "vector_loader.h"
#include "vector_type.h"
#include <array>

int main()
{
    std::array<float, 4> vector = {0.5f, 0.5f, 0.2f, 1};
    int id = 1;
    std::array<float, 3> color = {0.2f, 0.7f, 0.3f};

    Vector_t<float> vec;
    vec.vector = vector;
    vec.ID = id;
    vec.color = color;

    VectorManager<float> VM;
    VM.addVector(vec);
    VM.showVector();
    
}
