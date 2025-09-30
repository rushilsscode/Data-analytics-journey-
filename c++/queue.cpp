#include <iostream>
#include<bits/stdc++.h>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    q.push(11);
    cout<<"front of the queue is: "<<q.front()<<endl;
    q.push(15);
    cout<<"front of the queue is: "<<q.front()<<endl;
    q.push(14);
    cout<<"front of the queue is: "<<q.front()<<endl;
    
    cout<<"size of queue is: "<<q.size() <<endl;

    q.pop();
    cout<<"size of queue is: "<<q.size() <<endl;

return 0;
}