#include<bits/stdc++.h>
using namespace std;
void solve(string in,string op){
    if(in.length()==0){
        cout<<op<<endl;
        return ;
    }
    string op1=op;
    string op2=op;
    op1.push_back(in[0]);
    op2.push_back(' ');
    op2.push_back(in[0]);
    in.erase(in.begin()+0);
    solve(in,op1);
    solve(in,op2);
    return;
}
int main(){
    string s;
    cin>>s;
    string ip=s;
    string op="";
    op=ip[0];
    ip.erase(ip.begin()+0);
solve(ip,op);
}