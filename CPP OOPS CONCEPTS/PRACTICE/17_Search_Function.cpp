#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec1 = {50, 40, 30, 20, 10};
    vector<int> vec2 = {30, 20, 10};

    vector<int>::iterator itr;

    itr = search(vec1.begin(), vec1.end(), vec2.begin(), vec2.end());

    if (itr != vec1.end())
    {
        cout << "Vector2 is present in Vector1 at position: " << (itr - vec1.begin()) << endl;
    }
    else
    {
        cout << "Vector2 is not present." << endl;
    }

    return 0;
}