#include <iostream>

int value = 5;

void Increment(int& value)
{
	value++;
}

//static �� struct / class �ڲ�����: �൱�ڸ� ��/�ṹ�� �� "ȫ�ֱ���",�����е�ʵ������
struct Entity
{
	const char* name;
	static int x, y;


	void print()
	{
		std::cout << name<<"������Ϊ:" << x << "," << y << std::endl;
	}
};

int Entity::x;
int Entity::y;




//��struct / class �ⲿ�� static: ����ֻ�ڱ����뵥Ԫ�ڿɼ�
//��static.cpp��ͬ��������value��Increment,������static����,ֻ��static.cpp���ڵķ��뵥Ԫ�ڿɼ�
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
	//���ϵ�ʵ�ʴ���Ϊ Entity::x =xxx;  ������::����
	

	e1.print();
	e2.print();
	std::cin.get();
}