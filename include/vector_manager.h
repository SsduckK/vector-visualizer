#ifndef _VECTOR_MANAGER_H_
#define _VECTOR_MANAGER_H_
#include <vector>
#include <array>
#include <algorithm>
#include "vector_type.h"

class VectorManager
{
    private:
        std::vector<Vector_t> stackVector_;
    public:
        VectorManager() {};
        ~VectorManager() {};
        void addVector(Vector_t addVec)
        {
            stackVector_.push_back(addVec);
        }
        void removeVector(int id)
        {
            auto it = std::find_if(stackVector_.begin(), stackVector_.end(), [id](const Vector_t& vec)  { return vec.getID() == id; });
            if (it != stackVector_.end())
            {
                stackVector_.erase(it);
                std::cout << "ID " << id << " removed." << std::endl;
            }
            else 
            {
                std::cout << "ID not in vectors" << std::endl;
            }
        }

        void showVector()
        {
            for(int i = 0; i < stackVector_.size(); ++i)
                std::cout << stackVector_[i] << " ";
            std::cout << std::endl;
        }
};
#endif
