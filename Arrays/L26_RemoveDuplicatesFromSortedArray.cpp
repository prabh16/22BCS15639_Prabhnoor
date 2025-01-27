class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i=0;
        int j = i+1;
        while(j<n){
            if(nums[i] == nums[j]){
                j++;
            }
            else{
                swap(nums[i+1], nums[j]);
                i++;
                j++;
            }
        }
        nums.erase(nums.begin()+i+1, nums.end());
        return i+1;
    }
};
