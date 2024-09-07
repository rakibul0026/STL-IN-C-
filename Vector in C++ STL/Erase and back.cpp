//erase is also delete the element
//.back is also print the last element
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={2,3,4,5};

    cout<<v.back()<<endl;  //v.back  also print the last element 
    v.pop_back();  //v.pop_back also delete the last element
    cout<<v.back()<<endl;

    cout<<*v.begin()<<endl;// *v.begin the first element
    v.erase(v.begin()); //  v.erase deleting th first element
    cout<<*v.begin()<<endl;
}
