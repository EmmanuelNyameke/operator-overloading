// Application file for the fraction class
#include "fraction.h"

int main(){
    // Creating two objects and testing the plus and minus operator
    Fraction fract1(2, 3);
    Fraction fract2(1, 2);
    cout << "Fract1: " << fract1 << endl;
    cout << "Fract2: " << fract2 << endl;
    cout << "Result of +fract1: " << +fract1 << endl;
    cout << "Result of -fract2: " << -fract2 << endl;
    // Creating four objects and testing the ++ and -- operator
    Fraction fract3(3, 4);
    Fraction fract4(4, 5);
    Fraction fract5(5, 6);
    Fraction fract6(6, 7);
    cout << "Fract3: " << fract3 << endl;
    cout << "Fract4: " << fract4 << endl;
    cout << "Fract3: " << fract5 << endl;
    cout << "Fract6: " << fract6 << endl;
    ++fract3;
    --fract4;
    fract5++;
    fract6--;
    cout << "Result of ++fract3: " << fract3 << endl;
    cout << "Result of --fract4: " << fract4 << endl;
    cout << "Result of fract5++: " << fract5 << endl;
    cout << "Result of fract6--: " << fract6 << endl;
    // Testing Compound Assignment Operators
    Fraction fract7(3, 5);
    Fraction fract8(4, 7);
    Fraction fract9(5, 8);
    Fraction fract10(7, 9);
    fract7 += 2;
    fract8 -=3;
    fract9 *= 4;
    fract10 /= 5;
    cout << "Result of fract7 += 2: "<< fract7 << endl;
    cout << "Result of fract8 -= 3: "<< fract8 << endl;
    cout << "Result of fract9 *= 4: "<< fract9 << endl;
    cout << "Result of fract10 /= 5: "<< fract10 << endl;
    // Creating two new objects and testing friend arithmetic operations
    Fraction fract11(1, 2);
    Fraction fract12(3, 4);
    cout << "Fract11: " << fract11 << endl;
    cout << "Fract12: " << fract12 << endl;
    cout << "Fract11 + Fract12: " << fract11 + fract12 << endl;
    cout << "Fract11 - Fract12: " << fract11 - fract12 << endl;
    cout << "Fract11 * Fract12: " << fract11 * fract12 << endl;
    cout << "Fract11 / Fract12: " << fract11 / fract12 << endl;
    // Creating two new objects and testing relational operators
    Fraction fract13(2, 3);
    Fraction fract14(1, 3);
     cout << "Fract13: " << fract13 << endl;
     cout << "Fract14: " << fract14 << endl;
     cout << "fract13 == fract14: " << boolalpha;
     cout << (fract13 == fract14) << endl;
     cout << "fract13 != fract14: " << boolalpha;
     cout << (fract13 != fract14) << endl;
     cout << "fract13 < fract14: " << boolalpha;
     cout << (fract13 < fract14) << endl;
     cout << "fract13 > fract14: " << boolalpha;
     cout << (fract13 > fract14) << endl;
     // Using converter constructor to create two new objects
     Fraction fract15(5); // Changing an integer into a fraction
     Fraction fract16(23.45); // Changing a double value to a fraction
     cout << "Fract15: " << fract15 << endl;
     cout << "Fract16: " << fract16 << endl;
     // Changing a fraction to double
     Fraction fract17(9, 13);
     cout << "Double Value of Fract17(9, 13): ";
     cout << setprecision(2) << fract17.operator double() << endl;
     // Testing Extraction Operator
     Fraction fract18;
     cin >> fract18;
     cout << "Fract18: " << fract18 << endl;
    return 0;
}
