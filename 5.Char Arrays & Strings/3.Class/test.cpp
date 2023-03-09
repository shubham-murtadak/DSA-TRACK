#include <bits/stdc++.h>

using namespace std;
//custom coparitor use to do sorting according to our will means generally sorting takes place in assecnding order but passing custom comparitor to sort functin we can do sorting in descending order
bool cmp(char first,char second){
    return first>second;
}
bool cmpint(int first,int second){
    return first>second;
}
int main(){
    string st="shubham";
    sort(st.begin(),st.end());
    cout<<st<<"\n";  //abhhmsu ->asscending order sorted

    sort(st.begin(),st.end(),cmp);
    cout<<st<<"\n";  //usmhhba ->desending order sorted

    vector<int>arr{2,5,3,7,6};
    sort(arr.begin(),arr.end(),cmpint);
    for(auto i:arr){
        cout<<i<<" ";
    }  //7 6 5 3 2

    
    return 0;
}