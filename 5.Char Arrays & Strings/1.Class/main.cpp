#include <bits/stdc++.h>

using namespace std;
int stringlength(char st[]){
    int count=0;
    int i=0;
    while(st[count]!='\0'){
        
        count++;
    }
    return count;
}
void reversestring(char arr[]){
    int s=0;
    int n=stringlength(arr);
    int e=n-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    
}
void replacespaces(string &str){
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            str[i]='@';
        }
    }

}
bool ispalindrome(char ch[]){
    int n=stringlength(ch);
    int s=0;
    int e=n-1;
    while(s<=e){
        if(ch[s]!=ch[e]){
            return false;
            break;
        }
        else{
            s++;
            e--;
        }
    }
    return true;
}
void toupper(char ch[]){
    int n=stringlength(ch);
    for(int i=0;i<n;i++){
        
            ch[i]=char(ch[i]-'a'+'A');
        
    }
}
void tolower(char ch[]){
    int n=stringlength(ch);
    for(int i=0;i<n;i++){
        ch[i]=ch[i]-'A'+'a';
    }
}

bool comparestring(string s1,string s2){
    if(s1.length()!=s2.length()){
        return false;
    }

    for(int i=0;i<s1.length();i++){
        if(s1[i]!=s2[i]){
            return false;
            break;
        }
    }

    return true;

}


int main()
{
    /* string st="shubham";
     stringlength(st);
    char arr[100];
    cin>>arr;
   reversestring(arr);
   cout<<arr;
    string st;
    getline(cin,st);
    replacespaces(st);
    cout<<st;
    
    char st[100];
    cin>>st;
    if(ispalindrome(st)){
        cout<<st<<" is a palindrome "<<"\n";
    }
    else{
        cout<<st<<" is not a palindrome "<<"\n";
    }
    char ch[100];
    cin>>ch;
    toupperr(ch);
    cout<<ch<<"\n";
    
    char ch[100];
    cin>>ch;
    tolower(ch);
    cout<<ch<<"\n";

    */

    string s1="shubham";
    string s2="labra";

    if(comparestring(s1,s2)){
        cout<<"equal"<<"\n";
    }
    else{
        cout<<"not equal !"<<"\n";
    }
    
   
    
   

    return 0;
}
