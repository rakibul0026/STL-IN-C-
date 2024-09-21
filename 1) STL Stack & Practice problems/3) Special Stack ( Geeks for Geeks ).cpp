/*Special Stack
Difficulty: EasyAccuracy: 59.15%Submissions: 86K+Points: 2
Design a data-structure SpecialStack that supports all the stack operations like push(), pop(), isEmpty(), isFull() and an additional operation getMin() which should return the minimum element from the SpecialStack. Your task is to complete all the functions, using a stack data structure.

Note: The output of the code will be the value returned by getMin() function.

Examples:

Input: stack: 18 19 29 15 16
Output: 15
Explanation: The minimum element of the stack is 15.
Input: stack: 34 335 1814 86
Output: 34
Explanation: The minimum element of the stack is 34.*/

//{ Driver Code Starts
#include<iostream>
#include<stack>
using namespace std;
void push(stack<int>& s,int a);
bool isFull(stack<int>& s,int n);
bool isEmpty(stack<int>& s);
int pop(stack<int>& s);
int getMin(stack<int>& s);
//This is the STL stack (http://quiz.geeksforgeeks.org/stack-container-adaptors-the-c-standard-template-library-stl/).
stack<int> s;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a;
		cin>>n;
		while(!isEmpty(s)){
		    pop(s);
		}
		while(!isFull(s,n)){
			cin>>a;
			push(s,a);
		}
		cout<<getMin(s)<<endl;
	}
}
// } Driver Code Ends


void push(stack<int>& s, int a){
	   s.push(a);
}

bool isFull(stack<int>& s,int n){
  return s.size() == n;
}

bool isEmpty(stack<int>& s){
    return s.empty(); 
}

int pop(stack<int>& s){
 if(!s.empty()) {
        int x = s.top(); 
        s.pop();          
        return x;       
    }
    return -1;
}

int getMin(stack<int>& s){
 stack<int> temp = s;
    int min = temp.top(); 
    temp.pop();            

    while(!temp.empty()) {
        if(min > temp.top()) {
            min = temp.top();  
        }
        temp.pop();  
    }

    return min; 
}
