#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
vector <int> a={-3,-2,-1};
int i,j=a.size()-1,m,sum=0;
for(int k:a)
{
    sum+=k;
}
m=sum;
for(i=0;i<a.size();i++)
{
    if(sum>m)
    {
        m=sum;
    }
    cout<<sum<<":"<<sum-a[i]<<":"<<sum-a[j]<<endl;
    m=max(sum,max(sum-a[i],sum-a[j]));
 sum-=(a[i]+a[j]);
 j--;
 cout<<"sum :"<<sum<<endl;
 cout<<"max :"<<m<<endl;   
}

cout<<m<<sum<<endl;
}
