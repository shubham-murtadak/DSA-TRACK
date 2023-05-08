// https://leetcode.com/problems/find-the-duplicate-number/submissions/840864044/

#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<int>arr){
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << ' ';
    }
    cout << '\n';
}
int findDuplicate1(vector<int>& nums) {
         while(nums[0]!=nums[nums[0]]){
            swap(nums[0],nums[nums[0]]);

        }
        return nums[0];
    }
int findDuplicate(vector<int>arr){
    int n = arr.size();
    vector<int>cnts(n);

    for(int i=0; i<n; i++){
        int element = arr[i];
        cnts[element]++;
        if(cnts[element]>1)
            return element;
    }
}

int main(){

    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int ans = findDuplicate(arr);
    cout << ans << '\n';

    return 0;
}