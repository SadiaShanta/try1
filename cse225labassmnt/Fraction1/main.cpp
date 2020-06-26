#include <iostream>
#include "Fraction.h"

using namespace std;

int main()
{
Fraction f3(5,6),f4(2,7);
Fraction f5=f3*f4;
f5.print();
    Fraction f1(2,3), f2(1,3);

    (f1*f2).print();

    /* following achieves same result

    Fraction f3 = f1*f2;
    f3.print();     */

    return 0;
}
