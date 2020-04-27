#include <iostream>
#include <cmath>

/* The prime factors of 13195 are 5, 7, 13, and 29.
 *
 * What is the largest prime factor of the number 600851475143? */

/* Sounds like we need two things - one to compute prime factors,
 * and the other to keep track of the largest number. */

using std::cout;
using std::endl;

long int FindPrimeFactors(long int query, bool verbose = false) {
    // First look to see if it's even
    if (query % 2 == 0) {
        if (verbose) {
            cout << "Identified 2 as a prime factor" << endl; 
        }
        return 2;
    }

    // If it's not even, we have to look for more creative
    // factor. The lowest possible factor is 3, and the 
    // largest possible factor is the square root of the query
    long int ceiling = std::round(std::sqrt(query));
    if (verbose) {
        cout << "Ceiling inside FPF: " << ceiling << endl;
    }
    // Loop over all possible (odd) factors within the 
    // allowable range, return the first one we find
    for (int ii = 3; ii < ceiling; ii += 2) {
        if (query % ii == 0) {
            return ii;
        }
    }
    // If we haven't found one, return 0 to indicate prime
    return 0;
}

void diagnostic(long int query, int factor, int largestFactor, int counter) {
    cout << "Query:  " << query << endl;
    cout << "Factor: " << factor << endl;
    cout << "Largest Factor: " << largestFactor << endl;
    cout << "Counter: " << counter << endl;
    cout << endl; 
}

int main() {
    bool verbose = false;
    long int query = 600851475143;
    int factor = 1;
    int largestFactor = 1;
    int counter = 0;
    while (factor != query) {
        if (verbose) {
            diagnostic(query, factor, largestFactor, counter);
        }
        factor = FindPrimeFactors(query, verbose);
        if (factor == 0) {
            factor = query;
        }
        if (factor > largestFactor) {
            largestFactor = factor;
        }
        if (factor > 0) {
            query = query / factor;
        }
        counter += 1;
    }
    cout << "Done! Largest factor is: " << largestFactor << endl;
    return largestFactor;
}
