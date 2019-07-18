#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
#include "BstNode.h"

using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::ios;
using std::string;

class BstNode {

public:
	BstNode();
	BstNode(char c, char *s);
	~BstNode();

	void setChr(const char c);
	void setStr(char *const s);
	void setLeft(BstNode * const pLeft);
	void setRight(BstNode *const pRight);

	char getChr() const;
	string getString() const;
	BstNode *&getLeft();
	BstNode *&getRight();


private:

	char Char;
	char String[100];
	BstNode *pLeft;
	BstNode *pRight;

};