#include <bits/stdc++.h>

using namespace std;
  string intToRoman(int num) {
        string ans="";
   vector<pair<int, string>> arr = {{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};    
// V -5  I-1          
// X             10
// L             50
// C             100
// D             500
// M             1000};

    // }
    for(auto i:arr){
        while(num>=i.first ){
            ans+=i.second;
            num-=i.first;
        }
    }
    return ans;
    }

int main(){
    int num=1994;
    cout<<intToRoman(num);
    //opMCMXCIV

    
    return 0;
}