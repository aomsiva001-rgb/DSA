#include <iostream>
#include<vector>
using namespace std;

int main() {
    //Your Code goes here!
    vector <int> a={3,1,3,2,1,4,2};
    int j=0;
    for(int i=1;i<a.size();i++)
    {
        if(a[i]==a[j])
        {
            swap(a[i],a[j+1]);
            i++;
            j+=2;
        }
        
    }
    cout<<a.back();
    return 0;
}