#include <cassert>
#include "array_dinamico.hpp"

int main() {
    ArrayDinamico a;
    assert(a.size() == 0);

    a.push_back(10);
    assert(a.size() == 1);
    assert(a.get(0) == 10);
    a.push_back(20);
    assert(a.size() == 2);
    assert(a.get(1) == 20);
    a.push_back(30);
    assert(a.size() == 3);
    assert(a.get(2) == 30);

    assert(a.find(20) == 1);
    assert(a.find(999) == -1);
    a.print();

    std::cout << "Todos los tests OK" << std::endl;
    return 0;
}