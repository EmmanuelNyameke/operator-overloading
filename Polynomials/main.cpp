// Application file for the poly class
#include "poly.h"

int main(){
    // Constructing and filling two polynomials
    Poly poly1(5);
    poly1.fill();
    Poly poly2(2);
    poly2.fill();
    // Printing the value of the two created polynomials
    cout << "Printing the first two polynomials: " << endl;
    cout << "Poly 1: " << poly1 << endl;
    cout << "Poly 2: " << poly2 << endl;
    // Applying five operations to the two created polynomials
    Poly poly3 = poly1 + poly2;
    Poly poly4 = poly1 - poly2;
    Poly poly5 = poly1 * poly2;
    Poly poly6 = poly1 / poly2;
    Poly poly7 = poly1 % poly2;
    // Printing the results of operations
    cout << "Printing the results of operations: " << endl;
    cout << "Poly 1 + Poly 2: " << poly3 << endl;
    cout << "Poly 1 - Poly 2: " << poly4 << endl;
    cout << "Poly 1 * Poly 2: " << poly5 << endl;
    cout << "Poly 1 / Poly 2: " << poly6 << endl;
    cout << "Poly 1 % Poly 2: " << poly7 << endl;
    return 0;
}