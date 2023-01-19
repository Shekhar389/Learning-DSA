#include<bits/stdc++.h>
using namespace std;
int c=0;
void solve(string op,int open, int close){
    if(open==0&&close==0){
        cout<<op<<endl;
        c++;
        return;
    }
    if(open!=0)
    {
        string op1=op;
        op1.push_back('(');
        solve(op1,open-1,close);
    }
    if(close>open)
    {
        string op2=op;
        op2.push_back(')');
        solve(op2,open,close-1);
    }
}
int main(){
solve("",20,20);
cout<<c;
}