// hacked-references.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>;

using namespace std;

void normalTrans(int x, int y);
void hackedTrans(int& x, int& y);

int main() {
	int normalAmount = 250;
	int hackedAmount = 5000;

	cout << "The original balances in the accounts\n";
	normalTrans(normalAmount, hackedAmount);
	cout << "normalAmount: " << normalAmount << "\n";
	cout << "hackedAmount: " << hackedAmount << "\n\n";


	cout << "Hacking to switch the numbers\n";
	hackedTrans(normalAmount, hackedAmount);
	cout << "normalAmount: " << normalAmount << "\n";
	cout << "hackedAmount: " << hackedAmount << "\n";

	system("pause");
    return 0;
}

void normalTrans(int x, int y) {
	int temp = x;
	x = y;
	y = temp;
};

void hackedTrans(int& x, int& y) {
	int temp = x;
	x = y;
	y = temp;
}
