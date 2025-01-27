class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int maxPoint = 0;
        for(int i=0; i<n; i++){
            if(i>maxPoint){
                return false;
            }
             maxPoint = max(maxPoint, nums[i] + i);
        }
       
        return true;
    }
};
