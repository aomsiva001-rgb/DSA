\\left rotate problem
#include <iostream>
using namespace std;

int main() {
    //Your Code goes here!
    int a[]={1,2,3,4,5};
    int n,m=5;
    cout<<"ENTER  THE N :"; cin>>n;
    int temp[n];
    for(int i=0;i<n;i++)
    {
        temp[i]=a[i];
    }
    int j=0,k=0;
    for(int i=n;i<m;i++)
    {
        a[j]=a[i];
        j++;
    }
    for(int i=j;i<m;i++)
    {
        a[i]=temp[k];
        k++;
    }
    for(int i=0;i<m;i++)
    { cout<<a[i]<<" ";}
    cout<<endl;
    return 0;
}