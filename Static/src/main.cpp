#include <iostream>

int value = 5;

void Increment(int& value)
{
	value++;
}

//static 在 struct / class 内部定义: 相当于该 类/结构体 的 "全局变量",被所有的实例公用
struct Entity
{
	const char* name;
	static int x, y;


	void print()
	{
		std::cout << name<<"的坐标为:" << x << "," << y << std::endl;
	}
};

int Entity::x;
int Entity::y;




//在struct / class 外部的 static: 定义只在本翻译单元内可见
//在static.cpp中同样声明了value和Increment,但是有static限制,只在static.cpp所在的翻译单元内可见
int main()
{
	Increment(value);
	std::cout << value << std::endl;

	Entity e1;
	Entity e2;
	e1.name = "E1";
	e2.name = "E2";
	e1.x = 1;
	e1.y = 1;
	e2.x = 2;
	e2.y = 2;
	//以上的实际代码为 Entity::x =xxx;  作用域::参数
	

	e1.print();
	e2.print();
	std::cin.get();
}