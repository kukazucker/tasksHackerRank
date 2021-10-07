//  Created by Matthew Broun.
/*
 =====================================================================================================================================
 
 Given a time in 12-hour AM/PM format, convert it to military (24-hour) time.
 
 
 
 =====================================================================================================================================
 */

#include <iostream>
#include <string>
#include <sstream>

 
std::string timeConversion(std::string s) {
    
    char get_fHour = s[ 0 ];       // hours have 2 integers  (00) here is first
    char get_sHour = s[ 1 ];       // here is second
    char type = s[ 8 ];            // type PM/AM
    
    int fHour = get_fHour - '0';     // convert char -> int
    int sHour = get_sHour - '0';     // convert char -> int
    int make24 = 12;                 // start of PM 12:00, 13:00...
    
    if( type == 'P') {              // if PM
        
        if( fHour == 0) {           // first integer is zero (07, 03...)
            
            for ( int i = 0; i < 10; i++ ) {     // here are all numbers from 12:00 hours to 22:00
            
            if( sHour != i) {               // find a right hour ( if 07PM then 12 hours + 7 hours equal 19:00PM
                
                make24 = make24 + 1;
        
                
            } else {                     // if i found right hour - break
                
                break;
                
            }
            
            }
        } else {                                            // exceptions
            
            if( sHour == 0) {
                make24 = 22;                                // 22 PM
            }
            else if( fHour == 1 && sHour == 2 ) {
                
                make24 = 12;                                // 12PM

            } else {
                
                make24 = 23;                                //11PM
            }
        }
    } else {
        
        make24 = 12;                                        // i make it for next function
        
        if( fHour == 1 && sHour == 2 ) {                    // exception 12AM
            
            make24 = 0;
            
        }
    }
    
    
    std::stringstream ss;                               //convert int into std::string
    ss << make24;
    std::string strHours = ss.str();
    
    std::string time("");                               //compare different strings into answer <- PM
    time.append( strHours, 0, 2 );
    time.append( s, 2, 6 );
    
    std::string currTime("");                           // <-AM
    currTime.append( s, 0, 8 );
    
    std::string zeroTime("00");                         // <- 12AM
    zeroTime.append( s, 2, 6 );
    
    if( make24 == 12 ){
        return currTime;                                // <- AM
    } else if( make24 == 0 ) {
        return zeroTime;                                // <- 12AM
    } else {
        return time;                                    // <- PM
    }
}

int main() {
    
    std::string s("12:00:00AM");
    
    std::string result = timeConversion(s);

    std::cout << result << "\n";
    
    return 0;
}
