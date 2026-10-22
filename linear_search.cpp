#include <iostream>
#include<string.h>
using namespace std;
int length(int a[])
{
    int i=0;
    while(a[i]!='\0')
    {
        i++;
    }
    return i;
}
void linear_search(int a[],int x)
{   int i,j=0;
    for( i=0;i<length(a);i++)
    {
        if(a[i]==x)
        {
            cout<<"FOUND :"<<i<<endl;
            j++;
        }
    }
    if(j==0)

        {
            cout<<"NO FOUND"<<endl;
        }
}
int main() {
    //Your Code goes here!
    int a[]={5,66,4,4,3,66,6,22,1};
    int x=66;
    linear_search( a, x);
    return 0;
}