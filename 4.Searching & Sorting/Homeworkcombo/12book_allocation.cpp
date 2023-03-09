#include <bits/stdc++.h>

using namespace std;
 bool ispossible(int arr[],int n,int m,int mid){
    int studentcount=1;
    int pagesum=0;
    for(int i=0;i<n;i++){
        if(pagesum+arr[i]<=mid){
            pagesum+=arr[i];
        }
        else{
            studentcount++;
            if(studentcount>m || arr[i]>mid){
                return false;
            }
            pagesum=arr[i];
        }
    }
    return true;
}

    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        int s=0;
        int e=accumulate(A,A+N,0);
        int ans=-1;
        if(M>N){
            return -1;
        }
        while(s<=e){
            int mid=s+(e-s)/2;
            if(ispossible(A,N,M,mid)){
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
    int a[]={10,20,30,40};
    int n=4;
    int m=2;
    int ans=findPages(a,n,m);
    cout<<ans;
    //op->60
    
    return 0;
}