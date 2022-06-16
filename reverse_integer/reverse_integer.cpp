#include <iostream>
#include <bits/stdc++.h>
#include <string>

/*Method 1: Iterative ->Count the digits in the number*/
unsigned int countDigitsM1(int num)
{
	int count = 0;

	while(num != 0)
	{
		num = num/10;
		count++;
	}

	return count;
}

// Recursive method
unsigned int countDigitsM2(int num)
{
	if(num/10 == 0)
		return 1;

	return 1 + countDigitsM2(num/10);
}

// Log method
unsigned int countDigitsM3(int num)
{
	return floor(log10(num) + 1);
}

//string method
unsigned int countDigitsM4(int num)
{
	std::string number = std::to_string(num);
	return number.size();
}


int reverseInteger(int num, unsigned int digitCount)
{
	int reverseNum = 0;
	int count = 0;
	while(num != 0)
	{
		reverseNum = reverseNum + (num%10)*pow(10, digitCount-1 - count);
		num = num/10;
		count++;
	}
	return reverseNum;
}

// r_num = r_num + (num%10) * pow(10, count);
// std::cout << r_num << std::endl;

int main()
{
	int num = 12345;
	// unsigned int d_count = countDigits(num);
	//std::cout <<reverseInteger(num, d_count) << std::endl;
	std::cout << "Iterative method=" <<countDigitsM1(num)<<std::endl;
	std::cout << "Recursive method=" <<countDigitsM2(num)<<std::endl;
	std::cout << "log method=" <<countDigitsM3(num)<<std::endl;
	std::cout << "string method=" <<countDigitsM4(num)<<std::endl;

	return 0;
}