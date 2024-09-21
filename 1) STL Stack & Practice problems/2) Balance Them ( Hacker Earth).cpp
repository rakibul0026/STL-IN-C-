
#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isBalance(char c1, char c2)
{
    return (c1 == '(' && c2 == ')' || c1 == '{' && c2 == '}' || c1 == '[' && c2 == ']');
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        stack<char> st;
        bool done = true;

        for (auto u : s)
        {
            if (u == '(' || u == '{' || u == '[')
                st.push(u);
            else
            {
                if (st.empty())  // If there's no opening bracket for the current closing bracket
                {
                    done = false;
                    break;
                }
                else
                {
                    if (isBalance(st.top(), u))  // Check if the top matches the current closing bracket
                    {
                        st.pop();
                    }
                    else
                    {
                        done = false;
                        break;
                    }
                }
            }
        }

        // After processing the entire string, if the stack is not empty, it's not balanced
        if (!st.empty())
            done = false;

        if (done)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
