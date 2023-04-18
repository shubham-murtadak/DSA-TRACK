#include<bits/stdc++.h>
using namespace std;
bool issafe(int arr[][4],int i,int j,int row,int col,vector<vector<bool>>&viseted){
    if((i>=0 && i<row) && (j>=0 && j<col) && (arr[i][j]==1 )&&( viseted[i][j]==false)){
        return true;
    }
    else{
        return false;
    }
}
void solve_maze(int arr[][4],int row,int col,int i,int j,vector<vector<bool>>&viseted,string output,vector<string>&path){
    //base condition
    if(i==row-1 && j==col-1){
        path.push_back(output);
        return ;
    }
    //assume (i,j)==0
    //up ->i-1,j
    if(issafe(arr,i-1,j,row,col,viseted)){
        viseted[i-1][j]=true;
        solve_maze(arr,row,col,i-1,j,viseted,output+'U',path);
        //backtrack karo
        viseted[i-1][j]=false;
    }
    //down ->i+1,j
    if(issafe(arr,i+1,j,row,col,viseted)){
        viseted[i+1][j]=true;
        solve_maze(arr,row,col,i+1,j,viseted,output+'D',path);
        //backtrack karo
        viseted[i+1][j]=false;
    }
    //left  i,j-1
     if(issafe(arr,i,j-1,row,col,viseted)){
        viseted[i][j-1]=true;
        solve_maze(arr,row,col,i,j-1,viseted,output+'L',path);
        //backtrack karo
        viseted[i][j-1]=false;
    }
    //right  i,j+1
     if(issafe(arr,i,j+1,row,col,viseted)){
        viseted[i][j+1]=true;
        solve_maze(arr,row,col,i,j+1,viseted,output+'R',path);
        //backtrack karo
        viseted[i][j+1]=false;
    }

}
int main(){
    int arr[4][4]={{1,0,0,0},
                    {1,1,0,1},
                    {1,1,0,0},
                    {0,1,1,1}};

      if(arr[0][0]==0){
        cout<<"No possibel path !"<<endl;
        return 0;
    }
    int row=4;
    int col=4;
  
    vector<vector<bool>>vesited(row,vector<bool>(col,false));
    //mark source as true
    vesited[0][0]=true;

    string output="";
    vector<string>path;

    solve_maze(arr,row,col,0,0,vesited,output,path);
    if(path.size()==0){
        cout<<"NO possible path "<<endl;
    }
    for(auto i:path){
        cout<<i<<" ";
    }cout<<endl;

    return 0;
}