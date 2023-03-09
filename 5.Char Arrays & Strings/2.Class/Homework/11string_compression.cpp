#include <bits/stdc++.h>

using namespace std;
 int compress(vector<char>& arr) {
      int i=0;int j=i;
   int k=0;
   int n=arr.size();
   while(i<n){
    arr[k++]=arr[i];
    while(j<n && arr[i]==arr[j]){
        j++;


    }
    if(j-i>1){
        // int c=j-i;
        string st=to_string(j-i);
        for(auto i:st){
            arr[k++]=i;
        }
    }
    i=j;
   }
 
   return k;

    }

int main(){
    vector<char>chars{'a','a','b','b','c','c','c'};
    cout<<compress(chars);
    //opp 6
    
    
    return 0;
}