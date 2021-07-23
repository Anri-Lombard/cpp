// arr is static: int items[] = {12, 13}
// vectors are dynamic: std:vector<int> items = {12, 13}
// items.push_bnack(100)
// items[2]
// items.size()
#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> g1;

    // itterators

    for (int i=0; i<=5; i++) {
        g1.push_back(i);
    }
    
    cout << "Output of begin and end: ";
    for (auto i=g1.begin(); i != g1.end(); ++i) {
        cout << *i << " ";
    }

    cout << "\nOutput of cbegin and cend: ";
    for (auto i = g1.cbegin(); i != g1.cend(); ++i) {
        cout << *i << " ";
    }

    cout << "\nOutput of rbegin and rend: ";
    for (auto ir=g1.rbegin(); ir != g1.rend(); ++ir) {
        cout << *ir << " ";
    }

    cout << "\nOutput of crbegin and crend: ";
    for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir) {
        cout << *ir << " ";
    }

    // Capacity
    cout << endl;
    cout << "Size: " << g1.size();
    cout << "\nCapacity: " << g1.capacity();
    cout << "\nMax_size: " << g1.max_size();

    g1.resize(4);

    cout << "\nSize: " << g1.size();

    if (g1.empty() == false) {
        cout << "\nVector is not empty";
    } else {
        cout << "\nVector is empty";
    }

    g1.shrink_to_fit();
    cout << "\nVector elements are: ";
    for (auto it = g1.begin(); it != g1.end(); it++)
        cout << *it << " ";
    cout << endl;


    //Elements access
    cout << "\nReference operator [g]: g1[2] = " << g1[2];
    cout << "\nat: g1.at(3) = " << g1.at(3);
    cout << "\nfront() : g1.front() = " << g1.front();
    cout << "\nback() : g1.back() = " << g1.back();

    int* pos = g1.data();

    cout << "\nThe first element is: " << *pos << endl;
    
    // Modifiers
    

    return 0;
}