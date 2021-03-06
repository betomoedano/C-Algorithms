//
//  main.cpp
//  C++
//
//  Created by Alberto Moedano on 10/5/21.
//

#include <iostream>
#include <string>
#include <map>

using namespace std;



int main() {

  
  return 0;
}

//Prime number
bool inPrime( int num) {
    if(num < 2) return false;
    for(int i = 2; i < num; i++){
        if (num % i == 0) {
            return false;
        }
        return true;
    }
}


string encoding(string input) {
    //Run length encoding
    //given this string you have to encode it.
    
    //aaaabbccc String example
    //4a2b3c    Output example
    
    if( input == "" ) {
        return "the input was null";
    }
    string output = "";
    int counter = 0;
    
    for (int i = 1; i <= input.length(); i ++) {
        if (input[i] == input[i - 1]) {
            counter ++;
        } else if (input[i - 1] != 0) {
            counter ++;
            output += to_string(counter) + input[i - 1];
            counter = 0;
        }
    }
    return output;
}

