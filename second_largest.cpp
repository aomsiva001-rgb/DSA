#include <iostream>
using namespace std;

int main() {
    //Your Code goes here!
int a[]={5,5,5};
int max_2=0,max_1=0 ;
for(int i=0;i<3;i++)
{   int temp=max_1;
    if(max_1<a[i])
    {   //swap()
        max_1=a[i]; 
        max_2=temp;  

    }
    
    if(a[i]<max_1 && a[i]>max_2)

    {
    max_2=a[i];
    }

}

cout<<"\nLARGEST ELEMENT IN THE ARRAY IS :"<<max_1;
cout<<"\nLARGEST SECOND ELEMENT IN THE ARRAY IS :"<<max_2;
    return 0;
}