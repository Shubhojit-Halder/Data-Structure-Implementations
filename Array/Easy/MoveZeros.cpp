#include<bits/stdc++.h>
using namespace std;

class MoveZeros
{
public:
    void moveZeros(vector<int>&arr){
        int i=0,j;
        while(arr[i]!=0){
            i++;
        }
        j=i+1;
        while(j<arr.size()){
            if(arr[j]!=0){
                swap(arr[i],arr[j]);
                i++;
            }
            j++;
        }
    }
};
int main()
{
    vector<int>arr={1,2,0,0,3,0,4,5,0};
    MoveZeros M;
    M.moveZeros(arr);
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
}
