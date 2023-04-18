#include <iostream>

using namespace std;
void printpermutation(string &st,int i){
    if(i>=st.length()){
        cout<<st<<" ";
        return;
    }
    //loop
    for(int j=i;j<st.length();j++){
        // swap
        swap(st[i],st[j]);
        //recursion
        printpermutation(st,i+1);
        //swap backtracking line-to recreate original input
        swap(st[i],st[j]);
    }
}

int main(){
    string st="abc";
    int i=0;
    printpermutation(st,i);
    //op->abc acb bac bca cba cab 
    return 0;
}