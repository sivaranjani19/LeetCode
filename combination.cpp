class Solution {
public:
    void helper(vector<int>& candidates,int s,int target,vector<int>& ans, vector<vector<int>>& result,int indx){
     // cout << s << endl;
            for(int i = indx; i < candidates.size();++i){
               // cout << candidates[i] << endl;
                ans.push_back(candidates[i]);
                if(s+candidates[i] < target){
                    
                   // ans.push_back(candidates[i]);
                    helper(candidates,s+candidates[i],target,ans,result,i);
                }
                else if(s+candidates[i] == target){
                    result.push_back(ans);
                }
                else{
                    ans.pop_back();
                    break;
                }
                ans.pop_back();
                }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> ans;
        vector<vector<int>> result;
        sort(candidates.begin(),candidates.end());
        helper(candidates,0,target,ans,result,0);
        return result;
    }
};
