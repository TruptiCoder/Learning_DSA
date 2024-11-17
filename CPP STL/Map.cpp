#include<bits/stdc++.h>
using namespace std;

int main() {

    map<int , int> mpp1;
    map<int , pair<int, int>> mpp2;
    map<pair<int, int>, int> mpp3;

    mpp1[1] = 2;
    mpp1.emplace(3, 1);
    mpp1.insert({2, 4});
    mpp3[{2, 3}] = 10;
    mpp2[3] = {1, 2};

    for(auto it : mpp1) {
        cout << it.first << " " << it.second << endl;
    }
    cout << mpp1[1];
    cout << mpp1[5];

    auto it = mpp2.find(3);
    // cout << *(it).second;

    auto it = mpp1.find(5);

    return 0;
}