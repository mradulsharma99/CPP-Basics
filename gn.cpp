#include <iostream>
using namespace std;

int arithmetic_operators(int number) {
    int original_number {number};
    
    //----WRITE YOUR CODE BELOW THIS LINE----
    
    //-- Multiply number by 2 and assign the result back to number
    number = number * 2;
    
    //-- Add 9 to number and assign the result back to number
    number = number + 9;
    
    //-- Subtract 3 from number and assign the result back to number
    number = number - 3;
    
    //-- Divide number by 2 and assign the result back to number
    number = number / 2;
    
    //-- Subtract the variable original_number from number and assign the result back to number
    number = number - original_number;
    
    //-- Take the modulus 3 (%) of number and assign it back to number
    number = number % 3;
    
    //The following is also a valid solution
    // number = ((number * 2 + 9 - 3) / 2 - number) % 3;
    
    //----WRITE YOUR CODE ABOVE THIS LINE----
    
    return number;
}