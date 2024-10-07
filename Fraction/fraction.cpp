// Implementation file for the fraction class
#include "fraction.h"

// Parameter Constructor
Fraction::Fraction(int num, int den = 1):numer(num), denom(den){}
Fraction::Fraction(double value){
    denom = 1;
    while((value - static_cast<int>(value)) > 0.0){
        value *= 10.0;
        denom *= 10;
    }
    numer = static_cast <int>(value);
    normalize();
}

// Default Constructor
Fraction::Fraction():numer(0), denom(1){}

// Copy Constructor
Fraction::Fraction(const Fraction& fract):numer(fract.numer), denom(fract.denom){}

// Destructor
Fraction::~Fraction(){}

// Conversion Operator
Fraction::operator double(){
    double num = static_cast <double> (numer);
    return (numer / denom);
}

// Unary plus operator
const Fraction Fraction :: operator+() const {
    Fraction temp(+numer, denom);
    return temp;
}

// Unary minus operator
const Fraction Fraction :: operator-() const {
    Fraction temp(-numer, denom);
    return temp;
}

// Pre-increment operator
Fraction& Fraction :: operator++(){
    numer = numer + denom;
    this -> normalize();
    return *this;
}

// Pre-decrement operator
Fraction& Fraction :: operator--(){
    numer = numer - denom;
    this -> normalize();
    return *this;
}

// Post increment operator
const Fraction Fraction :: operator++ (int){
    Fraction temp(numer, denom);
    ++(*this);
    return temp;
}

// Post decrement operator
const Fraction Fraction :: operator-- (int){
    Fraction temp(numer, denom);
    --(*this);
    return temp;
}

// Assignment Operator
Fraction& Fraction :: operator=(const Fraction& right){
    if(*this != right){
        numer = right.numer;
        denom = right.denom;
    }
    return *this;
}

// Compound Assignment
Fraction& Fraction::operator+= (const Fraction& right) {
    numer = numer * right.denom + denom * right.numer;
    denom = denom * right.denom;
    normalize();
    return* this;
}

Fraction& Fraction::operator-= (const Fraction& right) {
    numer = numer * right.denom - denom * right.numer;
    denom = denom * right.denom;
    normalize();
    return* this;
}

Fraction& Fraction::operator*= (const Fraction& right){
    numer = numer * right.numer;
    denom = denom * right.denom;
    normalize();
    return* this;
}

Fraction& Fraction::operator/= (const Fraction& right){
    numer = numer * right.denom;
    denom = denom * right.numer;
    normalize();
    return* this;
}

// Addition Operator (friend)
const Fraction operator+ (const Fraction& left, const Fraction& right){
    int newNumer = left.numer * right.denom + right.numer * left.denom;
    int newDenom = left.denom * right.denom;
    Fraction result(newNumer, newDenom);
    return result; 
}

// Subtraction Operator (friend)
const Fraction operator- (const Fraction& left, const Fraction& right){
    int newNumer = left.numer * right.denom - right.numer * left.denom;
    int newDenom = left.denom * right.denom;
    Fraction result(newNumer, newDenom);
    return result;
}

// Multiplication Operator (friend)
const Fraction operator* (const Fraction& left, const Fraction& right){
    int newNumer = left.numer * right.numer;
    int newDenom = left.denom * right.denom;
    Fraction result(newNumer, newDenom);
    return result;
}

// Division operator (friend)
const Fraction operator/ (const Fraction& left, const Fraction& right){
    int newNumer = left.numer * right.denom;
    int newDenom = left.denom * right.numer;
    Fraction result(newNumer, newDenom);
    return result;
}

// Equality Operator (friend)
bool operator == (const Fraction& left, const Fraction& right){
    return (left.numer * right.denom == right.numer * left.denom);
}

// Inequality Operator (friend)
bool operator != (const Fraction& left, const Fraction& right){
    return (left.numer * right.denom != right.numer * left.denom);
}

// Less than operator (friend)
bool operator < (const Fraction& left, const Fraction& right){
    return (left.numer * right.denom < right.numer * left.denom);
}

// Less than or equal to operator(friend)
bool operator <= (const Fraction& left, const Fraction& right){
    return (left.numer * right.denom <= right.numer * left.denom);
}

// Greater Than Operator (friend)
bool operator > (const Fraction& left, const Fraction& right){
    return (left.numer * right.denom > right.numer * left.denom);
}

// Greater Than or equal to operator(friend)
bool operator >= (const Fraction& left, const Fraction& right){
    return (left.numer * right.denom >= right.numer * left.denom);
}


// Extraction Operator (friend)
istream& operator >> (istream& left, Fraction& right){
    cout << "Enter the value of the numerator: ";
    left >> right.numer;
    cout << "Enter the value of the denominator: ";
    left >> right.denom;
    right.normalize();
    return left;
}

// Insertion Operator(friend)
ostream& operator << (ostream& left, const Fraction& right){
    left << right.numer << "/" << right.denom;
    return left;
}


// Helper Functions (Greatest Common Divisor)
int Fraction::gcd(int n, int m){
    int gcd = 1;
    for(int k = 1; k <= n && k <= m; k++){
        if(n % k == 0 && m % k == 0) {
            gcd = k;
        }
    }
    return gcd;
}

// Helper function (normalizing a function)
void Fraction::normalize(){
    if (denom == 0){
        cout << "Invalid denomination in fraction. Need to quit" << endl;
        assert(false);
    }
    if (denom < 0) {
        denom = -denom;
        numer = -numer; 
    }
    int divisor = gcd(abs(numer), abs(denom));
    numer = numer / divisor;
    denom = denom / divisor;
}
