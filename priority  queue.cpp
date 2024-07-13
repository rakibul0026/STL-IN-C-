#include <iostream>
#include <queue> 
using namespace std;

int main() {
    priority_queue<int> pq;
    pq.push(1);
    pq.push(2);
    pq.push(3);
    // empty function
    if(pq.empty()){
        cout<<"Empty"<<endl;
    }else
    cout<<"Not Empty"<<endl;

    /*size function
    cout<<pq.size()<<endl;*/

    //pq.pop();
    cout<<pq.top()<<endl;
}
