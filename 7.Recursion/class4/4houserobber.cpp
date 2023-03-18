#include <bits/stdc++.h>

using namespace std;
void rob(vector<int>& nums,int i,int sum,int&maxi) {
        // int maxi=INT_MIN;
        // int sum=0;
        if(i>=nums.size()){
            maxi=max(sum,maxi);
            return ;
        }

        //include
        rob(nums,i+2,sum+nums[i],maxi);
        //exclude
        rob(nums,i+1,sum,maxi);
        
    }

int main(){
    vector<int>arr{1,2,3,1};
    int sum=0;
    int maxi=INT_MIN;
    int i=0;
    rob(arr,i,sum,maxi);
    cout<<maxi;
    return 0;
}