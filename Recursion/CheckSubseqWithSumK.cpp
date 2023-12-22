#include <bits/stdc++.h>
using namespace std;
class CheckSubseqWithSumK
{
private:
    bool solve(int idx, int target, vector<int> &arr)
    {

        if (target == 0)
            return true;
        if(idx==arr.size()-1)
            return arr[arr.size()-1]==target;
        // notTake
        bool notTake = solve(idx + 1, target, arr);
        // take
        bool take = false;
        if (target >= arr[idx])
            take = solve(idx + 1, target - arr[idx], arr);
        return take | notTake;
    }

public:
    int CheckIfSubseqWithSumKExists(vector<int> &arr, int target)
    {
        return solve(0, target, arr);
    }
};

int main()
{
    vector<int> arr = {1, 3, 2, 4};
    CheckSubseqWithSumK C;
    cout << C.CheckIfSubseqWithSumKExists(arr, 11);
}
