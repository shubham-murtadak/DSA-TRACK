#include <bits/stdc++.h>

using namespace std;
 bool isAnagram(string s, string t) {
    if(s.length()!=t.length()){
        return false;
    }
    vector<char>st1;
    vector<char>st2;
    
    for(int i=0;i<s.length();i++){
        st1.push_back(s[i]);
    }
    for(int i=0;i<t.length();i++){
        st2.push_back(t[i]);
    }
    sort(st1.begin(),st1.end());
    sort(st2.begin(),st2.end());
    
    bool check=true;
    for(int i=0;i<s.length();i++){
        if(st1[i]!=st2[i]){
            check=false;
        }
    }
   return check;
        
    }
//method 2 optimal counting method hash table
bool isanagram(string s, string t){
     //method 2 counting method

    int hashtable[256]={0};
    for(int i=0;i<s.length();i++){
        hashtable[s[i]]++;
    }
    for(int i=0;i<t.length();i++){
        hashtable[t[i]]--;
    }
    for(int i=0;i<256;i++){
        if(hashtable[i]!=0){
            return false;
        }
    }
    return true;

    }

int main(){
    string s = "anagram";
    string t = "nagaram";
    if(isAnagram(s,t)){
        cout<<"true"<<"\n";
    }
    else{
        cout<<"false"<<"\n";
    }
// Output: true
    return 0;
}