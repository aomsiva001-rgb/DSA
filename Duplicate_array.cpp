#include <iostream>
#include<vector>
using namespace std;

int main() {
    //Your Code goes here!
    int a=new int[];
    a={1,2,3,3,3,4,5,5,6,7,7,7,7};
    int n=sizeof(a)/sizeof(a[0]);
    int count=0;
    //cout<<n;
    int j=1;
    for(int i=1;i<n;i++)
    {
        if(a[i]!=a[j-1])
        {
            a[j]=a[i];
            j++;
            count++;
        }
        
    }
    for(int i=n;i>=count;i--)
    {
        delete a[i];
    }
    n=count+1;
    //cout<<count<<endl;
    for(int k=0;k<n;k++)
    {
        cout<<a[k]<<" ";
    }
    return 0;
}