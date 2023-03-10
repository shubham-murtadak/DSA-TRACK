/*
        a*n->[0,1,2,-----n-1]


        1) (a+b)%m=(a%m)+(b%m)

        2) a%m-b%m=(a-b)%m

        3)((a%m) %m)%m=a%m

        4)a%m  *  b%m=(a*b)%m

*/
#include <bits/stdc++.h>

using namespace std;
long long int PowMod(long long int x,long long int n,long long int m)
		{
		    long long ans=1;
		    while(n>0){
		        if(n&1){ //odd
		        ans=(ans*x)%m;
		            
		        }
		        x=(x*x)%m;
		        n>>=1;
		    }
		    return ans%m;
		}

int main(){
    
    return 0;
}