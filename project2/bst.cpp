#include "pch.h"
#include "Bst.h"

Bst::Bst()
{

	char C = '\0';
	char S[100] = " ";
	pHead = nullptr;
	MorseTable.open("Morse.txt");
	while (!MorseTable.eof()) {
		MorseTable >> C;
		MorseTable.getline(S, 100);
		insert(C, S);

	}

}

Bst::~Bst()
{
	if (MorseTable.is_open())
	{

		MorseTable.close();
	}
	destroyBst(pHead);
	

}

void Bst::setHead(BstNode * const newHead)
{
	pHead = newHead;
}

BstNode * Bst::getHead() const
{
	return pHead;
}

void Bst::insert(const char newC, char *const newStr)
{
	insert(pHead, newC, newStr);
}

void Bst::print()
{
	print(pHead);
}

string Bst::search(char c)
{
	string Str;
	Str = search(pHead, c);
	return Str;

}

void Bst::destroyBst(BstNode * TreeHead)
{
	if (TreeHead != nullptr) {
		destroyBst(TreeHead->getLeft());
		destroyBst(TreeHead->getRight());
		delete(TreeHead);
	}

}

BstNode * Bst::makeNode(const char newC, char *const newStr)
{
	BstNode *node = new BstNode(newC, newStr);
	return node;
}

void Bst::insert(BstNode *& newNode, const char C, char * const Str)
{
	if (newNode == nullptr) {
		BstNode *pMem = new BstNode(C, Str);
		newNode = pMem;
	}

	else {
		if ((C < newNode->getChr())) {
			insert((newNode)->getLeft(), C, Str);
		}
		else if (C > newNode->getChr()) {
			insert((newNode)->getRight(), C, Str);

		}

	}
}

void Bst::print(BstNode *Tree)
{
	if (Tree != nullptr) {
		//go left
		print(Tree->getLeft());
		// read node
		cout << "Character: " << Tree->getChr() << " Code: " << Tree->getString() << endl;
		// go right
		print(Tree->getRight());
	}
}

string Bst::search(BstNode * Tree, char c)
{
	string Str;
	if (Tree != nullptr) {
		search(Tree->getLeft(), c);
		search(Tree->getRight(), c);
		if (Tree->getChr() == c) {
			Str = Tree->getString();
			cout << Tree->getString();
		}
	}

	return Str;

}