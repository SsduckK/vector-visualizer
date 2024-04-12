#ifndef _VECTOR_TYPE_H_
#define _VECTOR_TYPE_H_
#include <array>
#include <iostream>


struct CustomVector
{
    std::array<float, 4> vector;
    int ID;
    std::array<float, 3> color;
    
    int getID() const
    {
        return ID;
    }

    friend std::ostream& operator<<(std::ostream& os, const CustomVector& other)
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

using Vector_t = CustomVector; 

#endif
