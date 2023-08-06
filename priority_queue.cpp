//priority queue and minimum priority queue
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    priority_queue<int>pq;
    pq.push(5);
    pq.push(3);
    pq.push(6);
    pq.push(1);
    //cout<<pq.top()<<endl;
    cout<<"Priority queue : "<<endl;
    while(!pq.empty()){
      cout<<pq.top()<<endl;
      pq.pop();
    }
    cout<<endl;

    // minimum priority queue can be implemented by passing negative of required numbers
    // and multiplying every output we get in a priority queue.
    // example is :
    priority_queue<int>pq2;
    pq2.push(-5);
    pq2.push(-3);
    pq2.push(-6);
    pq2.push(-1);
    cout<<"Minimum priority queue : "<<endl;
    while(!pq2.empty()){
      cout<<-pq2.top()<<endl;
      pq2.pop();
    }
    cout<<endl;

    // or else we can use the syntax for minimum priority queue.
    //the syntax is :
    priority_queue<int,vector<int>,greater<int>>mpq;
    mpq.push(5);
    mpq.push(3);
    mpq.push(6);
    mpq.push(1);
    cout<<"Minimum priority queue : "<<endl;
    while(!mpq.empty()){
      cout<<mpq.top()<<endl;
      mpq.pop();
    }
    cout<<endl;
  return 0;
}
