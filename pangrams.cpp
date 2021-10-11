//  Created by kukazucker.
/*
 =====================================================================================================================================
 
 A pangram is a string that contains every letter of the alphabet. Given a sentence determine whether it is a pangram in the English
 alphabet. Ignore case. Return either pangram or not pangram as appropriate.
 
 s = 'The quick brown fox jumps over the lazy dog'
 
 The string contains all letters in the English alphabet, so return pangram.
 
 =====================================================================================================================================
 */

#include <iostream>
#include <string>


std::string pangrams( std::string string ) {                     // main function
    
    
    std::string letters {"abcdefghijklmnopqrstuvwxyz"};          // english alphabet a - z
    
    int letterCount[26] {};                                      // array for a counting letters from string for example a - 1, b - 3...
    
    for( unsigned int i = 0; i < letters.size(); i++ ) {         // compare every letter form letters (a, b, c...)
        
        for( unsigned int j = 0; j < string.size(); j++) {       // with every letter from string
            
            if(letters[i] == tolower(string[j])) {               // comparing
                
                letterCount[i] += 1;                             // if there are letter then add 1 to count of one letter
            }                                                    // for example to a, b, c...
        }
    }
    
    for( unsigned int i = 0; i < 26; i++ ) {                     // here i want find 0 in count of one letter
        
        if( letterCount[i] == 0) {                               // that be if 'a' or 'b' == 0 then the string isn't pangram
            
            return "not pangram";
            
        }
    }
    

    return "pangram";                                            // otherwise if pangram
}
 
int main() {
    
    std::string string1 {"We promptly judged antique ivory buckles for the next prize"};    // first string (pangram)
    std::string string2 {"We promptly judged antique ivory buckles for the prize"};         // second string (not pangram)
    
    

    std::string answer = pangrams(string1);
    std::cout << answer << std::endl;                                                       // display answer to fisrt string
    
    std::string answer1 = pangrams(string2);
    std::cout << answer1;                                                                   // display answer to second string
    
    return 0;
}
