#include<bits/stdc++.h>
using namespace std;

// This program is written to understand the concept so it has some errors due to repeated names.

int main() {

    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>> vec;

    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    vector<int> ve(5, 10);

    vector<int> v1(5, 20);
    vector<int> v2(v1);

    vector<int>::iterator it = v.begin();

    it++;
    cout << *(it) << " ";

    it = it + 2;
    cout << *(it) << " ";

    vector<int>::iterator it = v.end();
    // vector<int>::iterator it = v.rend();
    // vector<int>::iterator it = v.rbegin();

    cout << v[0] << " " << v.at(0);
    cout << v.back() << " ";

    for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }
    for(auto it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }
    for(auto it : v) {
        cout << it << " ";
    }

    // {10, 15, 20, 25, 30}
    v.erase(v.begin() + 1); // {10, 20, 25, 30}
    v.erase(v.begin() + 2, v.begin() + 4); //(start, end)
    // {10, 20}
    // Insert function
    vector<int> v(2, 100); //{100, 100}
    v.insert(v.begin(), 3000); // {3000, 100, 100}
    v.insert(v.begin() + 1, 2, 10); 
    // {3000, 10, 10, 100, 100}

    vector<int> copy(2, 50); // {50, 50}
    v.insert(v.begin(), copy.begin(), copy.end()); 
    // {50, 50, 3000, 10, 10, 100, 100} 

    cout << v.size(); // 7
    v.pop_back(); // {50, 50, 3000, 10, 10, 100}

    // v1 = {10, 20}, v2 = {30, 50}
    v1.swap(v2); // v1 = {30, 50}, v2 = {10, 20}

    v.clear(); // {}
    cout << v.empty(); // true

    return 0;
}