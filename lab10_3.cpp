#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    int count = 0;
    float sum = 0.0;
    float sumsquare = 0.0;
    string textline;

    ifstream source("score.txt");

    while (getline(source, textline))
    {
        float score = stof(textline); 
        sum += score;                 
        sumsquare += score * score; 
        count++;                      
    }

    
    float mean = sum / count;
    float stddev = sqrt((sumsquare / count) - (mean * mean));

    
    cout << "Number of data = " << count << "\n";
    cout << setprecision(3); 
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << stddev << "\n";

    return 0;
}
