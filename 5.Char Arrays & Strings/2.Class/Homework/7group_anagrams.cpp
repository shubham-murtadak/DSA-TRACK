#include <bits/stdc++.h>

using namespace std;
vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(auto st:strs){
            string temp=st;
            sort(temp.begin(),temp.end());
            mp[temp].push_back(st);
        }
    vector<vector<string>>ans;
        for(auto i:mp){
            ans.push_back(i.second);

        }
        return ans;
    }

int main(){
    vector<string>strs{"eat","tea","tan","ate","nat","bat"};
    //op:[["bat"],["nat","tan"],["ate","eat","tea"]]
    
    return 0;
}