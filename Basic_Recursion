// print name n times using recursion.
#include<bits/stdc++.h>
using namespace std;
 
 void print(int i,int n){
  if(i>n) return;
  cout<<"kiran\n";
  print(i+1,n);
 }
int main(){
    int n; cin>>n;
    print(1,n);
  return 0;
}


// print lineraly from 1 to n.
#include<bits/stdc++.h>
using namespace std;
 
 void f(int i,int n){
  if(i>n) return;
  cout<<i<<" ";
  f(i+1,n);
 }
int main(){
  int n; cin>>n;
  f(1,n);
  return 0;
}


// print linearly from 'n' to '1' using recursion.
#include<bits/stdc++.h>
using namespace std;
 
 void f(int i){
  if(i==0) return;
  cout<<i<<" ";
  f(i-1);
 }
int main(){
    int n; cin>>n;
    f(n);
  return 0;
}


// backtracking is an algorithmic way in which there is a large search space and 
// an exhaustive search is required to find the optimal solution.
// we chose a path and go on it until we find the optimal solution or we explored all
// available paths. if the chosen path leads to wrong solution , then we backtrack to
// the previous step and select another path.

// print from 1 to n using backtracking.
#include<bits/stdc++.h>
using namespace std;
 void f(int i){
  if(i<1) return;
  f(i-1);
  cout<<i<<" ";
 }
int main(){
    int n; cin>>n;
    f(n);
  return 0;
}

/*
 Recursion is of two types , parameterised recursion and functional recursion.
*/

// use parameterised recursion to find the sum of first n natural numbers.
#include<bits/stdc++.h>
using namespace std;
 
 void f(int i,int sum){
  if(i<1){
    cout<<sum<<endl;
    return;
  }
  f(i-1,sum+i);
 }
signed main(){
    int n; cin>>n;
    f(n,0);
  return 0;
}

// use functional recursion (without any parameters) to find the sum of first n natural numbers.
#include<bits/stdc++.h>
using namespace std;
 int f(int n){
  if(n==0) return 0;
  return n+f(n-1);
 }
int main(){
    int n; cin>>n;
    cout<<f(n)<<endl;
  return 0;
}


// functional recursion to find the factorial of given number n.

#include<bits/stdc++.h>
using namespace std;
 int fact(int n){
  if(n<=1) return 1;
  return n*fact(n-1);
 }
int main(){
    int n; cin>>n;
    cout<<fact(n)<<endl;
  return 0;
}


// stack space stores the yet to be completed functions.

// reverse an array using recursion.
#include<bits/stdc++.h>
using namespace std;
 void f(int *a,int l,int r){
  if(l>=r) return;
  swap(a[l],a[r]);
  f(a,l+1,r-1);
}
int main(){
    int a[6]={1,2,3,4,5};
    f(a,0,4);
    for(int i=0;i<5;i++) cout<<a[i]<<" ";
    cout<<endl;
  return 0;
}


// MULTIPLE RECURSION CALLS.

// FIBONACCI NUMBER.

#include<bits/stdc++.h>
using namespace std;
 int fib(int n){
  if(n<=1) return n;
  else return fib(n-1)+fib(n-2);
 }
int main(){
    int n; cin>>n;
    cout<<fib(n)<<endl;
  return 0;
}
