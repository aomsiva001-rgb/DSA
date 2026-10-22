#include <iostream>
using namespace std;

int main() {
    //Your Code goes here!
int a[]={5,66,4,4,3,66,6,22,1};
int min2=a[0],min1=a[1] ;
for(int i=2;i<9;i++)
{   int temp=min1;
    if(min1>a[i])
    {   //swap()
        min1=a[i]; 
        min2=temp;  

    }
    
    if(a[i]>min1 && a[i]<min2)

    {
    min2=a[i];
    }

}

cout<<"\nSMALLEST ELEMENT IN THE ARRAY IS :"<<min1;
cout<<"\nSMALLEST SECOND ELEMENT IN THE ARRAY IS :"<<min2;
    return 0;
}