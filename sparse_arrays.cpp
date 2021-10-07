//  Created by kukazucker.
/*
 =====================================================================================================================================
 
 There is a collection of input strings and a collection of query strings. For each query string,
 determine how many times it occurs in the list of input strings. Return an array of the results.
 
 
 
 =====================================================================================================================================
 */


/*
 ==================================
 
 
 std::vector<int> matchingStrings()
 
 
 ==================================
 */

std::vector<int> matchingStrings( std::vector< std::string > strings, std::vector< std::string > queries ) {
    
    std::vector< int > sums;                                      // sum of every query
    sums.resize( queries.size() );                                // resize of vector

    for( unsigned int i = 0; i < queries.size(); i++ ) {          // sort of queryes from queries[0]
        
        int summa = 0;                                            // sum of every query, updated every cycle

        for( unsigned int j = 0; j < strings.size(); j++ ) {      // sort of strings

            if( queries[ i ] == strings[ j ] ) {                  // compare the queryes and the strings
                
                summa += 1;                                       // plus one concidence every time, updated every cycle
                
            }
            
            sums.at( i ) = summa;                                 //return amount to std::vector<int> sums
            
        }
    }
    
    return sums;                                                  // return of all amounts
}



int main() {
    
    std::vector<std::string> strings { "bear", "cat", "dog", "dog", "frog", "snake" };      // strings

    std::vector<std::string> querties { "cognac", "cat", "dog", "vodka", "beer" };          // querties
    
    
    std::vector<int> sums = matchingStrings( strings, querties );                           // function
    
    for( int i : sums ) {
        
        std::cout << i << "\n";                                                             // display every sum from matchingStrings()
        
    }
    
    return 0;
}
