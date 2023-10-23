/*
    Print all the subsequences of the given array.
    Time Complexity - O(n*2^n). since each index will have two choices and extra 'n' for printing the vector.
    Space Complexity - O(n).
*/
#include<bits/stdc++.h>
using namespace std;
 void printF(int ind,vector<int>&ds,int arr[],int n){
    if(ind>=n){
        if(ds.size()==0){
            cout<<"{}"<<endl;
        }
        else{
            for(auto it:ds){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }
    ds.push_back(arr[ind]);  // pick condition.
    printF(ind+1,ds,arr,n);
    ds.pop_back();           // not pick condition.
    printF(ind+1,ds,arr,n);
 }
int main(){
    int a[]={3,5,4};
    int n=3;
    vector<int>vc;
    printF(0,vc,a,n);
  return 0;
}
