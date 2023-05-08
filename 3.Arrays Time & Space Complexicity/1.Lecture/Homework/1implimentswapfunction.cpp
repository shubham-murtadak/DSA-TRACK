#include<iostream>
using namespace std;

void swap1(int a, int b){
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<a<<' '<<b<<'\n';
}

void swap2(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    cout<<a<<' '<<b<<'\n';
}

void swap3(int a, int b){
     a=a^b;
     b=a^b;
     a=a^b;
        
   
    cout<<a<<' '<<b<<'\n';
}

int main(){

    int a=5;
    int b=6;
    swap1(a,b);
    swap2(a,b);
    swap3(a,b);

    return 0;
}
