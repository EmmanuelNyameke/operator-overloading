// The interface file for the polynomials class
#ifndef POLY_H
#define POLY_H
#include <iostream>
#include <string>
#include <cassert>
#include <iomanip>
using namespace std;

class Poly {
    private:
           int degree;
           double* ptr;
    public:
          Poly();
          Poly(int degree);
          Poly(int degree, double coef); // One-term polynomial
          Poly(const Poly& origin);
          ~Poly();
          Poly& operator=(const Poly& right);
          void fill();
          int max(int x, int y);
          friend const Poly operator+ (const Poly& left, const Poly&);
          friend const Poly operator- (const Poly& left, const Poly&);
          friend const Poly operator* (const Poly& left, const Poly&);
          friend const Poly operator/ (const Poly& left, const Poly&);
          friend const Poly operator% (const Poly& left, const Poly& right);
          friend ostream& operator << (ostream& left, const Poly& poly);
};
#endif
