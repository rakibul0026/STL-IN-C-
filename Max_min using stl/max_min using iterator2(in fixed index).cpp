#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={2,3,5,5,7,7,1};
    vector<int>::iterator it=max_element(v.begin()+1,v.begin()+4);
    cout<<*it<<endl;
    
    return 0;

}



