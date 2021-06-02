/*
 * ElementDoesNotExistInBSTException.cpp
 *
 * Class Description: Defines the exception that is thrown when
 *                    we are searching for an element
 *                    which is not in the BST data collection ADT class.
 *
 *Author: Sehajvir Singh Pannu(301386534), Gursmeep Singh Syan(301386570)
 * Date: 28th November 2019
 */


#include "ElementDoesNotExistInBSTException.h"

ElementDoesNotExistInBSTException::ElementDoesNotExistInBSTException(const string& message):
logic_error("ElementDoesNotExistInBSTException: " + message)
{
}  // end constructor

// End of implementation file.
