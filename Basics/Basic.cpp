// #include<iostream>
#include <bits/stdc++.h> //all the libraries included
using namespace std;

void printName(string name) {
    cout << "Hey " << name;
}

int add(int a, int b) {
    return a + b;
}

void dosomthing(int num) {
    cout << num << endl;
    num += 5;
    cout << num << endl;
}

void change(int &num) {
    cout << num << endl;
    num += 5;
    cout << num << endl;
}

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    // data types
    int  x = 10;
    long  y = 15;
    float z = 5.6;
    double d = 5;

    // Strings
    string s1;
    string s2;
    cin >> s1 >> s2;
    cout << s1 << " " << s2;

    string str;
    getline(cin, str);
    cout << str;

    // char
    char ch = 'g';
    cout << ch;


   int age = 19;
   if(age >= 18) {
        cout << "You are an adult!" << endl;
   }
   else {
        cout << "You are a child!" << endl;
   }

    int choice = 2;
    switch (choice)
    {
    case 1:
        cout << "hello from 1";
        break;
    case 2:
        cout << "hello from 2";
        break;
    case 3:
        cout << "hello from 3";
        break;
    default:
        break;
    }

    // Arrays
    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    cout << arr[3];

    // 2d array
    int arr2[3][5] = {{1, 2, 3, 4, 5},
                    {6, 7, 8, 9, 10},
                    {11, 12, 13, 14, 15}};
    cout << arr2[2][3];


   string s = "Trupti";
   int len = s.size();
   s[len - 1] = 's';
   cout << s[len - 1];

    // Loops

   int count = 0;
   while(count < 10) {
        cout << count << " ";
        count++;
   }

    for(int i = 0; i < 10; i++) {
        cout << i << " ";
    }

    // Functions
    printName("Trupti");
    cout << "\n" << add(5, 6);

    //pass by value and pass by reference
    int num = 10;
    dosomthing(num);
    cout << num << endl;

    int num2 = 10;
    change(num2);
    cout << num2;

    return 0;
}