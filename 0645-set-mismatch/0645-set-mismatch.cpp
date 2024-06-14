class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {

        int n = nums.size();
        
         for (int i = 0; i < n; ++i) {
        while (nums[i] != nums[nums[i] - 1]) {
            std::swap(nums[i], nums[nums[i] - 1]);
        }
    }
        vector<int> a(2);

       for (int i = 0; i < n; ++i) {
        if (nums[i] != i + 1) {
            a[0] = nums[i];
            a[1] = i + 1;
            break;
        }
    }


        return a;

    }
    
};