#include <bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(1);
    s.insert(3);
    s.insert(1);
    s.insert(4);
    s.insert(1);
    s.insert(4);
    
    cout<<s.count(1)<<endl;
}
