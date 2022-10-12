
//https://leetcode.com/problems/increasing-triplet-subsequence/
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int firstvalue=INT_MAX;
        int secondvalue=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=firstvalue){
                firstvalue=nums[i];
            }
            else if(nums[i]<=secondvalue){
                secondvalue=nums[i];
            }
            else{
                return true;
            }
        }
        return false;
    }
};
//time complexity - O(n)
//space complexity - O(1)
