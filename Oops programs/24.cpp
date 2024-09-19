#include <iostream>
#include <fstream>
#include<vector>
using namespace std;

int main()
{
    ifstream fin;

    // file open
    fin.open("zoom.txt");

    // // fir read karo
    // char c;
    // fin >> c;          // read char by char
    // while (!fin.eof()) // eof---- end of file
    // {
    //     cout << c;
    //     // fin>>c;             // did not give space and tab reason bcz it did not treat space and tab as a char
    // }

    char d;
    d = fin.get();
    while (!fin.eof())
    {
        cout << d;
        d = fin.get();
    }
    cout<<endl;
    fin.close();

    vector<int> arr(5);
    cout<<"enter the input: ";
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    // file ko open karo
    ofstream fout;
    fout.open("zero.txt");

    fout<<"Original data\n";

    for (int i = 0; i < 5; i++)
    {
        fout<<arr[i]<<"  ";
    }
    fout<<"\n Sorted data \n";
    fout.close();

    sort(arr.begin(),arr.end());
    for (int i = 0; i < 5; i++)
    {
        fout<<arr[i]<<"  ";
    }
    
}