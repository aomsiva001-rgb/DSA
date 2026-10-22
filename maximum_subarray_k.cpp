#include <iostream>
#include<vector>
using namespace std;

int main() {
    //Your Code goes here!
    vector <int> a={10,5,2,7,1,9};
    int i,j=a.size()-1;
    int sum=0,k=15;
    cout<<i<<" "<<j<<endl;
    for(int k:a)
    {
        sum+=k;
    }
    
    for( i=0;i<a.size();i++)
    {
        cout<<sum<<endl;
        if(sum==k)
        {
            break;
        }
        else if(sum-a[i]==k)
        {
            i--;
            break;
        }
        else if(sum-a[j]==k)
        {
            j--;
            break;
        }
        else
        {   sum-=(a[i]+a[j]);
            j--;
        }
    }
    cout<<i<<" "<<j<<endl;
    
    return 0;
}