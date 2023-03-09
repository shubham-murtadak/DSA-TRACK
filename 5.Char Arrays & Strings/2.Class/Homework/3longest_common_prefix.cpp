#include <bits/stdc++.h>

using namespace std;
 string longestCommonPrefix(vector<string>& strs) {
       
       int i=0;
       string ans;
       while(1){
           char currchar=0;
           for(auto str: strs){
               if(i>=str.length()){
                   currchar=0;
                   break;
               }
               if(currchar==0){
                   currchar=str[i];
               }
               else if(str[i]!=currchar){
                   currchar=0;
                   break;
               }
           }
           if(currchar==0){
               break;
           }
           ans.push_back(currchar);
           i++;

       }
       return ans;
   
        
    }

int main(){
    vector<string>strs{"flower","flow","flight"};
    string a=longestCommonPrefix(strs);
    cout<<a;
    //output fl
    
    return 0;
}