/*
You know that representing numbers to any fixed number of decimal
places is imprecise, e.g. 1/3 will be represented as 0.33 etc.
which is smaller than the actual value.  One way to get around
this problem is to represent numbers as a ratio of integers.
Thus 1/3 will be represented using pair (1,3), and these numbers
will be interpreted as numerator and denominator of a fraction.
Such a representation is called a rational representation.
 Using the rational representation it is possible to perform
arithmetic without loss of precision.

For example, (a/b)+(c/d) = (ad+bc)/bd,

i.e. the sum will be represented by the two numbers ad+bc and bd.
Multiplication is easier, the product of the numbers (a,b), (c,d)
is just (ac,bd).  Blindly using these operations is a little
 problematic: the numbers may unnecessarily become too large.
So if we get (p,q) as the result of some operation,
 it is better to first compute r =  gcd(p,q) and then give the answer
 as (p/r, q/r).
*/




#include <iostream>
#include<stdio.h>
#include <cmath>
using namespace std;

int gcd(int m, int n){
  if(m % n == 0) return n;
  return gcd(n, m%n);
}
 class rational
 {
	 int numer;
	 int denom;
	 public:
      rational(){
      numer=0;
      denom=0;
  }
  rational(int a,int b){
    numer=a;
    denom=b;
  }
	 rational operator+(rational);
	 rational operator *(rational);
	  void print(){
    int r=gcd(numer,denom);
    cout<<numer/r<<"/"<<denom/r<<"\n";
  }
 };
  rational rational ::operator+(rational c1)
 {
	 rational temp;
    int m=gcd((numer*c1.denom)+(c1.numer*denom),denom*c1.denom);
	 temp.numer=((numer*c1.denom)+(c1.numer*denom))/m;
	 temp.denom=(denom*c1.denom)/m;
	 return temp;
 }
 rational rational ::operator *(rational c1)
 {
	 rational temp;
         int m=gcd(numer*c1.numer,denom*c1.denom);
	 temp.numer=(numer*c1.numer)/m;
	 temp.denom=(denom*c1.denom)/m;
	 return temp;
 }

int main(){
  int x,y;
  //printf("it is not working\n" );
  cout<<"x and y of A\n";
  cin >> x >> y;
  rational A(x,y);
  cout<<"x and y of B\n";
  cin >> x >> y;
  rational B(x,y);
  cout<<"x and y of C\n";
  cin >> x >> y;
  rational C(x,y);

  (A*B + C).print();  // precedence rules apply
}
