//  Created by kukazucker.
/*
 =====================================================================================================================================
 
 Given a square matrix, calculate the absolute difference between the sums of its diagonals.
 
 =====================================================================================================================================
 */


#include <iostream>
#include <string>
#include <vector>


int diagonalDifference(std::vector< std::vector< int > > arr) {   // main function

    int firstSum = 0;                                             // left(up) - right(down) sum
    int secondSum = 0;                                            // right(up) - left(down) sum
    
    for( unsigned int i = 0; i < arr.size(); i++ ) {              // numbers from diagonal (for example arr[0][0] = 11, arr[1][1] = 5...
        
            firstSum += arr[ i ][ i ];                            // adding them to int firstSum
        
    }
                                                                  //                                               ^
    for ( unsigned int i = 0; i < arr.size() / 2; i++ ) {         // here i mirrow the matrix to use this function |
        
        swap( arr[ i ], arr[ arr.size() - i - 1 ] );              // swap of matrix
        
    }
    
    for( unsigned int i = 0; i < arr.size(); i++ ) {              // here i repeat code from 18th line
    
            secondSum += arr[ i ][ i ];
        
    }
    
    int amount = abs( firstSum - secondSum );                     // Diagonal's difference
    
    return amount;                                                // return difference
}

int main() {
    
    std::vector< std::vector< int > > arr =                       // array
    {
    { 11,  2,   4 },
    {  4,  5,   6 },
    { 10,  8, -12 }
    };
    
    int amount = diagonalDifference(arr);                         // usage of function
    
    std::cout << amount;

    
    return 0;
}
