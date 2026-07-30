#include <iostream>
#include<vector>
using namespace std;

int main() 
{
    //Your Code goes here!
    vector <int> a={1,1,1,1,1,0,1,1,1,1,0,1,1,1};
    int count=0,temp=0;
    for(int i=0;i<a.size();i++)
    {   
        if(a[i]==1)
        {
            count++;
            
        }
        else
        {
            //temp=count;
            count=0;
            if(temp>count)
        {
            temp=count;
        }
        }

        
    }
    cout<<"MAXIMUM NUMBER OF ONE's :"<<temp;
    return 0;
}