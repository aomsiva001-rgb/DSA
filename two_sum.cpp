#include <iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int main() {
    //Your Code goes here!
    vector <int> a={2,5,5,11};
    map <int,int> pos;
    for(int q=0;q<a.size();q++)
    {
        pos[q]=a[q];
    }
    sort(a.begin(),a.end());
    int i=0,j=a.size()-1,k=10;
    while(i!=j)
    {
        if(a[i]+a[j]>k)
        {
            j--;
        }
        if(a[i]+a[j]<k)
        {
            i++;
        }
        else
        {
            break;
        }
    }
    for(auto o:pos)
    {
        if(o.second==a[i] || o.second==a[j])
        {
            cout<<o.first<<" ";
        }
    }
    cout<<endl;
    
    return 0;
}