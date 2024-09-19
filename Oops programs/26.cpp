#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("z1.txt");
    fout << "Hello India \n";
    fout << "Hello Abhi \n";
    fout << "Hello Bhai \n";

    fout.close();

    ifstream fin;
    fin.open("z1.txt");

    string line;

                // getline -> mean get line & fin -> read full line also space and store in line and then go to next line
    while (getline(fin, line))
    {
        cout << line << endl;
    }
    fin.close();
}

// hw file auto create data present & data store sort and print in file