#include<bits/stdc++.h>
using namespace std;

void f(int i, int n) {
    if(i > n) return;
    cout << "Trupti" << endl;
    f(i+1, n);
}

void printNum(int i , int n) {
    if(i > n) return;
    cout << i << " ";
    printNum(i+1, n);
}

void printBackward(int n) {
    if(n < 1) return;
    cout << n << " ";
    printBackward(n-1);
}

void printBacktrack(int n) {
    if(n < 1) return;
    printBacktrack(n-1);
    cout << n << " ";
}

int main() {
    int n;
    cin >> n;

    // f(1, n);
    // printNum(1, n);
    // printBackward(n);
    printBacktrack(n);

    return 0;
}