#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"enter number";
    cin>>n;
    //  3 12 48....
    int a=3;
    for(int i=3;i<=n;i++){
        cout<<a<<" ";
        a=a*4;
    }
    return 0;
}
