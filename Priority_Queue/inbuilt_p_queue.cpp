#include<iostream>
using namespace std;
#include<queue>

int main()
{
    priority_queue<int> pq;
    pq.push(16);
    pq.push(1);
    pq.push(32);
    pq.push(50);
    pq.push(23);
    pq.push(25);
    pq.push(63);

    cout << "size : "<<pq.size() << endl;
    cout <<"Top : "<< pq.top() <<  endl;

    while(!pq.empty()){
        cout << pq.top() << endl;
        pq.pop();
    }


}