#include "src/calculator.h"

int main() {
    calculator(1.33, '+', 2);
    calculator(3.44, '-', 1);
    calculator(2.55, '*', 2);
    calculator(4.666, '/', 2);
    calculator(4.77, '/', 0);
    calculator(4.88, '>', 0);
    // Function calls to calculate
    // Write your all possible input scenarios here
    // Notice that calculator code written here works with floats now
    return 0;
}
