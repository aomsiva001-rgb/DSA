#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    //Your Code, ,goes here!
    vector <int> a={1,8,6,2,5,4,8,3,7};
    int len=a.size();
    int i=0,j=len-1,maxValue=0;
    while(i<j)
    {
        int curValue=min(a[i],a[j])*(j-i);
        if(curValue>maxValue)
        {
            maxValue=curValue;
        }
        if(a[i]>a[j])
        {
            j--;
        }
        else
        {
            i++;
        }
        //cout<<"current container :"<<maxValue<<endl;
    }
    cout<<"maximum container :"<<maxValue;

    return 0;
}