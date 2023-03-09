#include <iostream>

using namespace std;
string expandaroundindex(string s,int left,int right){
        int count=0;
        int check=0;
        while(left>=0 && right<s.length() && s[left]==s[right]){
            count++;

            if(count>0){
                check=1;
            }
           
           
            left--;
            right++;

        }
        string ans="";
        if(check>0){

            if(left+1==right-1){
                ans.push_back(s[left+1]);
            }
             else if(left<0 && right>0){
                // cout<<left<<" "<<right<<" ";
                // cout<<"hello";
                return s.substr(left+1,right);

            }
            else{
                   int r=right-left;
                // cout<<l<<" "<<r<<" ";
                return s.substr(left+1,r-1);

            }
        
    }
        return ans;
    }
    string longestPalindrome(string s) {
         int n=s.length();
        string finans="";
        for(int center=0;center<n;center++){
            //even substring count karega
            string evenkaans=expandaroundindex(s,center,center+1);
            if(evenkaans.length()>finans.length()){
                finans=evenkaans;
                // cout<<evenkaans<<" ";
            }
            
            // totalcount+=evenkaans;
            //odd substring count karege

            string oddkaans=expandaroundindex(s,center,center);
            if(oddkaans.length()>finans.length()){
                finans=oddkaans;

            }
           

            
        }
        return finans;
        
        
    }

int main(){
     string s = "babad";
// Output: "bab"
    cout<<longestPalindrome(s);
    
    return 0;
}