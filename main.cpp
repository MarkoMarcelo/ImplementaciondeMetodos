#include <iostream>
#include "DynamicArray.cpp"

using namespace std;

int main() {

    int arreglo[] = {1,2,3,6,5,4,8,9};
    int tam = sizeof(arreglo) / sizeof(arreglo[0]);

    DynamicArray b(arreglo, tam);
        
    b.print();
    b.push_back(2);    
    b.print();
    b.insert(100,2);
    b.print();
    b.remove(4);
    b.print();

    return 0;
}
