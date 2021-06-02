/*
 * ElementAlreadyExistsInBSTException.h
 *
 * Class Description: Defines the exception that is thrown when
 *                    we are attempting to insert an element
 *                    which is already in the BST data collection ADT class.
 *
 *Author: Sehajvir Singh Pannu(301386534), Gursmeep Singh Syan(301386570)
 * Date: 28th November 2019
 */

#pragma once

#include <stdexcept>
#include <string>

using namespace std;

class ElementAlreadyExistsInBSTException : public logic_error
{
public:
   ElementAlreadyExistsInBSTException(const string& message = "");

}; // end ElementAlreadyExistsInBSTException
