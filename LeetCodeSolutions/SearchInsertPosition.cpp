// Class Solution 
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++){
            if(target == nums[i]){
                return i;
            }
        }
        for(int i = 0; i < nums.size(); i++){
            if(i == 0 && target < nums[i]){
                return i;
            }
            if(nums[i] < target  && target < nums[i+1]){
                return i+1;
            }
            if(target > nums[i] && i == nums.size() - 1){
                return i+1;
            }
        }
    }
};