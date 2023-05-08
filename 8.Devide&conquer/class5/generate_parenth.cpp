#include<bits/stdc++.h>
using namespace std;
   void solve(vector<string>&ans,int open,int close,string output){
        //base case
        if(open==0  && close ==0){
            ans.push_back(output);
            return;
        }

        //include karo open bracket ko
        if(open>0){
            output.push_back('(');
            //recursion
            solve(ans,open-1,close,output);
            //backtrack
            output.pop_back();
        }
        //include karo close bracket ko useke liye open bracket jada hone chahiye close se
        if(close>open){
            output.push_back(')');
            //recursion
            solve(ans,open,close-1,output);
            //backtrack
            output.pop_back();
        }
    }

int main(){
    int n=3;
    vector<string>ans;
    
        string output="";
        int open=n;
        int close=n;
     solve(ans,open,close,output);
        for(auto i:ans){
            cout<<i<<" ";
        }
    
    
    
    return 0;
}