class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        m[0]=1;
        // key is prefixsum and value is number of arrays with this prefix sum
        int prefix_sum=0;
        int res=0;
        for (int i=0;i<nums.size();i++){
            prefix_sum+=nums[i];
            res+=m[prefix_sum-k];
            m[prefix_sum]++;
        }
    return res;
        
    }
};
/*Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

A subarray is a contiguous non-empty sequence of elements within an array.

 

Example 1:

Input: nums = [1,1,1], k = 2
Output: 2
Example 2:

Input: nums = [1,2,3], k = 3
Output: 2
 

Constraints:

1 <= nums.length <= 2 * 104
-1000 <= nums[i] <= 1000
-107 <= k <= 107*/