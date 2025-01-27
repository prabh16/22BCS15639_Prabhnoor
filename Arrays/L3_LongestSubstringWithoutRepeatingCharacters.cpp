class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int answer = 0;
        int j = -1;
        vector<int> lastPosition(256,-1);
        for(int i=0; i<s.length(); i++){
            j=max(j,lastPosition[s[i]]);
            answer = max(answer, i-j);
            lastPosition[s[i]] = i;
        }

        return answer;
    }
};
