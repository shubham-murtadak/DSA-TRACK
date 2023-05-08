#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
unordered_map<int,bool>rowcheck;
unordered_map<int,bool>upperleftdiagonal;
unordered_map<int,bool>downleftdiagonal;

void printsol(vector<vector<char>>&board,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<board[i][j]<<" ";
        }cout<<endl;
    }
    cout<<endl<<endl;
}
bool issafe(vector<vector<char>>&board,int row,int col,int n){

    if(rowcheck[row]==true){
        return false;
    }
    if(downleftdiagonal[row+col]==true){
        return false;
    }
    if(upperleftdiagonal[n-1+col-row]==true){
        return false;
    }
    return true;
    
    
}
void solve(vector<vector<char>>&board,int col,int n){
    //base case
    if(col>=n){
        printsol(board,n);
        return;
    }
    //ek case tum solve karo baki recursion dada sambal lenge 
    for(int row=0;row<n;row++){
        if(issafe(board,row,col,n)){
            board[row][col]='Q';
            rowcheck[row]=true;
            downleftdiagonal[row+col]=true;
            upperleftdiagonal[n-1+col-row]=true;
            //recursion
            solve(board,col+1,n);
            //backtrack to karo
            board[row][col]='-';
            rowcheck[row]=false;
            downleftdiagonal[row+col]=false;
            upperleftdiagonal[n-1+col-row]=false;
        }
    }
}
int main(){
    int n=9;
    vector<vector<char>>board(n,vector<char>(n,'-'));
    int col=0;
    solve(board,col,n);



    return 0;
}