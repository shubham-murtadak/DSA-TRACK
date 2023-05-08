#include <bits/stdc++.h>

using namespace std;
 void solve(vector<string>&hash,string&digits,int index,vector<string>&ans,string output){
        //base case
        if(index>=digits.length()){
            ans.push_back(output);
            return;
            
        }

        //ek case sambhalo baki recursion sambhal lega
        int num=digits[index]-'0';
        string val=hash[num];
        for(int i=0;i<val.size();i++){
            //include karo
            char c=val[i];
            output.push_back(c);
            //recursion
            solve(hash,digits,index+1,ans,output);
            //backtrack
            output.pop_back();
        }
    }
 

int main(){
     vector<string>hash(10);
        hash[2]="abc";
        hash[3]="def";
        hash[4]="ghi";
        hash[5]="jkl";
        hash[6]="mno";
        hash[7]="pqrs";
        hash[8]="tuv";
        hash[9]="wxyz";
        int index=0;
        vector<string>ans;
        string output="";
        string digits="23";

        // if(digits.size()==0){
        //     return ans;
        // }
        solve(hash,digits,index,ans,output);
        for(auto i:ans){
            cout<<i<<" ";
        }

        
    

    
    return 0;
}