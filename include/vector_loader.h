#ifndef _VECTOR_LOADER_H_
#define _VECTOR_LOADER_H_
#include <vector>
#include <array>
#include "vector_type.h"

template <typename T>
class VectorManager
{
    private:
        std::vector<Vector_t<T>> stackVector_;
    public:
        VectorManager() {};
        ~VectorManager() {};
        void addVector(Vector_t<T> addVec)
        {
            stackVector_.push_back(addVec);
        }
        void removeVector(int id)
        {
        }

        void showVector()
        {
            for(int i = 0; i < stackVector_.size(); ++i)
                std::cout << stackVector_[i] << " ";
            std::cout << std::endl;
        }
};
#endif
