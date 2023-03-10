/* ECLUID ALGORITHAM TO FIND GCD
     GCD(A,B)=GCD(A-B,B)   IF(A>B)
     GCD(A,B)=GCD(A,B-A)   IF(B>A) 

     REPEAT THIS STEPS UNTIL ONE OF A OR B BECOME 0
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

int main(){
    int a=24;
    int b=72;
    cout<<gcd(a,b);
    //op->24
    
    return 0;
}

