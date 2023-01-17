//Program to delete middle element of a stack
#include<bits/stdc++.h>
using namespace std;
void sdelete(stack<int>&v,int size)
{
   if(size==1)
   {
    v.pop();
    return;
   }
   int temp=v.top();
   v.pop();
   sdelete(v,size-1);
   v.push(temp);
}

int main()
{
stack<int> v;
v.push(3);
v.push(2);
v.push(1);
v.push(4);
v.push(5);
sdelete(v,3);
cout<<v.top()<<endl;
v.pop();
cout<<v.top()<<endl;
v.pop();
cout<<v.top()<<endl;
v.pop();
cout<<v.top()<<endl;
v.pop();
cout<<v.top()<<endl;
v.pop();

}