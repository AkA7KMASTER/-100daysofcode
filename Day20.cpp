/*
A program in C++ to show default argument in constructor 
*/

#include <bits/stdc++.h>
using namespace std;
class A
{
    public:
    A(int a, int b=9, int c=6)
    {
        int a1=a;
        int b1=b;
        int c2=c;
        cout<<a<<endl<<b<<endl<<c;
    }
    void vaa(void);
};

int main()
{
    A a(2);
    string sd;
    cin>>sd;
    int n=stoi(sd);
    cout<<n;
    return 0;
}


/*
Example 1:
2
Output:
2
4
9
*/