/*
LCM(A,B)*GCD(A,B)=A*B;


        LCM(A,B)=(A*B)/GCD(A,B);
*/

#include <bits/stdc++.h>

using namespace std;
int gcd(int a, int b) 
	{ 
	    if(a==0)  return b;
	    if(b==0)  return a;
	    
	    while(a>0 && b>0){
	        if(a>b){
	            a=a-b;
	        }
	        else{
	            b=b-a;
	        }
	    }
	    return (a==0)?b:a;
	      
	} 
int lcm(int a,int b){
    return (a*b)/gcd(a,b);
}

int main(){
    int a=24;
    int b=48;
    cout<<lcm(a,b);
    //op->48
    
    return 0;
}