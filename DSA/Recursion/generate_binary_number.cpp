#include<bits/stdc++.h>
using namespace std;
int c=0;
void solve(string op,int one, int zero, int n){
    if(n==0){
        cout<<op<<endl;
        c++;
        return;
    }
    if(one==zero)
    {
        string op1=op;
        op1.push_back('1');
        solve(op1,one+1,zero,n-1);
    }
    if(one>zero)
    {
        string op1=op;
        op1.push_back('1');
        solve(op1,one+1,zero,n-1);
        string op2=op;
        op2.push_back('0');
        solve(op2,one,zero+1,n-1);
    }
}
int main(){
solve("",0,0,100);
cout<<c;
}