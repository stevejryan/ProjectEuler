/* A palindromic number reads the same both ways. The largest palindrome
 * made from the product of 2-digit numbers is 9009 = 91 * 99.
 * 
 * Find the largest palindrome made from the product of two 3-digit numbers*/

/* 3-digit numbers range from 100 to 999.
 * 
 * 1,000 x 1,000 = 1,000,000.
 * Since we're constrained to numbers < 1,000, palindromic numbers can have
 * at most 6 digits.  We can identify each numeral using modulus operator.
 * 
 * We might have to handle even-digited and odd-digited palindromes
 * separately.
 * 
 * There are also OTOH 1M products to search through.  1M isn't bad - but
 * is there anyway to limit the search space?
 * > There is!  Multiplication is commutative, so that's half the search 
 * space eliminated.
 * 
 * Next we would like to start from the largest possible products and only
 * search until we find the first palindromic number - if we can guarantee
 * that we're searching in descending order of product size, then the first
 * product we find that's a palindrome has to be the largest.
 * > Looks like this can be done too!
 * 
 * Edge case - is something that ends in 0 a palindrome number?  I can't find
 * an answer online, but it seems like probably no. Ergo, if it ends in 0,
 * it's not a palindrome.
 */

#include <iostream>

using std::cout;
using std::endl;
bool IsThisNumberAPalindrome(int number) {
    int onesPlace = number % 10;
    number = number / 10 * 10;
    cout << "Ones place: " << onesPlace << endl;
    cout << "New Number: " << number << endl;
    
    int tensPlace = number % 100;
    number = number / 100 * 100;
    cout << "Tens place: " << tensPlace << endl;
    cout << "New Number: " << number << endl;
    
    int hundredsPlace = number % 1000;
    number = number / 1000 * 1000;
    cout << "Hundreds place: " << hundredsPlace << endl;
    cout << "New Number: " << number << endl;

    int thousandsPlace = number % 10000;
    number = number / 10000 * 10000;
    cout << "Thousands place: " << thousandsPlace << endl;
    cout << "New Number: " << number << endl;

    int tenThousandsPlace = number % 100000;
    number = number / 100000 * 100000;
    cout << "Ten-thousands place: " << tenThousandsPlace << endl;
    cout << "New Number: " << number << endl;

    int hundredThousandsPlace = number % 1000000;
    number = number / 1000000 * 1000000;
    cout << "Hundred-thousands place: " << hundredThousandsPlace << endl;
    cout << "New Number: " << number << endl;
    // Figure out how many digits
    // Even or Odd
    // Modulus operator to build up a list of digits

    // For now, probably not
    return false;
}

int CountDigits(int number) {

}

int main() {
    IsThisNumberAPalindrome(1234);
    cout << "There's a clever way to do this with recursion, I think, " << endl << " but it requires better data structures than I have knowlege of so far " << endl;
    return 0;
}
