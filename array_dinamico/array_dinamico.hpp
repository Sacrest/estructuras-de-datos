#pragma once
#include <iostream>

class ArrayDinamico {
private:
    int* datos;
    int tam;
    int cap;   // cuántos caben

public:
    ArrayDinamico(){
       cap = 2;
       tam = 0;
       datos = new int[cap];
    };

    ~ArrayDinamico(){
        delete[] datos;
    };

    ArrayDinamico(const ArrayDinamico&) = delete;
    ArrayDinamico& operator=(const ArrayDinamico&) = delete;

    void push_back(int x){
        datos[tam] = x;
        tam++;
    }
    int get(int i) const {return datos[i]; }
    int size() const {return tam; }
    int capacity() const {return 0; }
    void insert(int pos, int x) {}
    void remove(int pos) {}
    int find(int x) const {return 0;}
    void print() const {}
};