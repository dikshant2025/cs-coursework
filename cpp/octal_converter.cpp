#include <iostream>
#include <string>

using namespace std;

// Function to convert octal to decimal
int octTodec(int);
// Function to convert decimal to octal
string decTooct(int);

int main(){
    int num;
    int cha;
    do{
        cout << "1. Convert Decimal to Octal" << endl;
        cout << "2. Convert Octal to Decimal" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> cha;

        if(cha == 1){
            cout << "Enter a decimal number: ";
            cin >> num; 
            cout << "Octal equivalent: " << decTooct(num) << endl;
        }else if(cha == 2){
            cout << "Enter an octal number: ";
            cin >> num; 
            cout << "Decimal equivalent: " << octTodec(num) << endl;
        }else if (cha != 0){
            cout << "Invalid choice, please try again." << endl;
        }
    }while (cha != 0); 
    cout << "Exiting the program." << endl;
    return 0;
}

int octTodec(int oct)
{
    int dec = 0;
    int base = 1;
    int remainder;
    while(oct > 0)
    {
        remainder = oct % 10;
        dec += remainder * base;
        base *= 8;
        oct /= 10;
    }
    return dec;
}

string decTooct(int dec)
{
    if(dec == 0)
    return "0";
    string oct = "";
    while(dec > 0)
    {
        oct = to_string(dec % 8) + oct;
        dec /= 8;
    }
    return oct;
}