#include <iostream>
int main()
{
	int a = 1234;
	int* ptr = &a;
	//���ܶԿ����͵�ָ��ʹ�� * ,ָ����ռ�ĵ��ڴ��С�ǹ̶���,�������ͱ仯���仯,ָ��ֻ�Ǵ洢�ڴ��ַ������
	char* buffer = new char[8];
	//˫��ָ��(ָ��һ��ָ����ڴ��ַ�ĵ�ָ��)
	char** dubptr = &buffer;
	//memset ������������Ϊָ�����ַ� 
	memset(buffer, 5, 8);
	memset(buffer, 2, 4);
	std::cin.get();
}