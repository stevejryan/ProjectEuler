#include <iostream>

using std::cout;
using std::endl;

int main() {
    int f = 0;
    int a = 1;
    int b = 2;
    int sum = 2;
    bool underFourMillion = true;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "f: " << f << endl;
    cout << "sum: " << sum << endl;
    while (underFourMillion) {
        if (f % 2 == 0) {
            sum += f;
        }
        f = a + b;
        cout << "New f = " << f << endl;
        a = b;
        b = f;        
        underFourMillion = f < 4000000;
    }
    std::cout<< sum << endl;
    return 0;
}
