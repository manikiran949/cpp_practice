class Solution {
    public:
    void print(int ind,vector<int>&arr,vector<vector<int>>&ans){
        if(ind==arr.size()){
            ans.push_back(arr);
            return;
        }
        for(int i=ind;i<arr.size();i++){
            swap(arr[ind],arr[i]);
            print(ind+1,arr,ans);
            swap(arr[ind],arr[i]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        print(0,nums,ans);
        return ans;
    }
};
