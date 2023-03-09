#include <bits/stdc++.h>

using namespace std;
//method 1 using map bruteforce
bool isIsomorphic(string s, string t) {
        map<char,char>mp;
    for(int i=0;i<s.length();i++){
        mp.insert({s[i],t[i]});
    }
    map<char,char>::iterator it;
    for(it=mp.begin();it!=mp.end();it++){
        for(int i=0;i<s.length();i++){
            if((s[i]==it->first && t[i]!=it->second)||(s[i]!=it->first && t[i]==it->second)){
                return false;
                break;
            }
        }
    }
    return true;
        
        
    }
//method 2 using hashing optimal metod
  bool isIsomorphic(string s, string t) {
        int hash[256]={0};
        bool ismapped[256]={0};
      for(int i=0;i<s.length();i++){
          if(hash[s[i]]==0 && ismapped[t[i]]==0){
              hash[s[i]]=t[i];
              ismapped[t[i]]=true;
          }

      }
      for(int i=0;i<s.length();i++){
          if(char(hash[s[i]])!=t[i]){
            //   cout<<hash[s[i]];
              return false;
          }
      }
      return true;
        
        
    }

int main(){
     string s="foo";
    string t="bar";
    if(isIsomorphic(s,t)){
        cout<<s<<" and "<<t<<" are ismorphic strings "<<"\n";
    }
    else{
        cout<<s<<" and "<<t<<" are not isomorphic strings "<<"\n";
    }

    
    return 0;
}