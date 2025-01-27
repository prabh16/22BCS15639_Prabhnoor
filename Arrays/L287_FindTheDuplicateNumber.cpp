class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       unordered_set<int> duplicate;
       for(int i: nums){
        if(duplicate.count(i)){
            return i;
        }
        duplicate.insert(i);
       }
       return -1;
    }
};
