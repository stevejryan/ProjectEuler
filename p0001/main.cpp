#include <iostream>

using std::cout;
using std::endl;

int main() {
    /* If we list all the natural numbers below 10 that are multiples of 3 or
     * 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
     * 
     * Find the sum of all the multiples of 3 or 5 below 1000 */
    
    /* I feel like I will figure out much more efficient ways to do this as
     * I continue to progress in the Modern C++ course, but I'm going to try
     * one solution for now with whatever clunky techniques I can. */
    
    // only to 334 because I know all numbers that are divisible by 3 and
    // less than 1000 are less than 334
    int total = 0;
    for (int ii=0; ii<334; ii++) {
        total += 3 * ii;
    }

    // In addition to multiples of 3, we must do multiples of 5, of which
    // there are fewer.  However, we must also exclude multiples of 3 so 
    // they are not double-counted!
    int multiple = 0;
    for (int ii=0; ii<200; ii++) {
        int multiple = 5 * ii;
        if ((multiple % 3) > 0) {
//            std::cout << multiple << endl;
            total += multiple;
        }
    }
    std::cout << total << std::endl;
    return 0;
}
