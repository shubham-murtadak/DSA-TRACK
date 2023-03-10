#include<bits/stdc++.h>
using namespace std;
//1.remove adjacent duplicates 
   string removeDuplicates(string s) {
        string ans="";
        for(int i=0;i<s.length();i++){
            if(ans.length()>0){
                if(ans[ans.length()-1]==s[i]){
                    ans.pop_back();
                }
                else{
                    ans.push_back(s[i]);
                }
            }
            else{
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
    
//2) remove occurances of a substring 
 string removeOccurrences(string s, string part) {
        int partindex=s.find(part);
        while(partindex!=string::npos){
            s.erase(partindex,part.length());
            partindex=s.find(part);
        }
        return s;
 }

 //3)valid palidrome 2
  bool checkpalindrome(string st,int s,int e){
        while(s<=e){
            if(st[s]==st[e]){
                s++;
                e--;
            }
            else{
                return false;
                break;
            }
        }
        return true;
    }
    bool validPalindrome(string st) {
        int s=0;
        int e=st.length()-1;

        while(s<=e){
            if(st[s]==st[e]){
                s++;
                e--;
            }
            else{
                return checkpalindrome(st,s+1,e) || checkpalindrome(st,s,e-1);
            }
        }
        return true;
        
    }
    
    //4)minimum time difference
    int findMinDifference(vector<string>& timePoints) {
        // step 1:convert string data to intiger
        vector<int>minutes;
        for(int i=0;i<timePoints.size();i++){
            int hours=stoi(timePoints[i].substr(0,2));
            int minit=stoi(timePoints[i].substr(3,2));
            int hourtomin=hours*60+minit;
            minutes.push_back(hourtomin);

        }
        //step2 sort vecotr to fin diff
        sort(minutes.begin(),minutes.end());

        //step 3) find difference
        int mini=INT_MAX;
        int n=minutes.size();
        for(int i=0;i<n-1;i++){
            int diff=minutes[i+1]-minutes[i];
            mini=min(mini,diff);
        }
        //catch time is rotatbel format so to find difference between first and last time add 1440(24 hours ) to first time so that it will converted into rotated format
        int firstandlastdiff1=(minutes[0]+1440)-minutes[n-1];
        int firstandlastdiff2=minutes[n-1]-minutes[0];
        int lastdiff=min(firstandlastdiff1,firstandlastdiff2);
        mini=min(mini,lastdiff);

        return mini;
        
}
//6 palindromic substirng
    int expandaroundindex(string s,int left,int right){
        int count=0;
        while(left>=0 && right<s.length() && s[left]==s[right]){
            count++;
            left--;
            right++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int totalcount=0;
        int n=s.length();
        for(int center=0;center<n;center++){
            //even substring count karega
            int evenkaans=expandaroundindex(s,center,center+1);
            totalcount+=evenkaans;
            //odd substring count karege

            int oddkaans=expandaroundindex(s,center,center);
            totalcount+=oddkaans;

            //toatalcount

            
        }
        return totalcount;
        
    }


int main(){
    //min difeerence
    // vector<string>st{"22:39","12:24","16:23","18:20"};
    // int ans=findMinDifference(st);
    // cout<<ans;
    string st="bb";
    cout<<countSubstrings(st)<<endl;
    return 0;
}