#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {1, 0, 0, 2,};
    int low = 0, mid = 0, high = arr.size() - 1;
    while(mid<=high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else{
            swap(arr[high],arr[mid]);
            high--;
        }
    }
    for(int i=0;i<arr.size();i++)
        cout<<arr[i];
}