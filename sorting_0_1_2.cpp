#include <iostream>
#include <vector>
using namespace std;

int main() {
    //Your Code goes here!
vector <int> a={1,0,2,1,0};
int i,j=0;
for(i=0;i<a.size();i++)
{
    if(a[i]==0)
    {
        swap(a[i],a[j]);
        j++;
    }
}
for(i=j;i<a.size();i++)
{
    if(a[i]==1)
    {
        swap(a[i],a[j]);
        j++;
    }
}
for(i=j;i<a.size();i++)
{
    if(a[i]==2)
    {
        swap(a[i],a[j]);
        j++;
    }
}
for(int k:a)
{
    cout<<k<<" ";
}
    return 0;
}