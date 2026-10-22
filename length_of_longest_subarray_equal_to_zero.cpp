#include <iostream>
#include<vector>
using namespace std;

int main() {
    //Your Code goes here!
    vector <int> a= {2,6, -2, 2, -8, 1, 7, 4, -10,-2} ;
    int i,j=a.size()-1;
    int sum=0;
    cout<<i<<" "<<j<<endl;
    for(int k:a)
    {
        sum+=k;
    }
    
    for( i=0;i<a.size();i++)
    {
        cout<<sum<<endl;
        if(sum==0)
        {   j++;
            break;
        }
        else if(sum-a[i]==0)
        {
            i--;
            break;
        }
        else if(sum-a[j]==0)
        {
            j--;
            break;
        }
        else
        {   sum-=(a[i]+a[j]);
            j--;
        }
    }
    cout<<j<<"LONGEST SUBARRAY "<<endl;
    
    return 0;
}