class Solution {
private:
    void solve(vector<int>nums,int target,vector<vector<int>>& ans,int index,vector<int>output){
        
        if(target==0){
            ans.push_back(output);
            return;
        }
       for(int i=index;i<nums.size();i++){
           if(nums[i]>target){break;}
           if(i>index && nums[i]==nums[i-1]){
               continue;
           }
        output.push_back(nums[i]);
        solve(nums,target-nums[i],ans,i+1,output);
        output.pop_back();
       }
         
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;

        vector<int>output;
        int index=0;
        solve(nums,target,ans,index,output);
        return ans;
    }
};