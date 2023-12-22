#include <iostream>
#include<string>
#include<unordered_map>
using namespace std;
bool possiblePalindromicString(string newS){
    int len=newS.size();
    unordered_map<char,int>mp;
    
    for(int i=0;i<len;i++){
        mp[newS[i]]++;
    }
    if(len%2==0){
        for(auto x:mp){
            if(x.second%2!=0)
                return false;
        }
        return true;
    }
    else
    {
        int one=1;
        for(auto x:mp){
            if(x.second%2!=0 && x.second!=1){
                cout<<x.second<<"\n";
                return false;
            }
            if(x.second==1)
            {
                if(one!=0)
                    one--;
                else    return false;
            }
        }
        if(one==0)
            return true;
        else
            return false;
    }

}
int PalindromicPrefixes(string S) {
    
    //this is default OUTPUT. You can change it.
	int result=0;
	
	string newS;
    for(int i=0;i<S.size();i++){
        newS=S.substr(0,i+1);
        cout<<newS<<"\n";
        if(possiblePalindromicString(newS)){
            result+=1;
            // cout<<result<<"\t"<<i<<"\n";
        }
        
    }
    return result;
		
}
int main() {
	//INPUT [uncomment & modify if required]
	string S;
	cin>>S;
	
	//OUTPUT [uncomment & modify if required]
	cout<<PalindromicPrefixes(S);
	return 0;
}