class Solution {
public:
   void solve(vector<int>&arr,int index,int target,vector<int>&curr,vector<vector<int>>&ans){
    if(target==0){
        ans.push_back(curr);
        return ;
    }
    if(index==arr.size()||target<0)
    return;
    curr.push_back(arr[index]);
    solve(arr,index,target-arr[index],curr,ans);
    curr.pop_back();
     solve(arr,index+1,target,curr,ans);

   }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>curr;
        solve(candidates,0,target,curr,ans);
        return ans;
        
        
    }
};