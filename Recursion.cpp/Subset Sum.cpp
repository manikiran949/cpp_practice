class Solution
{
    public:
    void print(int ind,vector<int>&ds,vector<int>&arr,int sum){
        if(ind==arr.size()){
            ds.push_back(sum);
            return;
        }
        print(ind+1,ds,arr,sum+arr[ind]);
        print(ind+1,ds,arr,sum);
    }
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int>ds;
        print(0,ds,arr,0);
        return ds;
    }
};
