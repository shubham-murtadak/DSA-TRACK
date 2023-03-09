#include <bits/stdc++.h>

using namespace std;
 string convert(string s, int row) {
    bool check=false;
    int j=0;
    vector<string>arr(row);
    if(row==1) return s;
    for(int i=0;i<s.length();i++){
        arr[j]+=s[i];
        if(j==0 || j==row-1){
            check=!check;
        }
       
        if(check){
            j++;
        

        }
        else{
            j--;

    }
}
string ans;
    for(auto i:arr){
        ans+=i;
    }
    return ans;
       
    }

int main(){
   string s = "PAYPALISHIRING";
   int numRows = 3;
   cout<<convert(s,numRows);
// Output: "PAHNAPLSIIGYIR"
    
    return 0;
}