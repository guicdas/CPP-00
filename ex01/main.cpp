#include "Contact.hpp"
#include "Phonebook.hpp"

int main(void){
	Phonebook Book;
	int i = 1;
	std::string str;

	while(i > 0){
		if (i == 1)
			Book.Menu();
		i = 1;
		std::getline(std::cin, str);
		for(int j = 0; str[j]; j++)
			str[j] = (char) toupper(str[j]);
		
		if (str == "ADD")
			Book.Add();
		else if (str == "SEARCH")
			Book.Search();
		else if (str == "EXIT")
			i = 0;
		else
		{
			std::cout << "Select option:\t";
			i = 2;
		}
	}
	return(0);
}