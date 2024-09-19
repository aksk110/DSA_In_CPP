
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <fstream>
#include <vector>

using namespace std;
using namespace std::chrono;

void averageofn2(int n, ofstream& outfile) {
    vector<double> X(n);
    vector<double> A(n);

    srand(time(nullptr));
    for (int i = 0; i < n; i++) {
        X[i] = rand() % 100;
    }

    double sum = 0;
    for (int j = 1; j <= n; j++) {
        for (int k = 0; k < j; k++) {
            sum += X[k];
        }
        A[j - 1] = sum / j;
        sum = 0;
    }
}

void averageofn(int n, ofstream& outfile) {
    vector<double> X(n);
    vector<double> A(n);

    srand(time(nullptr));
    for (int i = 0; i < n; i++) {
        X[i] = rand() % 100;
    }

    double sum = 0;
    for (int j = 0; j < n; j++) {
        sum += X[j];
        A[j] = sum / (j + 1);
    }
}

void plotGraph() {
    ofstream plotFile("plot.gnuplot");
    plotFile << "set terminal png size 800,600\n";
    plotFile << "set output 'time.png'\n";
    plotFile << "set title 'Time Complexity of averageofn2() vs averageofn()'\n";
    plotFile << "set xlabel 'Number of elements (n)'\n";
    plotFile << "set ylabel 'Time (microseconds)'\n";
    plotFile << "set grid\n";
    plotFile << "plot 'time.txt' using 1:2 with linespoints title 'averageofn2() O(n^2)', ";
    plotFile << "'time.txt' using 1:3 with linespoints title 'averageofn() O(n)'\n";
    plotFile.close();

    system("gnuplot plot.gnuplot");
    system("start time.png");
}

int main() {
    ofstream outfile("time.txt");

    for (int n = 100; n <= 50000; n += 100) {
        auto start = high_resolution_clock::now();
        averageofn2(n, outfile);
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        outfile << n << " " << duration.count() << " ";

        start = high_resolution_clock::now();
        averageofn(n, outfile);
        stop = high_resolution_clock::now();
        duration = duration_cast<microseconds>(stop - start);
        outfile << duration.count() << endl;
    }

    outfile.close();
    plotGraph();

    return 0;
}