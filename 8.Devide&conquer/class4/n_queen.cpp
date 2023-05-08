#include<iostream>
#include<map>
#include<vector>
using namespace std;
void printsol(vector<vector<char>>&board,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<board[i][j]<<" ";
        }cout<<endl;
    }
    cout<<endl<<endl;
}
bool issafe(int row,int col,vector<vector<char>>&board,int n){
    //row ko chek karo
    int i=row;
    int j=col;
    while(j>=0){
        if(board[i][j]=='Q'){
            return false;
        }
        j--;
    }
    //upper left diagonal
    i=row;
    j=col;
    while(i>=0 && j>=0){
        if(board[i][j]=='Q'){
            return false;
        }
        i--;
        j--;
    }
    //bottom left diagonal
    i=row;
    j=col;
    while(i<n && j>=0){
        if(board[i][j]=='Q'){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
void solve(vector<vector<char>>&board,int col,int n){
    //base case
    if(col>=n){
        printsol(board,n);
        return;
    }
    //ek case solve karo baki recursion sambhal lega
    for(int row=0;row<n;row++){
        if(issafe(row,col,board,n)){
            board[row][col]='Q';
              //recursion
            solve(board,col+1,n);

            //backtrack karo
            board[row][col]='-';
        }
    }
  
}
int main(){
    int n=8;
    vector<vector<char>>board(n,vector<char>(n,'-'));
    int col=0;
    solve(board,col,n);
    return 0;
}