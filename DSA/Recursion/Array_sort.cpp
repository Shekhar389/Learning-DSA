#include<bits/stdc++.h>
using namespace std;
void insert(vector<int>&v,int temp)
{
if(v.size()==0||temp>=v[v.size()-1])
{
v.push_back(temp);
return;
}
int val=v[v.size()-1];
v.pop_back();
insert(v,temp);
v.push_back(val);
}
void sort(vector<int>&v)
{
   if(v.size()==1)
   {
    return;
   }
   int temp=v[v.size()-1];
   v.pop_back();
   sort(v);
   insert(v,temp);
}

int main()
{
vector<int> v={2,5,1,7,3};
sort(v);
for (int i = 0; i < v.size(); i++)
{
    cout<<v[i]<<endl;
}

}