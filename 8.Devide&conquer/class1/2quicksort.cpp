#include<iostream>
using namespace std;
int partition(int arr[],int s,int e){
    //1)pivot ko select karo

    int pivotindex=s;
    int pivot=arr[s];

    //2)pivot ko uski right jagah pe place karo
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot) count++;
    }
    int rightindex=s+count;

    swap(arr[pivotindex],arr[rightindex]);

    pivotindex=rightindex;

    //3)left part me sare chote element hone chahiye pivot se aur 
    //right part me sare bade elemenent hone chahiye pivot se

    int i=s;
    int j=e;
    while(i<pivotindex && j>pivotindex){
        //left part
        while(arr[i]<=pivot){
            i++;
        }

        while(arr[j]>pivot){
            j--;
        }

        if(i<pivotindex && j>pivotindex){
            swap(arr[i],arr[j]);
        }

         return pivotindex;
       

    }
}
void quicksort(int arr[],int s,int e){
    //base case likho
    if(s>=e) return ;
    //partition karo
    int p=partition(arr,s,e);
    // cout<<p;
    //recursion se left part sort karke lo
    quicksort(arr,s,p-1);
    //recursion se right part sort karke lo
    quicksort(arr,p+1,e);
}
int main(){
    int arr[]={8,7,6,4,2};
    int n=5;
    int s=0;
    int e=n-1;
    quicksort(arr,s,e);
    for(auto i:arr){
        cout<<i<<" ";
    }
    return 0;
}