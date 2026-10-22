#include <iostream>
using namespace std;
int partition(int a[],int l,int h)
{   int i=l,j=h;
    int pivot=a[l];
    while(i<j)
    {
        while(a[i]<=pivot)
        {
            i++;
        }
        while(a[j]>pivot)
        {
            j--;
        }
        if(i<j)
        {
            int t=a[j];
            a[j]=a[i];
            a[i]=t;
        }
    }
        int t=a[l];
        a[l]=a[j];
        a[j]=t;
        return j;
}
void quicksort(int a[],int low,int high )
{   if(low<high)
{
    int pivot=partition(a,low,high);
    quicksort(a,low,pivot-1);//left
    quicksort(a,pivot+1,high);//right
}
}
int main() {
    //Your Code goes here!
    int a[7]={5,2,1,6,7,8,4};
    quicksort(a,0,6);
    for(int i=0;i<7;i++)
    {
        cout<<a[i]<<' ';
    }
    cout<<endl;
    return 0;
}