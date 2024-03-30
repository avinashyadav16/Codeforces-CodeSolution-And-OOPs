#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> vec = {10, 20, 30, 40};
    auto it = find(vec.begin(), vec.end(), 40);

    if (it != vec.end())
    {
        cout << "ELEMENT FOUND: " << *it;
    }

    else
    {
        cout << "ELEMENT NOT FOUND";
    }

    return 0;
}