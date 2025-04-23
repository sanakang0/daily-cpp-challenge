#include <iostream>

using namespace std;

int main() {
    int A,B;

    cin>>A>>B;

    int B1=B%10;
    int B2=(B/10)%10;
    int B3=B/100;

    cout<<A*B1<<endl;
    cout<<A*B2<<endl;
    cout<<A*B3<<endl;
    cout<<A*B<<endl;

    return 0;
}