#ifndef _VECTOR_TYPE_H_
#define _VECTOR_TYPE_H_
#include <array>
#include <iostream>

template <typename T>

struct CustomVector
{
    std::array<T, 4> vector;
    int ID;
    std::array<float, 3> color;

    friend std::ostream& operator<<(std::ostream& os, const CustomVector<T>& other)
    {
        os << "Vector : ";
        for(int v = 0; v < other.vector.size(); ++v)
            os << other.vector[v] << " ";
        os << ", ID : " << other.ID << ", COLOR : ";
        for(int c = 0; c < other.color.size(); ++c)
            os << other.color[c] << " ";
        os << "\n";
        return os;
    }

};

template <typename T>
using Vector_t = CustomVector<T>;
#endif
