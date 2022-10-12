class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
       //for triangle sum of two sides must be greater than biggest side
       sort(nums.begin(),nums.end());
       for(int i=nums.size()-1;i>1;i--){
           if(nums[i]<nums[i-1]+nums[i-2]){
               return nums[i]+nums[i-1]+nums[i-2];
           }
       }
       return 0;
    }
};
