#include <iostream>

int mult_by_powers(int number, int power) {
	return number<<power;
}

int main() {


	int myPower = 5 << 1;	//5 * 2 = 10

	std::cout << myPower;

	//& is used to mask bits, used to turn bits OFF
	int x = 193;					//1100 0001	= 193
	int y = x & 0xf0;				//1111 0000 = 0xf0, 240, is used as a mask
	std::cout << "\n\n" << y;		//1100 0000 will come through as 192
	
	// | - Inclusive OR, used to turn bits ON
	int x2 = 193;					//1100 0001	= 193
	int y2 = x2 | 0xf0;				//1111 0000 = 0xf0 or 240
	std::cout << "\n\n" << y2;		//1111 0001 will come through as 241

	// ^ - Exclusive OR (XOR), one or the other but not both.
	int x3 = 193;					//1100 0001	= 193
	int y3 = x3 ^ 0xf0;				//1111 0000 = 0xf0 or 240
	std::cout << "\n\n" << y3;		//0011 0001 will come through as 49

	// << - LEFT shift, multiplication without the * operand
	int x4 = 193;					//1100 0001	= 193
	int y4 = x4 << 2;				//shift 2 bits to the left = 193 * 4
	std::cout << "\n\n" << y4;		//0000 0100 = 772

	// >> - RIGHT shift, division without the / operand
	int x5 = 20;					//0001 0100	= 20
	int y5 = x5 >> 2;				//shift 2 bits to the left = 20 / 4
	std::cout << "\n\n" << y5;		//0000 0101 = 5

	// ~ - Bitwise NOT, all bits in x are flipped
	int x6 = 20;					//0001 0100	= 20
	int y6 = ~x6;					//flip
	std::cout << "\n\n" << y6;		//0000 0101 = -21

	getchar();

}