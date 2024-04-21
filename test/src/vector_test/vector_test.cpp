#include <iostream>
#include "gtest/gtest.h"
#include "type_def.h"
#include "vector_manager.h"
#include "transformCalc.h"
#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Dense>


class TransformTest : public::testing::Test
{
    public:
        std::array<float, 4> vector1; 
        std::array<float, 3> color1;  
        std::array<float, 4> vector2; 
        std::array<float, 3> color2;

        Eigen::Matrix4f matrix1;

    protected:
        virtual void SetUp()override
        {

            vector1 = {1, 2, 3, 4};
            color1 = {0.7, 0, 0};
            vector2 = {5, 6, 7, 8};
            color2 = {0, 0.7, 0};


            matrix1 << 1, 2, 3, 4,
                5, 6, 7, 8,
                9, 10, 11, 12,
                13, 14, 15, 16;
        }

        virtual void TearDown()override{}
};

TEST_F(TransformTest, CreateCustomVector)
{
    Vector_t vec;
    vec.vector = vector1;
    vec.ID = 1;
    vec.color = color1;

    Vector_t vec2;
    vec2.vector = vector2;
    vec2.ID = 2;
    vec2.color = color2;

    VectorManager VM;
    VM.addVector(vec);
    VM.addVector(vec2);
    VM.showVector();
    VM.removeVector(2);
    VM.showVector();
}


TEST_F(TransformTest, CalculateCustomVector)
{
    Vector_t vec;
    vec.vector = vector1;
    vec.ID = 1;
    vec.color = color1;

    Vector_t vec2;
    vec2.vector = vector2;
    vec2.ID = 2;
    vec2.color = color2;

    VectorManager VM;
    VM.addVector(vec);
    VM.addVector(vec2);

    transformCalculator transformcalc;
    Vector_t transedVec = transformcalc.vectorAdd(&vec, &vec2);
    std::cout << transedVec << std::endl;
}

TEST_F(TransformTest, MatrixCalc)
{
    Matrix_t mat;
    mat.matrix = matrix1;
    mat.ID = 1; 

    std::cout << mat << std::endl;

}
