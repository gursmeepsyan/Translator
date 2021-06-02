all: TransApp

TransApp: TransApp.o BST.h BSTNode.h WordCombination.o ElementAlreadyExistsInBSTException.o ElementDoesNotExistInBSTException.o
	g++ -Wall -std=c++11 -o translate TransApp.o WordCombination.o ElementAlreadyExistsInBSTException.o ElementDoesNotExistInBSTException.o

TransApp.o: TransApp.cpp
	g++ -Wall -std=c++11 -c TransApp.cpp 
		
WordCombination.o: WordCombination.h WordCombination.cpp
	g++ -Wall -std=c++11 -c WordCombination.cpp

ElementDoesNotExistInBSTException.o: ElementDoesNotExistInBSTException.h ElementDoesNotExistInBSTException.cpp
	g++ -Wall -std=c++11 -c ElementDoesNotExistInBSTException.cpp

ElementAlreadyExistsInBSTException.o: ElementAlreadyExistsInBSTException.h ElementAlreadyExistsInBSTException.cpp
	g++ -Wall -std=c++11 -c ElementAlreadyExistsInBSTException.cpp
		
clean:
	rm -f TransApp *.o
