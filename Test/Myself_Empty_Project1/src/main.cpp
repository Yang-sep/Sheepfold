#include <iostream>
int main()
{
	int a = 1234;
	int* ptr = &a;
	//不能对空类型的指针使用 * ,指针所占的的内存大小是固定的,不因类型变化而变化,指针只是存储内存地址的数字
	char* buffer = new char[8];
	//双重指针(指向一个指针的内存地址的的指针)
	char** dubptr = &buffer;
	//memset 将缓冲区设置为指定的字符 
	memset(buffer, 5, 8);
	memset(buffer, 2, 4);
	std::cin.get();
}