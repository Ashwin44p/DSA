#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr(4,50);
    arr.insert(arr.begin(),75);
    for(auto itr = arr.begin(); itr !=arr.end();itr++){
        cout<<*itr<<" ";
    }
    cout<<"\n";
    arr.insert(arr.end(),2,30);
    for(auto itr = arr.begin(); itr !=arr.end();itr++){
        cout<<*itr<<" ";
    }
    cout<<endl<<arr.size();
    cout<<endl<<arr.empty();
    arr.pop_back();
     cout<<"\n";
    for(auto itr = arr.begin(); itr !=arr.end();itr++){
        cout<<*itr<<" ";
    }
}