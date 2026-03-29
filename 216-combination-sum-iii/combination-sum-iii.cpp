class Solution {
public:
    void backtrack(int k, int n, int start, vector<int>& curr, vector<vector<int>>& ans) {
     
        if(curr.size() == k && n == 0) {
            ans.push_back(curr);
            return;
        }
       
        if(curr.size() > k || n < 0) return;

       
        for(int i = start; i <= 9; i++) {
            curr.push_back(i); 
            backtrack(k, n - i, i + 1, curr, ans); 
            curr.pop_back(); 
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> curr;
        backtrack(k, n, 1, curr, ans);
        return ans;
    }
};