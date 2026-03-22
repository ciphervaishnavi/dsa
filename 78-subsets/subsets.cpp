class Solution {
public:


void subsecquence( vector<int>& nums,int index,int n,vector<vector<int>>&ans,vector<int>&temp){
   if(index==n){
    ans.push_back(temp);
    return;
   }


    //not included
   subsecquence(nums,index+1,n,ans,temp);

    //included
    temp.push_back(nums[index]);
      subsecquence(nums,index+1,n,ans,temp);

      temp.pop_back();

}
    vector<vector<int>> subsets(vector<int>& nums) {
         vector<vector<int>>ans;
         vector<int>temp;
         subsecquence(nums,0,nums.size(),ans,temp);
         return ans;
    }
};