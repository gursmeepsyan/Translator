/*
 * ElementAlreadyExistsInBSTException.cpp
 *
 * Class Description: Defines the exception that is thrown when
 *                    we are attempting to insert an element
 *                    which is already in the BST data collection ADT class.
 *
 * Author: Sehajvir Singh Pannu(301386534), Gursmeep Singh Syan(301386570)
 * Date: 28th November 2019
 */


#include "ElementAlreadyExistsInBSTException.h"

ElementAlreadyExistsInBSTException::ElementAlreadyExistsInBSTException(const string& message):
logic_error("ElementAlreadyExistsInBSTException: " + message)
{
}  // end constructor

// End of implementation file.
