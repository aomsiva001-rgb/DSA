#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    //Your Code goes here!
    vector <int> a={1,9,2,8,3,5,6,4};
    int min=1,n=a.size();
    int max=n+1,sum=0;
    
    cout<<min<<":"<<max<<endl;
    for(int i:a)
    {
    sum+=i;
    }
    int m=(max*(max+1))/2;
    cout<<n<<":"<<sum<<endl;
    int ans=m-sum;
    cout<<ans<<endl;
    return 0;
}