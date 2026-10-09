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

    void push_back(int x) {
        if (tam == cap) {
            int* nuevo = new int[cap * 2];
            for (int j = 0; j < tam; j++) {
                nuevo[j] = datos[j];
            }
            delete [] datos;
            datos = nuevo;
            cap = cap * 2;
        }
        datos[tam] = x;
        tam++;
    }

    int find(int x) const {
        for (int j = 0; j < tam; j++) {
            if (datos[j] == x) {
                return j;
            }
        }
        return -1;}

    int get(int i) const {return datos[i]; }
    int size() const {return tam; }
    int capacity() const {return cap; }

    void insert(int pos, int x) {
            if (tam == cap) {
                int* nuevo = new int[cap * 2];
                for (int j = 0; j < tam; j++) {
                nuevo[j] = datos[j];
                }
                delete [] datos;
                datos = nuevo;
                cap = cap * 2;
            }
        for (int j = tam; j > pos; j--) {
            datos [j] = datos [j - 1];
        }
        datos[pos] = x;
        tam++;

    }
    void remove(int pos) {
        for (int j = pos; j < tam - 1; j++) {
            datos [j] = datos [j + 1];
        }
        tam--;
    }

    void print() const {
        for (int j = 0; j < tam; j++) {
            std::cout << datos[j] << " ";
        }
        std::cout << std::endl;
    }
};