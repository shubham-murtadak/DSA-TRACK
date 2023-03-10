#include <iostream>

using namespace std;
int fastexponentiation(int a,int b){
    int ans=1;
    while(b>0){
    if(b&1){
        ans=ans*a;
    }
    a=a*a;
    b>>=1;

    }
    return ans;
}

int main(){
    int a=3;
    int b=3;
    cout<<fastexponentiation(a,b);
    //op->27
    
    return 0;
}