#include "b1.h"
int main() {
	fraction a;
	a.inputFraction();
	a.outputFraction1();
	a.outputFraction2();
	fraction b;
	b.inputFraction();
	b.outputFraction1();
	b.outputFraction2();
	fraction c;
	c = a.addition(b);
	c.outputFraction1();
	c.outputFraction2();
	c = a.subtraction(b);
	c.outputFraction1();
	c.outputFraction2();
	c = a.multiplication(b);
	c.outputFraction1();
	c.outputFraction2();
	c = a.division(b);
	c.outputFraction1();
	c.outputFraction2();
	return 0;
}