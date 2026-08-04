#include <iostream>
using namespace std;

int main() {
    //Your Code goes here!
int a[]={1,2,0,3,0,0,5,0,5};
int j=0;
for(int i=0;i<9;i++)
{
    if(a[i]!=0)

    {
        swap(a[j],a[i]);  
        j++;
    }  
}
//for(int i=j;i<9;i++)
//{
   // a[i]=0;
//}
for(int i=0;i<9;i++)
    { cout<<a[i]<<" ";}
    cout<<endl;

return 0;
}