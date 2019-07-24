#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
#include "BstNode.h"

using namespace std;

class Bst {
public:
	Bst();
	~Bst();
	void setHead(BstNode *const newHead);
	BstNode *getHead() const;

	void insert(const char newC, char *const newStr);
	void print();
	string search(char c);
private:
	void destroyBst(BstNode *TreeHead);
	BstNode *makeNode(const char newC, char *const newStr);
	void insert(BstNode *& newNode, const char C, char *const Str);
	void print(BstNode *Tree); // uses inordertraversal
	string search(BstNode *Tree, char c);

	BstNode *pHead;
	fstream MorseTable;
};