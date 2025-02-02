class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return 0; 
        
        int count = 0;
        int index = 0; 
        int maxi = 0; 
        for (int i = 0; i < n - 1; i++) {
            maxi = max(maxi, i + nums[i]); 
            
           
            if (i == index) {
                count++; 
                index = maxi; 
                
                
                if (index >= n - 1) break;
            }
        }
        
        return count;
    }
};
