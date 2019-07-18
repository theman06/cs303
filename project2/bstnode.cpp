#include "pch.h"
#include <cstring>
#include "BstNode.h"

BstNode::BstNode()
{
	BstNode(Char, String);
}

BstNode::BstNode(char c, char* s)
{
	strcpy(String, s);
	Char = c;
	pLeft = nullptr;
	pRight = nullptr;
}

BstNode::~BstNode()
{
	cout << "";
}

void BstNode::setChr(const char c)
{
	Char = c;
}

void BstNode::setStr(char *const s)
{
	strcpy(String, s);
}

void BstNode::setLeft(BstNode * const Left)
{
	pLeft = Left;
}

void BstNode::setRight(BstNode * const Right)
{
	pRight = Right;
}

char BstNode::getChr() const
{
	return this->Char;
}

string BstNode::getString() const
{
	return this->String;
}

BstNode *& BstNode::getLeft()
{
	return this->pLeft;
}

BstNode *& BstNode::getRight()
{
	return this->pRight;
}