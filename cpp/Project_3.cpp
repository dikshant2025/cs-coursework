/*
Project_3 - Temperature converter
Author-Dikshant Shrestha
Date-29/09/2024

Reads lines like "100 C F" from temp_input.txt (value, from-scale, to-scale),
converts between Celsius (C), Fahrenheit (F) and Kelvin (K),
and writes each result to the screen and to temp_output.txt.

Revised Nov 2026: reads every line in a loop (the original repeated the same
block three times) and fixes the F-to-K conversion, which was being overwritten
by the F-to-C formula.
*/

#include <iostream>
#include <fstream>

using namespace std;

int main(){
    double value, result;
    char scaleFrom, scaleTo;
    ifstream infile;
    ofstream outfile;

    infile.open("temp_input.txt");
    if (!infile) {
        cout << "Error: could not open temp_input.txt" << endl;
        return 1;
    }
    outfile.open("temp_output.txt");

    // Keep reading until there are no more lines in the file.
    while (infile >> value >> scaleFrom >> scaleTo) {
        bool valid = true;

        if ((scaleFrom == 'C') && (scaleTo == 'F')) {
            result = (value * 9.0 / 5.0) + 32;
        } else if ((scaleFrom == 'C') && (scaleTo == 'K')) {
            result = value + 273.15;
        } else if ((scaleFrom == 'F') && (scaleTo == 'C')) {
            result = (value - 32) * 5.0 / 9.0;
        } else if ((scaleFrom == 'F') && (scaleTo == 'K')) {
            result = (value - 32) * 5.0 / 9.0 + 273.15;
        } else if ((scaleFrom == 'K') && (scaleTo == 'C')) {
            result = value - 273.15;
        } else if ((scaleFrom == 'K') && (scaleTo == 'F')) {
            result = (value - 273.15) * 9.0 / 5.0 + 32;
        } else {
            valid = false;
        }

        if (valid) {
            outfile << value << " " << scaleFrom << " to " << scaleTo << " = " << result << endl;
            cout << value << " " << scaleFrom << " to " << scaleTo << " = " << result << endl;
        } else {
            outfile << "Error: Invalid temperature scale" << endl;
            cout << "Error: Invalid temperature scale" << endl;
        }
    }

    infile.close();
    outfile.close();
    return 0;
}
