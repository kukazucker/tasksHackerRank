
//  Created by kukazucker.
/*
 =====================================================================================================================================

 Given two strings consisting of digits 0 and 1 only, find the XOR of the two strings.

 =====================================================================================================================================
 */

#include <iostream>
#include <string>
#include <vector>


std::string string_xor ( std::string s, std::string t ) {      // main function
    
    for( unsigned int i = 0; i < s.size(); i++ ) {             // xor with every integer from first and second strings
         
         s[ i ] = ( s[ i ] ^ t[ i ] ) + '0';                   // return the answer in string s
        
    }
    
    return s;                                                  // return a answer
}
 
int main() {
    
    std::string string1( "00101010101" );                      // first string
    std::string string2( "10101000101" );                      // second string
            
    std::string k = string_xor( string1, string2 );            // function call
    
    std::cout << k;                                            //display a answer
    
    return 0;
}
