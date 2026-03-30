class Solution {
public:
vector<string>ans;
 void solve(string &digits,int index ,string &curr,unordered_map<char,string>&m,vector<string>&ans){
    if(index==digits.size()){
       ans.push_back(curr);
       return; 
    }
    string letters=m[digits[index]];
    for(char ch:letters){
        curr.push_back(ch);
        solve(digits,index+1,curr,m,ans);
        curr.pop_back();
    }
 }

    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return {};
        unordered_map<char,string>m;
        string curr="";
        m['2']="abc";
        m['3']="def";
        m['4']="ghi";
        m['5']="jkl";
        m['6']="mno";
        m['7']="pqrs";
        m['8']="tuv";
        m['9']="wxyz";
        solve(digits,0, curr,m,ans);
        return ans;


       
    }
};