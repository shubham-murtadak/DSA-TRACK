// left rotate an array by 1 element

// https://www.codingninjas.com/codestudio/problems/left-rotate-an-array-by-one_5026278?leftPanelTab=1

#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int>arr){
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << ' ';
    }
    cout << '\n';
}

void leftRotateBy1(vector<int>arr){
    int temp=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        
        if(i==0){
            temp=arr[i];

        }
        if (i != n - 1) {
          arr[i] = arr[i + 1];
        }
        else{
            arr[i]=temp;
        }
    }
    printArray(arr);
}

int main(){

    
    vector<int>arr={1,2,3,4,5};
    
    leftRotateBy1(arr);

    return 0;
}