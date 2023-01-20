#include<bits/stdc++.h>
using namespace std;
int c=0;
void solve(vector<int> v,int index,int k){
    if(v.size()==1)
    {
        cout<<v[0];
        return;
    }
    index=(index+k)%v.size();
    v.erase(v.begin()+index);
    solve(v,index,k);
}
int main(){
int n=40;
int k=7;
vector<int> v;
for(int i=0;i<40;i++)
v.push_back(i+1);
solve(v,0,k-1);
}