//
//  main.cpp
//  C++
//
//  Created by Alberto Moedano on 10/5/21.
//

#include <iostream>
#include <string>

using namespace std;

string encoding(string input) {
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

int main() {
    //Run length encoding
    //given this string you have to encode it.
    
    //aaaabbccc String example
    //4a2b3c    Output example
    
    string input = "aaaabbccc";
    
    cout << encoding("") << endl;
    cout << encoding("aldhfajklshfsdajlkhjhkhdjhdjhfjhjfhfjd") << endl;
    cout << encoding("") << endl;
    cout << encoding("aaaafffffwwwwwwwbbccc") << endl;
    cout << encoding("asfg") << endl;

  
  return 0;
}
