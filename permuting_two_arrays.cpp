//  Created by kukazucker.
/*
 =====================================================================================================================================
 
 There are two n-element arrays of integers, A and B. Permute them into some A` and B` such that the relation A`[i] + B`[i] >= k holds for all i where 0 <= i <= n.
 
 There will be q queries consistion of A, B, and k. For each query, return YES if some permutation A`, B` satisfying the relation exists. Otherwise, return NO;
 
 =====================================================================================================================================
 */

#include <iostream>
#include <string>
#include <vector>


std::string twoArrays(int k, std::vector<int> A, std::vector<int> B) {   // input data
    
    std::sort(A.begin(), A.end());                                       // sort of array from small to big
    std::sort(B.begin(), B.end(), std::greater<int>());                  // sort of array from big to small
    
    
    for( unsigned int i = 0; i < A.size(); i++ ) {                       // compare and add integers A[i] and B[i]
            
            if( A[i] + B[i] < k ) {                                      // if less than k then return NO
                
                return "NO";
                
            }
    }
    
    return "YES";                                                        // in another case YES
}

int main() {
    

    std::vector< int > arrayA {2, 1, 3};                                 // first array
    std::vector< int > arrayB {7, 8, 9};                                 // second array
    
    int k = 7;                                                           // integer k

    std::string answer = twoArrays(k, arrayA, arrayB);                   // function
    
    std::cout << answer;
    
    return 0;
}
