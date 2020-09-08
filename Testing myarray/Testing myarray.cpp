#include <iostream>
#include <stdlib.h>

int main()
{

	std::cout << "1. Write a program that writes from 1 to 100\n" << std::endl;
	std::cout << "1.1. Use a while-loop:\n" << std::endl;
	int count{ 1 };
	while (count < 101) {
		std::cout << count << ' ';
		count++;
	}
	std::cout << "done! This was while-loop!\n\n\n"<<std::endl;

	std::cout << "1.2. Use a for-loop:\n" << std::endl;

	for (int count1{ 1 }; count1 < 101; count1++){
		std::cout << count1 << ' ';
	
	}
	std::cout << "done! This was for-loop!\n\n\n" << std::endl;



	std::cout << "2. Write a program that writes number from 100 down to 1 to screen. Use for-loop\n"<< std::endl;


	for (int count2{ 100 }; count2 > 0; count2--)
	{
		std::cout << count2 << '\n';
	
	}
	std::cout << "Done! This was for-loop!\n\n\n";
	
	return 0;
}
