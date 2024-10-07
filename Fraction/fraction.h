// Interface file for the fraction class
#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>
#include <cassert>
#include <iomanip>
#include <cmath>
using namespace std;
// Fraction Class Definition
class Fraction {
    private:
           int numer, denom;
           // Helper Functions
           int gcd(int n, int m = 1);
           void normalize();
    public:
          // Parameter Constructor
          Fraction(int numer, int denom);
          Fraction(double value);
          // Default Constructor
          Fraction();
          // Copy Constructor
          Fraction(const Fraction& fract);
          // Destructor
          ~Fraction();
          // Member Operators
          operator double(); // Conversion
          const Fraction operator+() const; // Unary plus
          const Fraction operator-() const; // Unary minus
          Fraction& operator++(); // Prefix Increment
          Fraction& operator--(); // Prefix Decrement
          const Fraction operator++ (int); // Postfix increment
          const Fraction operator-- (int); // Postfix decrement
          Fraction& operator = (const Fraction& right); // Assign
          // Compound Assignment
          Fraction& operator += (const Fraction& right);
          Fraction& operator -= (const Fraction& right);
          Fraction& operator *= (const Fraction& right);
          Fraction& operator /= (const Fraction& right);
          // Friend Arithmetic Operators
          friend const Fraction operator+ (const Fraction& left, const Fraction& right); // Addition
          friend const Fraction operator- (const Fraction& left, const Fraction& right); // Subtraction
          friend const Fraction operator* (const Fraction& left, const Fraction& right); // Multiplication
          friend const Fraction operator/ (const Fraction& left, const Fraction& right); // Division
          // Friend Relational Operators
          friend bool operator== (const Fraction& left, const Fraction& right);
          friend bool operator!= (const Fraction& left, const Fraction& right);
          friend bool operator< (const Fraction& left, const Fraction& right);
          friend bool operator<= (const Fraction& left, const Fraction& right);
          friend bool operator> (const Fraction& left, const Fraction& right);
          friend bool operator>= (const Fraction& left, const Fraction& right);
          // Insertion and Extraction Operators
          friend istream& operator >> (istream& left, Fraction& right);
          friend ostream& operator << (ostream& left, const Fraction& right);
};
#endif