#include<bits/stdc++.h>
using namespace std;
void merge(int *arr,int s,int e){
    int mid=(s+e)/2;

    int len1=mid-s+1;
    int len2=e-mid;

    int*left=new int[len1];
    int*right=new int[len2];

    //copy karo left array me
    int k=s;          //yha galti hogi dhyan dena bhai
    for(int i=0;i<len1;i++){
        left[i]=arr[k];
        k++;
    }
    
    //copy karo right array me
    k=mid+1;
    for(int i=0;i<len2;i++){
        right[i]=arr[k];
        k++;
    }

    //merge karo left and right ko

    int leftindex=0;
    int rightindex=0;
    int mainarrindex=s;

    while(leftindex<len1 && rightindex<len2){
        if(left[leftindex]<right[rightindex]){
            arr[mainarrindex++]=left[leftindex++];
        }
        else{
            arr[mainarrindex++]=right[rightindex++];
        }
    }

   while(leftindex<len1){
    arr[mainarrindex++]=left[leftindex++];
   }
   while(rightindex<len2){
    arr[mainarrindex++]=right[rightindex++];
   }

}
void mergesort(int*arr,int s,int e){
    //base case
    if(s>=e){
        return ;
    }

    //divide karo mid find karke
    int mid=(s+e)/2;

    //recursion se left part sort karke lo

    mergesort(arr,s,mid);

    //recursion se right part sort karke lo

    mergesort(arr,mid+1,e);

    //merge karo left and right part ko
    merge(arr,s,e);
}
int main(){
    int arr[]={4,5,13,2,12};
    int n=5;
    int s=0;
    int e=n-1;
    mergesort(arr,s,e);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

/*homework--> 1)inversion count famous interview question 
              2) why space complexity is O(nlogn)
              3)what is space complexity
              4)can we do merge sort without using extra space write code of it 
*/

        