#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // SGPA values
    double sgpa[] = {8.35, 9.8, 8.14, 8.14, 7.77};
    int numSemesters = sizeof(sgpa) / sizeof(sgpa[0]);

    // Create a data file for Gnuplot
    ofstream dataFile("sgpa_data.txt");
    for (int i = 0; i < numSemesters; ++i) {
        dataFile << i + 1 << " " << sgpa[i] << endl;
    }
    dataFile.close();

    // Generate a Gnuplot script
    ofstream scriptFile("sgpa_plot.gnu");
    scriptFile << "set terminal png size 800,400" << endl;
    scriptFile << "set output 'sgpa_plot.png'" << endl;
    scriptFile << "set title 'Student's SGPA Progression'" << endl;
    scriptFile << "set xlabel 'Semester'" << endl;
    scriptFile << "set ylabel 'SGPA'" << endl;
    scriptFile << "plot 'sgpa_data.txt' with linespoints title 'SGPA'" << endl;
    scriptFile.close();

    // Execute Gnuplot to create the plot
    system("gnuplot sgpa_plot.gnu");

    return 0;
}
