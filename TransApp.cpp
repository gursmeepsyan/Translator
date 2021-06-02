/*
 * TransApp.cpp
 *
 * Description: Translation Application
 *
 * Author: Sehajvir Singh Pannu (301386534), Gursmeep Singh Syan(301386570).
 * Date: 28th November 2019
 */


#include <iostream>
#include <string>
#include <cstring>
#include <sstream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <string>
#include <stdio.h>


#include "BST.h"
#include "WordCombination.h"
#include "ElementAlreadyExistsInBSTException.h"
#include "ElementDoesNotExistInBSTException.h"

// For Bonus Purposes
void display(WordCombination& anElement)
{
  cout << anElement.getEnglishWord() << ":" << anElement.getTranslation() << endl;
} // end of display

// Using Command line input with help of argc and argc
int main(int argc, char *argv[]) {

  BST<WordCombination>* theTranslator = new BST<WordCombination>();

  string Line = "";
  string Word = "";
  string englishWord = "";
  string translationWord = "";
  string filename = "dataFile.txt";
  string semicolon = ":";
  size_t Wordposition = 0;
  WordCombination translatedWord;


  ifstream TextFile (filename);
  if (TextFile.is_open()) {

    while ( getline (TextFile, Line) )
    {
      // trying to find the semicolon to differentiate the english word from its translation using functions of string
       Wordposition = Line.find(semicolon);
       englishWord = Line.substr(0, Wordposition);
       size_t transLength = Line.length()-Wordposition-1; // to calculate the span of characters after the semicolon
       translationWord = Line.substr(Wordposition+1,transLength);

      // Create WordCombination of englishWord and translationWord
       WordCombination WordCombination(englishWord, translationWord);
       try {
  	   		theTranslator->insert(WordCombination);
  	   }
  	   catch (ElementAlreadyExistsInBSTException& anException) {
  	       cout << anException.what( ) << " => " <<  WordCombination.getEnglishWord() << ":" << WordCombination.getTranslation() << endl;
  	   }
    }
    TextFile.close();
    //  If the user input is display

    if ( ( argc > 1 ) && ( strcmp(argv[1], "display") == 0) ) {
        theTranslator->traverseInOrder(display);
    }
    // Else find the translation of a Word i.e. user hasnt typed display
    else if (argc == 1)
    {
       while ( getline(cin, Word) ) // This read the word needed to translate and will automatically deliminate when new line is found i.e. enter is pressed.
        {
          WordCombination WordCombo(Word);
          try {
              translatedWord = theTranslator->retrieve(WordCombo);
              cout << translatedWord.getEnglishWord() << ":" << translatedWord.getTranslation() << endl;
          }
          catch (ElementDoesNotExistInBSTException& anException) {
              cout << "Translation for '" << WordCombo.getEnglishWord() << "' not found!" << endl;
          }
       }
    }
  }
  else
    cout << "Unable to open file";

  return 0;
}
