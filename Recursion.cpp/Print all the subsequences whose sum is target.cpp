/*
  Print all the subsequences with sum = target.
*/
#include<bits/stdc++.h>
using namespace std;
 void print(vector<int>ds,int ind,int target,int s,int arr[],int n){
    if(ind==n){
        if(s==target){
            for(auto it:ds) cout<<it<<" ";
            cout<<endl;
        }
        return;
    }
    ds.push_back(arr[ind]);
    s+=arr[ind];
    print(ds,ind+1,target,s,arr,n);
    s-=arr[ind];
    ds.pop_back();
    print(ds,ind+1,target,s,arr,n);
 }
int main(){
    int a[]={1,2,1};
    int target=2;
    int n=3;
    vector<int>ds;
    print(ds,0,target,0,a,n);
  return 0;
}
