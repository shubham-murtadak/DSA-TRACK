#include <iostream>

using namespace std;
 int romanToInt(string str) {
        int ans=0;
        int s=0;
        int lim=str.length();
        while(s<lim){
            
                 if(str[s]=='I' && str[s+1]=='V' && s+1<lim){
                   ans+=4;
                   s+=2;
               }
                else if(str[s]=='I' && str[s+1]=='X' && s+1<lim){
                   ans+=9;
                   s+=2;
               }
                else if(str[s]=='X' && str[s+1]=='L' && s+1<lim){
                   ans+=40;
                   s+=2;
               }
               else if(str[s]=='X' && str[s+1]=='C' && s+1<lim){
                   ans+=90;
                   s+=2;
               }
               else if(str[s]=='C' && str[s+1]=='D' && s+1<lim){
                   ans+=400;
                   s+=2;
               }
               else if(str[s]=='C' && str[s+1]=='M' && s+1<lim){
                   ans+=900;
                   s+=2;
               }
               else if(str[s]=='I'){
                   ans+=1;
                   s++;

               }
               
               else if(str[s]=='V'){
                   ans+=5;
               s++;
               }
               else if(str[s]=='X'){
                   ans+=10;
                   s++;
               }
               else if(str[s]=='L'){
                   ans+=50;
                   s++;

               }
               else if(str[s]=='C'){
                   ans+=100;
                   s++;
               }
               else if(str[s]=='D'){
                   ans+=500;
                   s++;
               }
               else if(str[s]=='M'){
                   ans+=1000;
                   s++;
               }

            
        
        }
        return ans;
        
    }

int main(){
    string s = "MCMXCIV";
    // cout<<romanToInt(s);
    //1994
    cout<<1994%10<<" ";
    cout<<1994%100<<" ";
    cout<<1994%1000<<" ";
    


    return 0;
}