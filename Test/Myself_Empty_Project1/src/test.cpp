#include <iostream>


void Increment(int value) {
	value++;
};
//引用相当于美化版的指针 int& value == int*value
void IncrementPlus(int& value) {
	value++;
}