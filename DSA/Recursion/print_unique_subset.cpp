#include<bits/stdc++.h>
using namespace std;
set<string> k;
void solve(string in,string op){
    if(in.length()==0){
        k.insert(op);
        return ;
    }
    string op1=op;
    string op2=op;
    op2.push_back(in[0]);
    in.erase(in.begin()+0);
    solve(in,op1);
    solve(in,op2);
    return;
}
int main(){
solve("aab","");
for(auto i:k)
{
    cout<<i<<endl;
}
}