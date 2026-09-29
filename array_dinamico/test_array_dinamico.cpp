#include <cassert>
#include "array_dinamico.hpp"

int main() {
    ArrayDinamico a;
    assert(a.size() == 0);

    a.push_back(10);
    assert(a.size() == 1);
    assert(a.get(0) == 10);

    std::cout << "Todos los tests OK" << std::endl;
    return 0;
}