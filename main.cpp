#include <iostream>
#include <string>
using namespace std;

// Function to convert a decimal number to binary and return it as a string
string decTobin(int numb3) {
    int binaryNUmber[64];
    int i = 0;

    // Convert the number to binary
    while (numb3 > 0) {
        binaryNUmber[i] = numb3 % 2;
        numb3 = numb3 / 2;
        i++;
    }

    // Build the binary string in reverse order
    string result = "";
    for (int j = i - 1; j >= 0; j--) {
        result += to_string(binaryNUmber[j]);
    }

    return result; // Return the binary string
}

int main() {
    // Example numbers to add
    int num1;
    int numb2;
    
    cout<<"enter num1 for the conversion: "<<endl;
    cin>>num1;
        cout<<"enter numb2 for the conversion: "<<endl;
        cin>>numb2;
    int numb3 = num1 + numb2;

    // Convert the sum to binary and print the result
    string binaryResult = decTobin(numb3);
    cout << "The binary representation of " << numb3 << " is: " << binaryResult << endl;

    return 0;
}