//  Created by kukazucker.
/*
 =====================================================================================================================================
 
 Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers.
 Then print the respective minimum and maximum values as a single line of two space-separated long integers.
 
 =====================================================================================================================================
 */

#include <iostream>


int main( int argc, const char * argv[] ) {
    
    int array[ 5 ] = { 396285104, 573261094, 759641832, 819230764, 364801279 };  // integers: always 5
    
    uint32_t max = 0;                             // max sum
    uint32_t min = 0;                             // min sum
    
    std::sort( array, array + 5 );                // sort of array
    
    for( unsigned int i = 0; i < 4; i++ ) {
        
        min += array[ i ];                        // return of min
        
    }
    
    for( unsigned int i = 4; i > 0; i-- ) {
        
        max += array[ i ];                        // return of max
        
    }
    
    for( unsigned int i = 0; i < 4; i++ ) {
        std::cout << array[ i ] << " ";           // display of the array in the console
    }
    
    std::cout << "\n\n*---------------------result---------------------*\n" << std::endl;
    std::cout << min << " " << max << std::endl;  // display of the result in the console

    return 0;
}
