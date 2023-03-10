#include <bits/stdc++.h>

using namespace std;
int countPrimes(int n) {
        //seive of erithrosis method   t.c->O(n(log(logn)));
        if(n==0) return 0;
        vector<bool>prime(n,true);
        prime[0]=prime[1]=false;
        int count=0;
        for(int i=2;i<n;i++){
            if(prime[i]){
                count++;

            }
            int j=2*i;
            while(j<n){
                prime[j]=false;
                j+=i;
            }
        }
        return count;

        
    }

    //bruteforce t.c->O(n^2)

int main(){
    int n=10;
    cout<<countPrimes(n); //4
    
    return 0;
}