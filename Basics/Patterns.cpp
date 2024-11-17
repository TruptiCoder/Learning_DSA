#include<iostream>
using namespace std;

void Box(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void Pyramid(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i+1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void PyramidNum(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 1; j <= i+1; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

void PyramidReverse(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n-i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void CompletePyramid(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n-i-1; j++) {
            cout << "  ";
        }
        for(int j = 0; j < (2*i+1); j++) {
            cout << "* ";
        }
        for(int j = 0; j < n-i-1; j++) {
            cout << "  ";
        }
        cout << endl;
    }
}

void RevCompPyramid(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {
            cout << "  ";
        }
        for(int j = 0; j < 2*(n-i-1)+1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void diamond(int n) {
    CompletePyramid(n);
    RevCompPyramid(n);
}

void halfDiamond(int n) {
    Pyramid(n);
    for(int i = 1; i < n; i++) {
        for(int j = 0; j < n-i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void BinaryPyramid(int n) {
    int num = 0;
    for(int i = 0; i < n; i++) {
        num = num == 0 ? 1 : 0;
        int n = num;
        for(int j = 0; j < i+1; j++) {
            cout << n << " ";
            n = n == 0 ? 1 : 0;
        }
        cout << endl;
    }
}

void twoHalfPyramid(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i+1; j++) {
            cout << j+1 << " ";
        }
        for(int j = 0; j < n-i-1; j++) {
            cout << "  ";
        }
        for(int j = 0; j < i+1; j++) {
            cout << (i+1-j) << " ";
        }
        cout << endl;
    }
}

void numberPyramid(int n) {
    int count = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i+1; j++) {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}

void nLetterTriangle(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i+1; j++) {
            cout << (char)(j+65) << " ";
        }
        cout << endl;
    }
}

void ReversenLetterTriangle(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < (n-i); j++) {
            cout << (char)(j+65) << " ";
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;

    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;
        // Box(n);
        // Pyramid(n);
        // PyramidNum(n);
        // PyramidReverse(n);
        // CompletePyramid(n);
        // RevCompPyramid(n);
        // diamond(n);
        // halfDiamond(n);
        // BinaryPyramid(n);
        // twoHalfPyramid(n);
        // numberPyramid(n);
        // nLetterTriangle(n);
        ReversenLetterTriangle(n);
    }

    return 0;
}