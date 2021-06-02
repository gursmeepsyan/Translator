/*
 * WordCombination.h
 *
 * Description: Translates an English word into another language.
 *
 * Author: Sehajvir Singh Pannu(301386534), Gursmeep Singh Syan(301386570)
 * Date: 28th November 2019
 */


#include <string>
using namespace std;

class WordCombination {

private:
	string englishWord;
	string translation;

public:
	// Constructors
	WordCombination() ;
	WordCombination(string anEnglishWord) ;
	WordCombination(string anEnglishWord, string translation) ;

	// Getters and Setters
	string getEnglishWord() const ;
	string getTranslation() const ;
	void setEnglishWord(string english) ;
	void setTranslation(string translation) ;

	// Overloaded Operators
	bool operator==(const WordCombination& rhs) const;
	bool operator<(const WordCombination& rhs) const;

}; // end of WordPair.h
