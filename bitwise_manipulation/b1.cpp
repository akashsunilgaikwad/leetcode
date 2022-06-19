#include <iostream>
#include <bitset>
#include <cmath>

#define BIT_SET(a,b) ((a) |= (1 << (b))) 	// This will set the bth bit starting from 0th bit
#define BIT_CLEAR(a,b) ((a) &= ~(1 << (b)))	// Clear bit
#define BIT_FLIP(a,b) ((a) ^= (1 << (b)))
#define BIT_CHECK(a,b) (((a) >> (b)) & 1)


int countSetDigits(int num)
{
	int count = 0;

	while(num)
	{
		if(num & 1)
		{
			count++;
		}
		num = num >> 1;
	}
	return count;
}



int complimentOfNum(int num)
{
	int mask = ~num;
	int tmp = 1;

	for(int i = 0; i < log2(num)-1; i++)
	{
		tmp = tmp | (tmp << 1);
		std::cout << "debug="<< std::bitset<8>(tmp) << std::endl; 
	}

	return mask & tmp;
}



int main()
{
	std::cout << countSetDigits(15) << std::endl;

	int num = 16;

	/*
	std::cout << "number	="<< std::bitset<8>(num) << std::endl; 
	std::cout << "setBit	="<< std::bitset<8>(setBit(num, 2)) << std::endl; 
	std::cout << "clearBit="  << std::bitset<8>(clearBit(num, 1)) << std::endl; 
	std::cout << "CheckBit="  << checkBit(num, 4) << std::endl; 
	std::cout << "Count Binary Bits using logs="  << log2(num) + 1 << std::endl; 
	std::cout << "Compliment of Integer="  << std::bitset<8>(complimentOfNum(num)) << std::endl; 
	*/

	std::cout << "Check  3rd bit of 100 = " << BIT_CHECK(8 ,3) << std::endl;

	int tmp = BIT_FLIP(15, 4);

	std::cout << "Toggle 4th bit of 15 = " << std::bitset<8>(tmp) << std::endl;


	return 0;
}
