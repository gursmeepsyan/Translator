/*
 * BSTNode.h
 *
 * Description: Models a node required to build a link-based binary search tree (BST).
 *
 * Author: Sehajvir Singh Pannu(301386534), Gursmeep Singh Syan(301386570)
 * Date: 28th November, 2019
 */

#pragma once
#include <iostream>
using namespace std;
template <class ElementType>
class BSTNode {

public:

	ElementType element;
	BSTNode<ElementType>* left;
	BSTNode<ElementType>* right;

	//Default Constructor
  BSTNode() ;

	//Parameterized Constructors
  BSTNode(ElementType element) ;
  BSTNode(ElementType element, BSTNode<ElementType>* leftSubTree, BSTNode<ElementType>* rightSubTree) ;

	// Helper functions
	bool isLeaf() const;
	bool hasLeft() const;
	bool hasRight() const;

};

#include "BSTNode.cpp"
