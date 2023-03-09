#include <bits/stdc++.h>

using namespace std;
static bool check(string s1,string s2){
    return (s1+s2)>=(s2+s1);
}
    string largestNumber(vector<int>& arr) {
        int count=0;
    // vector<int>arr{1,1,1,2,20,22};
    for(auto i:arr){
        if(i==0){
            count++;
        }

    }
    if(count==arr.size()){
        return "0";
    }
    vector<string>s(arr.size());
    for(int i=0;i<arr.size();i++){
        s[i]=to_string(arr[i]);

    }
    sort(s.begin(),s.end(),check);
    string ans;
    for(auto i:s){
        ans+=i;
    }
    return ans;
       
    }
int main(){
    
    
    return 0;
}