#include <iostream>
#include "Matrices.h"

using namespace Matrices;
using namespace std;

int main() {

Matrix a(2, 2); 
Matrix b(2, 4);



a(0, 0) = 0;
a(0, 1) = -1;
a(1, 0) = 1;
a(1, 1) = 0;
cout << "a: " << '\n' << setw(10) << a << '\n';


b(0, 0) = 1;
b(0, 1) = 0.866025;
b(0, 2) = 1;
b(0, 3) = 0.5;
b(1, 0) = 0;
b(1, 1) = 0.5;
b(1, 2) = 1;
b(1, 3) = 0.866025;
cout << "b: " << '\n' << setw(10) << b << '\n';
    
Matrix c = b + b;

cout << "c = b + b:" << '\n' << setw(10) << c << '\n';

    c = a * b;
cout << "c = a * b:" << '\n' << setw(10) << c << '\n';




    return 0;
}


/*


c = b + b:

         2    1.73205          2          1

         0          1          2    1.73205




c = a * b:

         0       -0.5         -1  -0.866025

         1   0.866025          1        0.5

         */