#include<iostream>
#include<queue>
using namespace std;

int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3); // push or emplace function are same work
    q.emplace();
    cout << "Size of the queue: " << q.size() << endl;

    // Printing all elements of the queue
    cout << "Elements of the queue:" << endl;
    while (!q.empty()) {
        cout << q.front() << endl; // Print the front element
        q.pop(); // Remove the front element
    }

    return 0;
}
