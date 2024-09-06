
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={2,3,5,5,7,7,1};
    sort(v.begin(),v.end());
    unique(v.begin(),v.end());

    for(auto u:v) cout<<u<<" ";
    
    return 0;

}
