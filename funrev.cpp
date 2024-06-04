//return function
#include <iostream>
using namespace std;
int rev(int n)
{
    if(n<10){
        return n;
        }
    cout<<n%10;
    return rev(n/10);
}
int main()
{
    int num;
    cout<<"Enter number:";
    cin>>num;
    cout<<"rev number:"<<rev(num);
    return 0;
}


