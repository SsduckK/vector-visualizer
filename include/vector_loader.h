#include <array>


template <typename T>
class VectorManager
{
    private:
        std::array<T, 4> vector;
    public:
        VectorManager();
        VectorManager(std::array<T, 4>);
        ~VectorManager();
};
