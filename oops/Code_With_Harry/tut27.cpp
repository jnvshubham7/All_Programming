#include <iostream>
using namespace std;
class Complex;
class Calculator
{
    int a, b;
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealcomplex(Complex, Complex);
};
class Complex
{
    int a, b;
    friend int Calculator ::sumRealcomplex(Complex, Complex);

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
int Calculator ::sumRealcomplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    Calculator o3;
    cout << o3.sumRealcomplex(o1, o2);
    return 0;
}
