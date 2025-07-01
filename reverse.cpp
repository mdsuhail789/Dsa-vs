#include <iostream>
#include <vector>
using namespace std;

void reverseVector(vector<int>& v) {
    int n = v.size();
    for (int i = 0; i < n / 2; i++) {
        swap(v[i], v[n - i - 1]);
    }
}

int main() {
    vector<int> v = {10, 20, 30, 40, 50};

    reverseVector(v);

    for (int val : v) {
        cout << val << " ";
    }
    return 0;
}