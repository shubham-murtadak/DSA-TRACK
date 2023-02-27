 #include<bits/stdc++.h>

#include<vector>
using namespace std;
//note by passing 2d array in funcion we have to pass coloumns else error occured!
void rowsum(){
        int arr[100][100];
    int row;
    int col;
    cout<<"enter no of rows :";
    cin>>row;
    cout<<"\n enter of coloumns :";
    cin>>col;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    int sum;
    for (int i = 0; i < row; ++i)
    {   sum=0;
        for (int j = 0; j < col; ++j)
        {
            sum =sum + arr[j][i];
            
        }
        cout<<sum<<endl;
    }

}
void linearsearch(){
    int arr[100][100];
    int row,col;
    cout<<"enter total rows and coloumns :"<<endl;
    cin>>row>>col;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    int key;
    cout<<"enter key to search :";
    cin>>key;
    int check=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==key){
                check=1;
                
                break;
            }

        }
    }
    if(check==1){
        cout<<key<<" is present in arry "<<endl;
    }
    else{
        cout<<key<<" is not present in array !"<<endl;
    }
}
void minelement(){
    int arr[100][100];
    int row,col;
    cin>>row>>col;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    int min=INT_MAX;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]<min){
                min=arr[i][j];
            }
        }
    }
    cout<<"minimum index in array is :"<<min<<endl;
}
void maxelement(){
    int arr[100][100];
    int row,col;
    cin>>row>>col;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    int max=INT_MIN;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
    }
    cout<<"maximum index in array is :"<<max<<endl;
}
void transpose(){
    int arr[100][100];
    int row,col;
    cin>>row>>col;
    int transpose[100][100];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            transpose[j][i]=arr[i][j];
        }
    }
    cout<<"vector after transpose :"<<endl;
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            cout<<transpose[i][j]<<" ";
        }cout<<endl;
    }
}

int main(){
    // rowsum();
    // linearsearch();
    // minelement();
    // maxelement();
    // transpose();
    //we have to use vectors for array 
    vector<vector<int>>arr(5,vector<int>(5,-8));
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}
