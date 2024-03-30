#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    vector<int> vec = {5, 4, 3, 2, 1};
    cout << "Vector Before Sort: " << endl;
    for (i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }

    sort(vec.begin(), vec.end());
    cout << "\n\nVector After Sorting: " << endl;
    for (i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    return 0;
}