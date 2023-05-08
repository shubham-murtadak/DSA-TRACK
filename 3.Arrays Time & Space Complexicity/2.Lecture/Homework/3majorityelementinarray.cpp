// https://leetcode.com/problems/majority-element/submissions/896238894/

// https://www.geeksforgeeks.org/majority-element/

#include<bits/stdc++.h>
#include<vector>
#include<cmath>
using namespace std;

int majorityElement(vector<int>& nums) {
    int ans = nums[0];
    int cnt=1;
    for(int i=1; i<nums.size(); i++){
        if(cnt>0){
            if(nums[i]==ans)
                cnt++;
            else
                cnt--;
        }
        else{
            ans = nums[i];
            cnt = 1;
        }
    }
    return ans;
}

int main(){
  
    
    vector<int> arr={1,2,2,2,3};
    int n=arr.size();
    map<int,int>check;
    for(int i=0;i<n;i++){
        check[arr[i]]++;
    }
    map<int,int>::iterator it;
    for(it=check.begin();it!=check.end();it++){
       if(it->second >ceil(n/2)){
         cout<<it->first<<" ";

        }
    }
    

    return 0;
}