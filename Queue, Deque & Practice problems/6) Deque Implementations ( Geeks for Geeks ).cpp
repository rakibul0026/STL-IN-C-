/*                                         Queue Reversal

Given a Queue Q containing N elements. The task is to reverse the Queue. Your task is to complete the function
rev(), that reverses the N elements of the queue.

Example 1:

Input:
6
4 3 1 10 2 6
Output: 
6 2 10 1 3 4
Explanation: 
After reversing the given elements of the queue , the resultant queue will be 6 2 10 1 3 4.
Example 2:

Input:
4
4 3 2 1 
Output: 
1 2 3 4
Explanation: 
After reversing the given elements of the queue , the resultant queue will be 1 2 3 4.
Your Task: You need to complete the function rev that takes a queue as parameter and returns the reversed queue. The printing is done automatically by the driver code.*/


//{ Driver Code Starts
// Initial Template for C++

// CPP code to implement dequeue functions
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

// dq : deque in which element is to be pushed
// x : element to be pushed

// Function to push element x to the back of the deque.
void push_back_pb(deque<int> &dq, int x) {
    // Your code here
     dq.push_back(x);
}

// Function to pop element from back of the deque.
void pop_back_ppb(deque<int> &dq) {
    if (!dq.empty()) {
        // Pop element from the back
        dq.pop_back();
    }
}

// Function to return element from front of the deque.
int front_dq(deque<int> &dq) {
    // Check if the deque is not empty
    if (!dq.empty()) {
        // Return the front element
        return dq.front();
    } else {
        return -1;  // Return -1 if deque is empty
    }
}

// Function to push element x to the front of the deque.
void push_front_pf(deque<int> &dq, int x) {
    // Push element to the front of the deque
    dq.push_front(x);
}

//{ Driver Code Starts.

// Driver code
int main() {

    int testcase;
    cin >> testcase;

    // declaring deque
    deque<int> dq;

    while (testcase--) {

        int queries;
        cin >> queries;

        while (queries--) {
            string s;
            cin >> s;

            // if query is to push back
            if (s == "pb") {
                int x;
                cin >> x;
                push_back_pb(dq, x);
                cout << dq.back() << endl;
            }

            // if query is to push front
            if (s == "pf") {
                int x;
                cin >> x;
                push_front_pf(dq, x);
                cout << dq.front() << endl;
            }

            // if query is to pop back
            if (s == "pp_b") {
                pop_back_ppb(dq);
                cout << dq.size() << endl;
            }

            // if query is to return front
            if (s == "f") {
                int x = front_dq(dq);
                cout << x << endl;
            }
        }
        dq.clear();
    }

    return 0;
}
// } Driver Code Ends
