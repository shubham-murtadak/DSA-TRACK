/*Given a string s and a string array dictionary, return the longest string
 in the dictionary that can be formed by deleting some of the given string characters.
If there is more than one possible result, return the longest word with the smallest lexicographical order.
   If there is no possible result, return the empty string.
Example 1:

Input: s = "abpcplea", dictionary = ["ale","apple","monkey","plea"]
Output: "apple"
Example 2:

Input: s = "abpcplea", dictionary = ["a","b","c"]
Output: "a"*/
#include <bits/stdc++.h>
using namespace std;
bool ispossible(string s,string t){
    int i=0;
    int j=0;
    while(i<s.size() && j<t.size()){
        if(s[i]==t[j]){
            j++;
           
        }
         i++;
    }
    return j==t.size();
}

    string findLongestWord(string s, vector<string>& dictionary) {
        string ans="";
    for(auto str:dictionary){
        if(ispossible(s,str)){
            if(str.size()>ans.size() ||( str.size()==ans.size() && str<ans)){
                ans=str;
            }

        }
    }
    return ans;
        
    }


int main(){
    string s = "abpcplea";
    vector<string>dictionary{"ale","apple","monkey","plea"};
    string ans=findLongestWord(s,dictionary);
    cout<<ans;
    //op->apple
    
    return 0;
}