// C++ Tutorial - Diving into Containers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <string>

int main()
{
	// allocate memory for the array
	int* integerArray = new int[5];
	integerArray[0] = 100;
	integerArray[1] = 101;
	integerArray[2] = integerArray[3] = integerArray[4] = 0;

	for (int index = 0; index < 5; ++index)
	{
		std::cout << integerArray[index] << " ";
	}
	std::cout << std::endl;

	// free the memory for the array
	delete[] integerArray;

	// vector demonstration
	std::vector<int> integerVector;
	integerVector.reserve(2);
	integerVector.push_back(200);
	integerVector.push_back(201);
	integerVector.insert(integerVector.begin() + 1, 10);

	for (int value : integerVector)
		std::cout << value << " ";
	std::cout << std::endl;

	// list demonstration
	std::list<int> integerList;
	integerList.push_front(4);
	integerList.push_front(3);
	integerList.push_front(2);
	integerList.insert(++integerList.begin(), 10);
	integerList.erase(integerList.begin());
	
	for (int value : integerList)
		std::cout << value << " ";
	std::cout << std::endl;

	// map demonstration
	std::map<std::string, int> priceList;
	priceList["Apple"] = 3;
	priceList["Orange"] = 2;
	priceList.insert(std::pair<std::string, int>("Pear", 4));

	for (auto priceEntry : priceList)
	{
		std::cout << priceEntry.first << " = " << priceEntry.second << std::endl;
	}

	std::cout << "Enter a fruit: ";
	std::string selectedFruit;
	std::cin >> selectedFruit;

	// attempt to find the fruit in the price list
	auto searchIter = priceList.find(selectedFruit);
	if (searchIter != priceList.end())
		std::cout << selectedFruit << " costs " << searchIter->second << std::endl;
	else
		std::cout << "No price for " << selectedFruit << std::endl;

	std::cout << priceList["Apple"];
}
