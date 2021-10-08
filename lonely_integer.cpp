//  Created by Matthew Broun.
/*
 =====================================================================================================================================
 
 Given an array of integers, where all elements but one occur twice, find the unique element. 
 (0 < integers < 100).
 
 =====================================================================================================================================
 */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>



/*
 ====================
 
 int lonelyinteger()
 
 ====================
 */


int lonelyinteger( std::vector< int > a ) {                       // function
            
    std::vector< int > numbers;                                   // create a array that contains all number from 0 to 100
    
    numbers.resize( 100 );                                        // resize of numbers
    
    int answer = 0;                                               // i need return a value so we have this variable
    
    std::sort( a.begin(), a.end() );                              // sort of algorithm for my cycle
    
    for( unsigned int i = 0; i < 100; i++ ) {                     // i take every number from 1 to 100
        
        for( unsigned int j = 0; j < a.size(); j++ ) {            // here i take a number from std::vector<int> a
            
            if( a[ j ] == i ) {                                   // here i compare these numbers
                
                numbers[ i ] = numbers[ i ] + 1;                  // in std::vector< int > numbers there are numbers 1, 2, 3...
            }                                                     // and here i add so many numbers how in std::vector< int > a in
        }                                                         // std::vector< int > numbers's 1, 2, 3...
    }
    
    for( unsigned int p = 0; p < numbers.size(); p++ ) {          // i need it for understanding where is unique number
        
        if( numbers[ p ] == 1) {                                  // if number in "numbers" is 1 means that number is unique
            
            answer = p;                                           // answer
        }
    }
        
    return answer;                                                // return
}


int main() {
    
    std::vector< int > strings { 1, 2, 3, 4, 3, 2, 1 , 95, 4 };    // array
    
    int result = lonelyinteger( strings );                         // function
    
    std::cout << result;                                           //result
    
    
    return 0;
}
