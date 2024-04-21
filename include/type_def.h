#ifndef _VECTOR_TYPE_H_
#define _VECTOR_TYPE_H_
#include <array>
#include <iostream>
#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Dense>


struct CustomVector
{
    std::array<float, 4> vector;
    int ID;
    std::array<float, 3> color;
    
    int getID() const
    {
        return ID;
    }

    friend std::ostream& operator<<(std::ostream& os, const CustomVector& vec)
    {
        os << "===Vector===\n";
        for(int v = 0; v < vec.vector.size(); ++v)
            os << vec.vector[v] << " ";
        os << "\n====ID===\n" << vec.ID << "\n===COLOR===\n";
        for(int c = 0; c < vec.color.size(); ++c)
            os << vec.color[c] << " ";
        os << "\n";
        return os;
    }

};

struct CustomMatrix
{
    Eigen::Matrix4f matrix;
    int ID;

    int getRows() const
    {
        return matrix.rows();
    }
    
    int getCols() const
    {
        return matrix.cols();
    }

    friend std::ostream& operator<<(std::ostream& os, const CustomMatrix& mat)
    {
        os << "===Matrix===\n";
        for(int r = 0; r < mat.getRows(); ++r)
        {
            for(int c = 0; c < mat.getCols(); ++c)
                os << mat.matrix(r, c) << " ";
            os << "\n";
        }
        os << "===ID===\n" << mat.ID << std::endl;
        return os;
    }
};

using Vector_t = CustomVector; 
using Matrix_t = CustomMatrix;

#endif
