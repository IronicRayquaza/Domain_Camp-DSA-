#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main(){
    vector<int>v={3,2,3,2,3,1};
    unordered_map<int,int> mp;
    for(int i=0;i<v.size();i++){
        mp[v[i]]++;

    }
    for(auto i:mp){
        cout<<i.first<<"->"<<i.second<<endl;

    }
}
//unorderd map demonstrating usage of hashtables
//more questions done on leetcode