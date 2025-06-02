#include<iostream>
#include<vector>
using namespace std;

// vector in c++ is kind of an dynamic array in which you can insert and delete elements at runtime.

// The working of vector in c++ is such that if you push a element in the vector it allocates the memory for it and it remains that memory until the vector fills completely, if you push one more element in it the memory allocation doubles i.e. the capacity of the vector becomes two times from its previous one.

// Capacity is the memory allocated to the vector and size is how many elements are actually present in the vector.

// push_back is used to insert an element 

int main(){
    vector<int> vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);
    vec.push_back(7);
    vec.push_back(8);
    vec.push_back(9);
    int num = vec.back();
    vec.pop_back();
    cout << num << endl;
    cout << vec.size() <<endl;
    cout << vec.capacity() <<endl;
}