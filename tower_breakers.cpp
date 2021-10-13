//  Created by kukazucker.
/*
 =====================================================================================================================================
 
 Two players are playing a game of Tower Breakers! Player 1 always moves first, and both players always play optimally.
 The rules of the game are as follows:
 
 1) Initially there are n towers.
 2) Each tower is of height m.
 3) The players move in alternating turns.
 4) In each turn, a player can choose a tower of height x and reduce its height to y, where 1 <= y < x and y evenly divides x.
 5) If the current player is unable to make a move, they lose the game.
 
 Given the values of n and m, determine which player will win. If the first player wins, return 1. Otherwise, return 2.

 =====================================================================================================================================
 */


#include <iostream>
#include <string>
#include <vector>

/*
=====================================================================================================================================

 My solution: the height of towers didn't needed because we need to know who is last one to leave a unit. Every step of every player
 is decreasing arithmetic progression so if the quantity is odd then second player wins, otherwise first.
 
=====================================================================================================================================
*/

int towerBreakers(int n, int m) {                       // main function
    
    int winPlayer = ( m == 1 || n % 2 == 0) ? 2 : 1;    // if number of towers is even or equal to 1 then second player wins
                                                        // otherwise first player wins
    return winPlayer;                                   // return a answer

}

 
int main() {

    int towers = 100001;                                // number of towers
    
    int height = 5;                                     // height of towers
        
    std::cout << towerBreakers(towers, height);         // function call

    return 0;
    
}


















 
 
 

