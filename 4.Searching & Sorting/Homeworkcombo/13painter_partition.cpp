#include <bits/stdc++.h>
using namespace std;
bool ispossible(int arr[],int n,int k,long long mid){
    long long  painter=1;
      long long  sum=0;
      for(int i=0;i<n;i++){
          if(sum+arr[i]<=mid){
              sum+=arr[i];
          }
          else{
              painter++;
              if(painter>k || arr[i]>mid){
                  return false;
              }
              sum=arr[i];
          }
          
      }
      return true;
  }
    long long minTime(int arr[], int n, int k)
    {   
       
        long long s=0;
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        long long e=sum;
        long long  ans=-1;
        while(s<=e){
            long long mid =s+(e-s)/2;
            if(ispossible(arr,n,k,mid)){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }

int main(){
    int arr[]={5,5,5,5};
    int k=2;
    int n=4;
    int ans=minTime(arr,n,k);
    cout<<ans;
    // op->10

    
    return 0;
}