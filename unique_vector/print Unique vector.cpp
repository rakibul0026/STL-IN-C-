//print Unique vector
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={2,3,5,5,7,7,1};
    sort(v.begin(),v.end());
    int sz=unique(v.begin(),v.end())-v.begin();

    cout<<sz<<endl;
    for(int i=0;i<sz;i++) cout<<v[i]<<" ";
    cout<<endl;
    
    return 0;

}

  output->
  5
  1 2 3 5 7 

