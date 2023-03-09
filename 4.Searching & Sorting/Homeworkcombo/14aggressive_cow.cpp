#include <bits/stdc++.h>

using namespace std;
bool ispossible(vector<int>stalls,int n,int k,int mid){
        int cow=1;
        int distance=stalls[0];
        for(int i=0;i<n;i++){
            if(stalls[i]-distance>=mid){
                cow++;
                 distance=stalls[i];
                
               
            }
            if(cow==k){
                    return true;
                }
           
        }
        return false;
        
    }
    int solve(int n, int k, vector<int> &stalls) {
        sort(stalls.begin(),stalls.end());
        int s=0;
        int e=stalls[stalls.size()-1]-stalls[0];
       
       
        int ans=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(ispossible(stalls,n,k,mid)){
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return ans;
    }

int main(){
    vector<int>arr{1,2,4,8,9};
    int k=3;//cow
    int n=5;
    int ans=solve(n,k,arr);
    cout<<ans;
    //op->3
    
    return 0;
}