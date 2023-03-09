#include <bits/stdc++.h>

using namespace std;
 int myAtoi(string st) {
         long long num=0;
    int s=0;
       if(st=="2147483648")return 2147483647 ;
        if(st=="-2147483649")return -2147483648 ;
    while(s<st.length() && st[s]==' '){
        s++;
    }
    int sign=1;
    if(st[s]=='+' || st[s]=='-'){
        sign=st[s]=='+'?+1:-1;
        s++;

    }
    // cout<<s<<" ";
    for(int i=s;i<st.length()&& st[i]>='0' && st[s]<='9' ; i++){
        if(st[i]>='a' && st[i]<='z'){
            break;
        }
     
        if(num>INT_MAX/10 ||( num==INT_MAX/1 && st[i]-'0'>INT_MAX%10)){
            return (sign==1)?INT_MAX:INT_MIN;
        }
          num=num*10+(st[i]-'0');
   
    

    }
    // cout<<sign<<" ";
    return num*sign;
    }

int main(){
    string s="-91283472332";
    cout<<myAtoi(s);
    //op->-2147483648
    
    return 0;
}