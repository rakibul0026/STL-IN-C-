class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> st;
        for (auto u : ops) {
            // Handle numbers (both positive and negative)
            if (u.size() > 1 || isdigit(u[0])) {
                st.push(stoi(u));
            }
            // Handle "+"
            else if (u == "+") {
                int top1 = st.top(); st.pop();
                int top2 = st.top();
                st.push(top1); // Push the first top element back
                st.push(top1 + top2); // Push the sum
            }
            // Handle "D"
            else if (u == "D") {
                st.push(2 * st.top());
            }
            // Handle "C"
            else if (u == "C") {
                st.pop();
            }
        }
        
        // Calculate the sum of points in the stack
        int ans = 0;
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};

