/*Implement a function that adds two numbers together 
and returns their sum in binary. The conversion can be done before, 
or after the addition.

The binary number returned should be a string.
std::string add_binary(uint64_t a, uint64_t b) {
 */ 
 
#include <iostream>
#include <string>
using namespace std;
void decTobin(int numb3){
    int binaryNUmber[64];
    
    //counter for binaryNUmber
    int i=0;
    while(numb3>0){
        //store the binaryNUmber
        binaryNUmber[i]=numb3%2;
        numb3=numb3/2;
        i++;
    }
    
    //lets print the array with binary in reverse
    for (int j = i - 1; j >= 0; j--)
        cout<<binaryNUmber[j];
        
     string result = "";
    for (int j = i - 1; j >= 0; j--) {
        result += to_string(binaryNumber[j]);
    }
    
}

//store binary in then return string



int main()
{
    //turning number into binary
    //array size 32, loop till n>0, take remainder using mode % then save
    //now divide n by 2for each interration, then print
    int numb1=5, numb2=5;
    int numb3=numb1+numb2;
    //now return numb3 as a binary
    decTobin(numb3);
    return 0;
    //store binary in then return string
    
    
  
}
