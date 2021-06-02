/*
 * BSTNode.cpp
 *
 * Description: Models a node required to build a link-based binary search tree (BST).
 *
 * Author: Sehajvir Singh Pannu(301386534), Gursmeep Singh Syan(301386570)
 * Date: 28th November 2019
 */

#include "BSTNode.h"

// Constructor
template <class ElementType>
BSTNode<ElementType> :: BSTNode()
{
	 left = NULL;
	 right = NULL;
}
// Parameterized Constructors
template <class ElementType>
BSTNode<ElementType> :: BSTNode(ElementType element)
{
  	this->element = element;
  	left = NULL;
  	right = NULL;
}

template <class ElementType>
BSTNode<ElementType> :: BSTNode(ElementType element, BSTNode<ElementType>* leftSubTree, BSTNode<ElementType>* rightSubTree)
{
  	this->element = element;
  	this->left = leftSubTree;
  	this->right = rightSubTree;
}

// Helper functions
template <class ElementType>
bool BSTNode<ElementType> :: isLeaf() const
{
	 return (left == NULL && right == NULL);
}

template <class ElementType>
bool BSTNode<ElementType> :: hasLeft() const
{
	 return (left != NULL);
}

template <class ElementType>
bool BSTNode<ElementType> :: hasRight() const
{
	 return (right != NULL);
}
