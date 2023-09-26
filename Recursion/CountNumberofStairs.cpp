#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int countWays(int n)
{
    if(n<0)
        return 0;
    if(n==0)
        return 1;
    return countWays(n-1)+countWays(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<countWays(n);
}