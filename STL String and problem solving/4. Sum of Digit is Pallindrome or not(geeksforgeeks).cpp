#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin >> s;
    int digitsum = 0;
    for (auto u : s)
    {
        digitsum += u - '0';
    }

    string str=to_string(digitsum);
    string temp=str;
    reverse(temp.begin(),temp.end());
    if(temp==str){
        cout<<"1";
    }else
    cout<<0;

}
