//  Created by kukazucker.
/*
 =====================================================================================================================================
 
 Julius Caesar protected his confidential information by encrypting it using a cipher. Caesar's cipher shifts each letter by a number
 of letters. If the shift takes you past the end of the alphabet, just rotate back to the front of the alphabet. In the case of a
 rotation by 3, w, x, y and z would map to z, a, b and c.
 
 =====================================================================================================================================
 */


#include <iostream>
#include <string>

std::string caesarCipher(std::string s, int k) {                // main function
    
    while( k > 26) {                                            // when k is big e. g. 87 or 147 we need reduce extra part without
                                                                // moving of letters e. g. from 62 we need to know just number 9
    k -= 26;                                                    // full english alphabet
            
    }
    
    
    for( unsigned int i = 0; i < s.size(); i++ ) {              // comparison and modification

    int f = static_cast<int>(s[i]);                             // number of letter in ASCII

        if( (f < 64) || ( f > 90 && f < 97 ) || ( f > 122) ){   // if we found something except letters ('.', '!' ...)

            continue;                                           // then skip this symbol

        }


    f+= k;                                                      // in ASCII we add to number of letter shift length

        if( ( isupper( s[ i ] ) && f > 90 ) ) {                 // if it is capital letter

            int rest = f - 90;                                  // how much to shift
            f = 64;                                             // start from 'A' in ASCII
            f += rest;                                          // + shift

        } else if( islower( s[ i ] ) && f > 122 ) {             // if it is uppercase letter

            int rest = f - 122;                                 // how much to shift
            f = 96;                                             // start from 'a' in ASCII
            f += rest;                                          // + shift

        }
        
        s[i] = f;                                               // transformation from ASCII to char in string
    }
    
    return s;                                                   // return the string
}



 
int main() {

    std::string words("!m-rB`-oN!.W`cLAcVbN/CqSoolII!SImji.!w/`Xu`uZa1TWPRq`uRBtok"
                      "`xPT`lL-zPTc.BSRIhu..-!.!tcl!-U");       // input data
    
    
    std::cout << caesarCipher(words, 62);                       // function call;

    return 0;
}

