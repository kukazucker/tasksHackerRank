//  Created by kukazucker.
/*
 =====================================================================================================================================
 
 There is a large pile of socks that must be paired by color. Given an array of integers representing the color of each sock,
 determine how many pairs of socks with matching colors there are.
 
 =====================================================================================================================================
 */


#include <iostream>
#include <string>
#include <vector>

int sockMerchant(int n, std::vector< int > ar) {                        // main function
    
    int pairs = 0;                                                      // how many there are pairs of sucks
    
    std::sort( ar.begin(), ar.end() );                                  // sort array for my algorithm
    
    for( unsigned int i = 0; i < ar.size(); i ) {                       // move trhough the array
                                                                        // *there i hasn't '++' becouse i need myself increase or reduce index*
        if( ar[ i ] == ar[ i + 1 ] ) {                                  // if numbers are equal
            
            pairs += 1;                                                 // then pair + 1
            
            i += 2;                                                     // and i need move to two cells to avoid repetition
            
        } else {
            
            i += 1;                                                     // or there are no more pairs and i move to one cells
        }
        
    }

    
    return pairs;                                                       // return a answer
}

 
int main() {
    
    
    std::vector< int > s { 10, 20, 20, 10, 10, 30, 50, 10, 50 };        // input data
    
    int n = 0;                                                          // i need this variable just for the exercise on the site
    
    std::cout << sockMerchant( n, s );                                  // function cell
    

    return 0;
}

