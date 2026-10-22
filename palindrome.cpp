#include <iostream>
#include <climits>
#include<math.h>

using namespace std;
class Solution {
public:
    int reverse(int x) {
        //cout<<(pow(2,31))-1<<endl;
        
       if ( x == 0) {
        return 0;
    }

     int pal=0;
        int rev=abs(x),count=0;
        while(rev>0)
        {
            count++;
            rev/=10;
        }
        rev=abs(x);
        while(rev>0)
        {
            count--;
            pal+=((rev%10)*(pow(10,count)));
            rev/=10;
        if (pal > INT_MAX || pal < INT_MIN ) {
        return 0;
    }
        }
        if(x<0)
        return static_cast<int>(pal);
        else 
        return static_cast<int>(pal);
    }
};
int main() {
    //Your Code goes here!
    Solution s;
    cout<<s.reverse(1534236469);
    return 0;
}