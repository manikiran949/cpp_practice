/*
  Count the number of subsequences with sum == target.
*/

#include<bits/stdc++.h>
using namespace std;
 int print(int ind,int s,int target,int arr[],int n){
    if(ind==n){
        if(s==target) return 1;
        else return 0;
    }
    s+=arr[ind];
    int l=print(ind+1,s,target,arr,n);
    s-=arr[ind];
    int r=print(ind+1,s,target,arr,n);
    return l+r;
 }
int main(){
    int a[]={1,2,1};
    int target=2;
    int n=3;
    cout<<print(0,0,target,a,n)<<endl;
  return 0;
}
