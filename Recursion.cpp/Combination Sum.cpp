class Solution {
    public:
    void findcomb(int ind,int target,vector<int>&ds,vector<vector<int>>&ans,vector<int>&arr){
        if(ind==arr.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        if(arr[ind]<=target){
            ds.push_back(arr[ind]);
            findcomb(ind,target-arr[ind],ds,ans,arr);
            ds.pop_back();
        }
        findcomb(ind+1,target,ds,ans,arr);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& a, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        findcomb(0,target,ds,ans,a);
        return ans;
    }
};
