#include <iostream>
#include "MinHeap.hpp"
using namespace std;

// Use a MinHeap to sort ascending
template <typename T>
void heapsort(vector<T>& arr) {
    MinHeap<T> h;

    // Insert all elements into the heap
    for (const T& x : arr)
        h.insert(x);

    // Repeatedly remove the root (minimum) and place back into array
    for (int i = 0; i < (int)arr.size(); i++)
        arr[i] = h.removeRoot();
}

int main() {
    vector<int> arr = {5, 1, 9, 3, 7, 4};

    heapsort(arr);

    for (int x : arr)
        cout << x << " ";
    cout << endl;

    return 0;
}
