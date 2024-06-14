class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        
        int count=0,inc;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<=nums[i-1])
            {
                inc = nums[i-1] - nums[i] + 1;
                nums[i]+=inc;
                count+=inc;
            }
        }
        return count;
    }
};