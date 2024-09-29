#include <iostream>
using namespace std;

class A {
    int data;
public:
    A() {
        data = 10;
    }
    A(int data) {
        this->data = data;
    }
    void show() {
        cout << data << endl;
    }
};

int main() {
    int *da = new int[20]; // Allocate an array of 20 integers
    int *arr = new int[10]; // Allocate an array of 10 integers

    A *ptr = new A(); 

    delete[] da; 
    delete[] arr; 
    delete ptr; 
    
    return 0; 
}
