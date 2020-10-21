#include <iostream>

int main(void)
{
	int num = 20;
	// std::cout<<'출력대상1'<<'출력대상2<<..;
	// std::endl 이후에 줄 바꿈이 일어난다.
	std::cout << "Hello World!" << std::endl;
	std::cout << "Hello " << "World!" << std::endl;
	std::cout << num << ' ' << 'A';
	std::cout << ' ' << 3.14 << std::endl;
	return 0;
}