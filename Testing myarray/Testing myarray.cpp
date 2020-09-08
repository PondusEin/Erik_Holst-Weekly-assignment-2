#include <iostream>
#include <stdlib.h>

int main()
{

	std::cout << "1. Write a program that writes from 1 to 100\n" << std::endl;
	std::cout << "1.1. Use a while-loop:\n" << std::endl;
	int count{ 1 };
	while (count < 101) {
		std::cout << count << ' ';
		++count;
	}
	std::cout << "done! This was while-loop!\n\n\n"<<std::endl;

	std::cout << "1.2. Use a for-loop:\n" << std::endl;

	for (int count{ 1 }; count < 101; ++count)
		std::cout << count << ' ';
	std::cout << "done! This was for-loop!\n\n\n" << std::endl;

	
}
/*
void(task2)
{
	for (int count{ 100 }; count < 0; --count)
		std::cout << count << ' ';
	std::cout << "done! This was for-loop!\n\n\n";
	
	return 0;
}*/
