#include <iostream>

class Player
{
public:
	int x, y;
	int moveSpeed;

	void move(int xa, int ya)
	{
		x += xa * moveSpeed;
		y += ya * moveSpeed;
	}
};

int main()
{
	Player player1;
	player1.x = 88;
	player1.y = 88;
	player1.moveSpeed = 5;

	player1.move(1, 1);


	// 在C++中 struct 和    class 的唯一区别是,class默认访问为私有, struct默认访问为公开
}