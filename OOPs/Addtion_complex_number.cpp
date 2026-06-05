#include<iostream>
using namespace std;        
class Complex{
    private:
        int real;
        int imag;
    public:
        Complex(int i=0, int r=0)
        {
            real = r;
            imag = i;
        }
        
       int operator + ()               
        {
            int temp;
            temp = real + real;
            temp = imag + imag;
    
        }
        int display()
        {
            cout<<real<<" + "<<imag<<"i"<<endl;
            return 0;
        }
};
int main()
{
    Complex c1(2, 3);
    +c1;
    c1.display();
    return 0;
}