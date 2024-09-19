#include <iostream>
using namespace std;

class Matrix
{
    int arr[3][3];

public:
    void getdata()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> arr[i][j];
            }
        }
    }

    void display()
    {
        cout<<" Display the data \n";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

    friend  void Multiplication(Matrix &m1, Matrix &m2);

};
 void Multiplication(Matrix &m1, Matrix &m2)
    {
        Matrix result;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                result.arr[i][j] = 0;
                for (int k = 0; k < 3; k++)
                {
                    result.arr[i][j] += m1.arr[i][k] * m2.arr[k][j];
                }
            }
        }

    result.display();
    }

int main()
{
    Matrix m1, m2;

    cout << "Enter elements of matrix 1: \n";
    m1.getdata();

    cout << "Enter elements of matrix 2: \n";
    m2.getdata();

    Multiplication(m1,m2);
}