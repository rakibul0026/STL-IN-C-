class Solution {
public:
    string removeDuplicates(string S) {
        stack<char> stk;
        for (char ch : S) {
            if (!stk.empty() && stk.top() == ch) {
                stk.pop();
            } else {
                stk.push(ch);
            }
        }
        string result;
        while (!stk.empty()) {
            result += stk.top();
            stk.pop();
        }
        reverse(result.begin(), result.end()); 
        return result;
    }
};

