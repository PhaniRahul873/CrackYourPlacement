// Using 2 pointers
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        vector<int> v=nums;
        sort(nums.begin(),nums.end());
        int i=0;
        int n=nums.size();
        int j=n-1;
        int a;
        int b;
        while (i<=j){
            if (nums[i]+nums[j]>target){
                j--;
            }
            else if (nums[i]+nums[j]<target){
                i++;
            }
            else{
               a=nums[i];
               b=nums[j];
               break;
            }
        }
    int k=0;
    while (k<nums.size()){
        if (v[k]==a || v[k]==b){
            res.push_back(k);
        }
        k++;
    }
    return res;
}
};
// using unordered_map
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        m[nums[0]]=0;
        vector<int> res;
        // key is element
        // value is index
        for (int i=1;i<nums.size();i++){
            if (m.find(target-nums[i])!=m.end()){
                res.push_back(m[target-nums[i]]);
                res.push_back(i);
            }
            else{
                m[nums[i]]=i;
            }
        }
        return res;
    }
};
/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]
 

Constraints:

2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109*/