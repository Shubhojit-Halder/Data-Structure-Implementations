#include <bits/stdc++.h>
using namespace std;

int LongestSubarWithSumkOnlyPositive(vector<int> arr, int k)
{
    int left = 0, right = 0;
    long long sum = arr[0];
    int maxLen = 0;
    while (right < arr.size())
    {
        // if sum > k, reduce the subarray from left
        // until sum becomes less or equal to k:
        while (left <= right && sum > k)
        {
            sum -= arr[left];
            left++;
        }
        // if sum = k, update the maxLen i.e. answer:
        if (sum == k)
        {
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
        if (right < arr.size())
            sum += arr[right];
    }
    return maxLen;
}
int LongestSubarWithSumkOnlyPositiveNegative(vector<int> arr, int k)
{
    unordered_map<int, int> preSumMap;
    int sum = 0;
    int maxLen = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        //calculate the prefix sum till index i:
        sum += arr[i];

        // if the sum = k, updarrte the maxLen:
        if (sum == k) {
            maxLen = max(maxLen, i + 1);
        }

        // calculate the sum of remaining part i.e. x-k:
        int rem = sum - k;

        //Calculate the length and update maxLen:
        if (preSumMap.find(rem) != preSumMap.end()) {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }

        //Finally, update the map checking the conditions:
        if (preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
    }
    return maxLen;
}
int main()
{
    vector<int> arr = {2, 3, 5, 1, 9};
    int k = 10;

    // cout << LongestSubarWithSumkOnlyPositive(arr, k);
    cout << LongestSubarWithSumkOnlyPositiveNegative(arr, k);
}