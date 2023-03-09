 #include<bits/stdc++.h>
 using namespace std;
 
 string reverseOnlyLetters(string st) {
        int s=0;
        int e=st.length()-1;
        while(s<=e){
            if(isalpha(st[s] )&& isalpha(st[e])){
                swap(st[s],st[e]);
                s++;e--;
            }
            else if(isalpha(st[s])){
                e--;
            }

             else if(isalpha(st[e])){
                s++;
            }
            else{
                s++;
                e--;
            }
            
        }
        return st;
        
    }

int main(){
    string s = "Test1ng-Leet=code-Q!";
    cout<<reverseOnlyLetters(s);
// Output: "Qedo1ct-eeLg=ntse-T!"
    return 0;

}