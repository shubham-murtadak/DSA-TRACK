#include <bits/stdc++.h>

using namespace std;
string reorganizeString(string s) {
        int hash[26]={0};
        //step 1 count occurance
        for(int i=0;i<s.size();i++){
            hash[s[i]-'a']++;
        }

        //find the most occuring element
        char max_freq_char;
        int max_freq=INT_MIN;
        for(int i=0;i<26;i++){
            if(hash[i]>max_freq){
                max_freq=hash[i];
                max_freq_char=i+'a';
            }

        }
        //step3 place most frequent element at its position
        int index=0;
        while(max_freq>0 && index<s.size()){
            s[index]=max_freq_char;
            max_freq--;
            index+=2;
        }

        //if we are not able to place most frequent character adjacently return ""
        if(max_freq>0){
            return "";
        }
        hash[max_freq_char-'a']=0;

        //strep 4 now place remaining elements 
        for(int i=0;i<26;i++){
            while(hash[i]>0){
                index=index>=s.size()?1:index;
                s[index]=i+'a';
                hash[i]--;
                index+=2;
            }
        }

        return s;

   
    }

int main(){
    string st="vvvlo";
    cout<<reorganizeString(st);
    // op-vlvov
   
   
    
    return 0;
}