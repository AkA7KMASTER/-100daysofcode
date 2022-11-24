#include <bits/stdc++.h>
using namespace std;

/*
This is simple program where we see that how to use 


*/

class Complex
{
    //private:
    int a,b;
    public:
     void setdata(int a,int b)
     {
        this->a=a;
        this->b=b;

     }

     friend Complex sum2(Complex ,Complex);

     void printdata()
     {
        cout<<"Sum is "<<(a+b)<<endl;
     }
};

Complex sum2(Complex v1,Complex v2)
{
    Complex c3;
    int sum;
    c3.setdata((v1.a+v2.a),(v1.b+v2.b));
    return c3;
}

int main()
{
    Complex c1,c2,Tsum;
    c1.setdata(2,3);
    c2.setdata(6,3);
    c1.printdata();
    c2.printdata();
    Tsum=sum2(c1,c2);
    Tsum.printdata();
    return 0;
}