// problem link->https://leetcode.com/problems/count-pairs-whose-sum-is-less-than-target/description/?envType=problem-list-v2&envId=two-pointers
// Given a 0-indexed integer array nums of length n and an integer target, 
// return the number of pairs (i, j) where 0 <= i < j < n and nums[i] + nums[j] < target.
// Example 1:
// Input: nums = [-1,1,2,3,1], target = 2
// Output: 3


#include<bits/stdc++.h>
using namespace std;

int countPairs(vector<int>& nums, int target) {
    int n = nums.size();
    sort(nums.begin(),nums.end());
    int i = 0;
    int j = n - 1;
    int count = 0;
    while(i < j){
        int sum = nums[i] + nums[j];
        if(sum < target){
            count += j - i;
            j = n-1;
            i++;
        }else{
            j--;
        }  
    }
    return count;
}
int main(){
    vector<int>arr = {-1,1,2,3,1};
    int target = 2;
    int ans = countPairs(arr,target);
    cout<<ans;
    return 0;
}
