// project2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "pch.h";
#include "Bst.h";
#include <iostream>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;
using std::fstream;

int main() {

	char c = '\0';
	char b;
	fstream Convert;
	Convert.open("morse.txt");
	Bst Tree;
	Tree.print();
	cout << endl << endl;
	
	while (!Convert.eof()) {
		
		Convert >> c;
		Tree.search(c);
		
		
		

	}
	
	

	cout << endl;

	if (Convert.is_open()) {
		Convert.close();
	}
}