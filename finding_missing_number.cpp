#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    //Your Code goes here!
    vector <int> a={1,9,2,8,3,5,6,4};
    int max=a[0],min=a[0],n=a.size();
    for(int i=1;i<n;i++)
    {
        if(max<=a[i])
        {
            max=a[i];
        }
        else if(min>a[i])
        {
            min=a[i];
        }
    }
    cout<<min<<":"<<max<<endl;
    for(int i=min;i<max+1;i++)
    {
        if(find(a.begin(),a.end(),i)==a.end())
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}