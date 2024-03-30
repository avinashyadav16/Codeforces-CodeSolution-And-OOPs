#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec = {1, 3, 2, 3, 5, 3, 4, 6, 3};
    cout << "Number of times 3 appeared: " << count(vec.begin(), vec.end(), 3) << endl;
    return 0;
}