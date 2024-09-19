// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;

int fact(int n)
{
    if(n < 2)
    return 1;

    return n*fact(n-1);
}

class SINX
{
    double X;
    int N;

    public:
    SINX(double x, int n)
    {
        X = x;
        N = n;
    }

    void Evaluate()
    {
        double sin = 0;
        int i=0;
        while(2*i+1 <= N)
        {
            sin += pow(-1,i) * (float(pow(X,2*i+1)) / fact(2*i+1));

            i++;
        }
        cout<< " sin(x) value is: "<< sin <<endl;
    }
};

int main()
{
    double x=7;
    x = x*(3.14/ 180);
    SINX S = SINX(x,4);

    S.Evaluate();
}