#include <bits/stdc++.h>
using namespace std;
class RotateArr
{
public:
    void LeftrotateArr(vector<int> &arr, int k)
    {
        k = k % arr.size();
        reverse(arr.begin(), arr.begin() + k);
        reverse(arr.begin() + k, arr.end());
        reverse(arr.begin(), arr.end());
    }
    void RightrotateArr(vector<int> &arr, int k)
    {
        k = k % arr.size();
        reverse(arr.begin(), arr.end() - k);
        reverse(arr.end() - k, arr.end());
        reverse(arr.begin(), arr.end());
    }
};
int main()
{
    RotateArr *R = new RotateArr();
    vector<int> arr = {1, 2, 3, 4, 5};
    R.LeftrotateArr(arr, 2);
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";

    cout << endl;
    vector<int> arr1 = {1, 2, 3, 4, 5};
    R.RightrotateArr(arr1, 2);
    for (int i = 0; i < arr1.size(); i++)
        cout << arr1[i] << " ";
}
