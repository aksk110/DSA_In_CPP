// #include <iostream>
// #include <chrono>
// #include <fstream>
// #include <string>

// using namespace std;
// using namespace std::chrono;

// void averageofn2(int n) {
//     float s = 0.0;
//     float X[n];
//     float A[n];
//     for (int i = 0; i < n; i++) {
//         X[i] = i+1;
//     }
//     for (int j = 1; j <= n; j++) {
//         for (int k = 0; k < j; k++) {
//             s += X[k];
//         }
//         A[j - 1] = s / j;
//         cout<<A[j-1]<<endl;
//         s = 0;
//     }
// }

// void averageofn(int n) 
// {
//     float s = 0.0;
//     float X[n];
//     float A[n];
//     for (int i = 0; i < n; i++) {
//         X[i] = i+1;
//     }

//     for (int j = 0; j < n; j++)
//     {
//         s += X[j];
//         A[j] = s / (j + 1);
        
//         cout<<"  ";
//     }
// }

// void plotGraph() {
//     ofstream plotFile("plot.gnuplot");
//     plotFile << "set terminal png size 800,600\n";
//     plotFile << "set output 'time.png'\n";
//     plotFile << "set title 'Time Complexity of averageofn2() vs averageofn()'\n";
//     plotFile << "set xlabel 'Number of elements (n)'\n";
//     plotFile << "set ylabel 'Time (microseconds)'\n";
//     plotFile << "set grid\n";
//     plotFile << "plot 'time.txt' using 1:2 with linespoints title 'averageofn2() O(n^2)', ";
//     plotFile << "'time.txt' using 1:3 with linespoints title 'averageofn() O(n)'\n";
//     plotFile.close();

//     // Execute the gnuplot script
//     system("gnuplot plot.gnuplot");
//     system("start time.png");
// }

// int main() {
//     ofstream outfile("time.txt"); // Open a file to write the output

//     for (int n = 0; n <=5000; n+=500) {
//         auto start = high_resolution_clock::now();
//         averageofn2(n);
//         auto stop = high_resolution_clock::now();
//         auto duration = duration_cast<microseconds>(stop - start);
//         outfile << n << " " << duration.count() << " ";

//         start = high_resolution_clock::now();
//         averageofn(n);
//         stop = high_resolution_clock::now();
//         duration = duration_cast<microseconds>(stop - start);
//         outfile << duration.count() << endl;
//     }

//     outfile.close(); // Close the file

//     plotGraph(); // Call the function to plot the graph


//     // cout<<"My dir C:\Users\aksv4\Desktop\Cpp\pointer";

//     return 0;
// }

#include <iostream>
#include <chrono>
#include <fstream>
#include <string>

using namespace std;
using namespace std::chrono;

void averageofn2(int n) {
    float  sum = 0;
    int X[n];
    int A[n];
    for (int i = 0; i < n; i++) {
        X[i] = i+1;
    }
    for (int j = 1; j <= n; j++) {
        for (int k = 0; k < j; k++) {
            sum += X[k];
        }
        A[j - 1] = sum / j;
        cout<<A[j-1]<<endl;
        sum = 0;
    }
}

void averageofn(int n) 
{
    float   sum = 0;
    int  X[n];
    int  A[n];
    for (int i = 0; i < n; i++) {
        X[i] = i+1;
    }

    for (int j = 0; j < n; j++)
    {
        sum += X[j];
        A[j] = sum / (j + 1);
        
        cout<<"  ";
    }
}

void plotGraph() {
    ofstream plotFile("plot.gnuplot");
    plotFile << "set terminal png size 1000,1000\n";
    plotFile << "set output 'time.png'\n";
    plotFile << "set title 'Time Complexity of averageofn2() vs averageofn()'\n";
    plotFile << "set xlabel 'Number of elements (n)'\n";
    plotFile << "set ylabel 'Time (microseconds)'\n";
    plotFile << "set grid\n";
    plotFile << "plot 'time.txt' using 1:2 with linespoints title 'averageofn2() O(n^2)', ";
    plotFile << "'time.txt' using 1:3 with linespoints title 'averageofn() O(n)'\n";
    plotFile.close();

    // Execute the gnuplot script
    system("gnuplot plot.gnuplot");
    system("start time.png");
}

int main() {
    ofstream outfile("time.txt"); // Open a file to write the output

    for (int n = 0; n <=20000; n+=1000) {
        auto start = high_resolution_clock::now();
        averageofn2(n);
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        outfile << n << " " << duration.count() << " ";

        start = high_resolution_clock::now();
        averageofn(n);
        stop = high_resolution_clock::now();
        duration = duration_cast<microseconds>(stop - start);
        outfile << duration.count() << endl;
    }

    outfile.close(); // Close the file

    plotGraph(); // Call the function to plot the graph


    // cout<<"My dir C:\Users\aksv4\Desktop\Cpp\pointer";

    return 0;
}