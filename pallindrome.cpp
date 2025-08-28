#include<bits/stdc++.h>
using namespace std;

bool isPallin(string &s,int n){
    int i = 0;
    int j = n-1;
    while(i < j){
        if(s[i] != s[j]) return false;
        i++;
        j--;
    }
    return true;
}

int main(){
    string s = "aaabaaa";
    int n = s.size();
    bool ans = isPallin(s,n);
    cout<<ans<<endl;
    return 0;
}