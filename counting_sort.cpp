//  Created by kukazucker.
/*
 =====================================================================================================================================
 
THE COURTING SORT
 
 =====================================================================================================================================
 */
    

#include <iostream>
#include <string>
#include <vector>



std::vector< int > countingSort( std::vector< int > arr ) {         // main function

    unsigned int numMax = 100;                                      // maximal number
            
    std::vector< int > numCount;                                    // the array the will be in answer
    numCount.resize( numMax );                                      // size: 0 - 99 numbers
         
    unsigned int k = 0;                                             // the completion of array the numbers
    while( k < numMax + 1 ) {                                       // from 0 - maximal number from array
                
        numCount[ k ] = k;
                
        k++;
                
    }
            
    for( unsigned int i = 0; i < numMax + 1; i++ ) {                // the numbers from numCount and the numbers from array comparison
                
        int numQuantity = 0;                                        // how many numbers in array from 0 - 99
            
        for( unsigned int j = 0; j < arr.size(); j++ ) {            // comparison
                    
            if( numCount[ i ] == arr[ j ] ) {
                       
                numQuantity += 1;
                
            }
        }
                
        numCount[ i ] = numQuantity;                                // how much is one digit for example 0, 1, 2...
            
    }
            
    return numCount;                                                // returning a array
    
}

int main() {
    
    // input data
    std::vector< int > arrayA =
    {   63, 25, 73,  1, 98, 73, 56, 84, 86, 57, 16, 83,  8, 25, 81, 56,  9, 53, 98, 67,
        99, 12, 83, 89, 80, 91, 39, 86, 76, 85, 74, 39, 25, 90, 59, 10, 94, 32, 44,  3,
        89, 30, 27, 79, 46, 96, 27, 32, 18, 21, 92, 69, 81, 40, 40, 34, 68, 78, 24, 87,
        42, 69, 23, 41, 78, 22,  6, 90, 99, 89, 50, 30, 20,  1, 43,  3, 70, 95, 33, 46,
        44,  9, 69, 48, 33, 60, 65, 16, 82, 67, 61, 32, 21, 79, 75, 75, 13, 87, 70, 33,
        44,  9, 69, 48, 33, 60, 65, 16, 82, 67, 61, 32, 21, 79, 75, 75, 13, 87, 70, 33
    };


    std::vector< int > answer = countingSort( arrayA );            // function call

    for( unsigned int i = 0; i < answer.size(); i++ ) {            // display a answer
        
        if( i % 10 == 0) { std::cout << std::endl; }               // *just for console* if there is in a string 10 numbers = new string
        
        std::cout << answer[i] << " ";                             // display every number
        
    }
    
    return 0;
}
