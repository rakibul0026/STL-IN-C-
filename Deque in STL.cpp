#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>dq;
    dq.push_front(10);
    dq.push_front(30);

    dq.push_back(20);

    dq.pop_front();
    for(int i:dq){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;

}
