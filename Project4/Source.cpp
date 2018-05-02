#include "String.h"

int main() {
	String s("Hello  ");
	String s1(5,'a');
	String s2(10,'j');
	s2.getAt(4) = 'z';
	s1.AddCharAt(5, '!');
	s.DelCharAt(0);
	s1("this");

	cout << s.getStrRep() << endl;

	system("pause");
	return 0;
}