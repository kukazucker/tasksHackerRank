//  Created by kukazucker.
/*
 =====================================================================================================================================
 
 You will be given a list of 32 bit unsigned integers. Flip all the bits (1 -> 0) and (0 -> 1) and
 return the result as an unsigned integer.
 
 =====================================================================================================================================
 */


#include <iostream>
#include <string>
#include <vector>
#include <bitset>


long flippingBits(long n) {                                 // main function

    long result = 0;                                        // the returned number

    std::bitset< 32 > num32 = n;                            // convert from 10 to 32 number system
    
    for( unsigned int i = 0; i < num32.size(); i++ ) {      // changing 0 to 1 and in contrast
        
        if( num32[ i ] == 0 ) {
            
            num32[ i ] = 1;                                 // if 1 then 0
            
        } else {
                
             num32[ i ] = 0;                                // if 0 then 1
            
        }
    }
    
result = num32.to_ulong();                                  // convert from 32 to 10 number system
    
return result;                                              // return a value

}


int main() {
    
    long num = 9;                                           // input data
    
    long answer = flippingBits(num);                        // function call
    std::cout << answer;
    
    return 0;
}
