#include <bits/stdc++.h>

using namespace std;
int strstr(string haystack, string needle) {
        int ans=haystack.find(needle);
        if(ans!=string::npos){
            return ans;
        }
        else{
            return -1;
        }
    }

int main(){
    string a="matkasur is greatest tiger of all time ";
    string b="greatest";
    int d=strstr(a,b);
    cout<<d;
    
    return 0;
}