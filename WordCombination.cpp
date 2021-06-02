/*
 * WordCombination.cpp
 *
 * Description: Translates an English word into another language.
 *
 * Author: Sehajvir Singh Pannu(301386534), Gursmeep Singh Syan(301386570)
 * Date: 28th November 2019
 */

#include "WordCombination.h"

// Constructors
WordCombination::WordCombination()
{
	englishWord = "";
	translation = "";
}

WordCombination::WordCombination(string anEnglishWord)
{
	this->englishWord = anEnglishWord;
	this->translation = "";
}

WordCombination::WordCombination(string anEnglishWord, string translation)
{
	this->englishWord = anEnglishWord;
	this->translation = translation;
}

// Getters
string WordCombination::getEnglishWord() const
{
	return this->englishWord;
}

string WordCombination::getTranslation() const
{
	return this->translation;
}

// Setters
void WordCombination::setEnglishWord(string english)
{
	this->englishWord = english;
}

void WordCombination::setTranslation(string translation)
{
	this->translation = translation;
}

// Overloaded Operators
bool WordCombination::operator==(const WordCombination& rhs) const
{

	return (this->englishWord.compare(rhs.getEnglishWord()) ) == 0;
} // end of operator==

bool WordCombination::operator<(const WordCombination& rhs) const
{

	return (this->englishWord.compare(rhs.getEnglishWord()) ) < 0;
} // end of operator<
