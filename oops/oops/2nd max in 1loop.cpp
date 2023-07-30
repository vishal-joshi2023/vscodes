#include<iostream>
using namespace std;

int main() {
    int x[10] = {1,3,2,5,6,7,8,9,4,10};
    int i, n=10;
    int first = x[0];
    int second = x[0];


    for (i = 0; i < n; ++i) {
        if (first < x[i]) {
            second = first;
            first = x[i];
        } else
        if (x[i] > second && x[i] != first) {
            second = x[i];
        }
    }

    if (second != first)
        cout<<second;

    return 0;
}
