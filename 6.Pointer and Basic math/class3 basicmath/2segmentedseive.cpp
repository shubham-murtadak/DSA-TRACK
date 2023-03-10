/*
code is incomplete giving wrong output
*/

#include <bits/stdc++.h>
using namespace std;
vector<long long>prime;
void seive(int n){
    vector<bool>arr(n+1,true);
    arr[0]=arr[1]=false;
    for(int i=2;i<n;i++){
        if(arr[i]){
            prime.push_back(i);
            // cout<<i<<" ";
        }
        int j=i*2;
        while(j<n){
            arr[j]=false;
            j+=i;
        }
    }
}

void segseive(int l,int h){
    long long sq=sqrt(h);
    seive(sq);
    vector<bool>isprime(h-l+1,true);

    for(auto p:prime){
        long long sm=floor(l/p)*p;
        if(sm<l){
            sm+=p;
        }
        for(long long m=sm;m<h;m+=p){
            isprime[m-l]=false;
        }
        for(long long i=l;i<h;i++){
            if(isprime[i-l]){
                cout<<i<<" ";
            }
        }
    }
}

int main(){
    int l=4;
    int h=10;
    segseive(l,h);
    // seive(10);
    
    return 0;
}