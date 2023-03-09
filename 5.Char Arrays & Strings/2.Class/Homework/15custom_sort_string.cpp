#include <iostream>

using namespace std;
 string customSortString(string order, string s) {
         int arr[26]={0};
      string ans;
       string ans2;
      for(auto i:order){
        arr[i-'a']++;
      }
     
      for(auto i:s){
        if(arr[i-'a']==0){
            ans2+=i;
        }
        else{
            arr[i-'a']++;
        }
      }
      for(auto i:order){
        while(arr[i-'a']>1){
            ans.push_back(i);
            arr[i-'a']--;
        }
      }
    //   cout<<ans+ans2;
        return ans+ans2;
    }

int main(){
    
    return 0;
}