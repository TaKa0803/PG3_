#include<stdio.h>
#include <iostream>
#include<chrono>


int main()
{

	std::string data(100000, 'a');
	std::cout << "コピーと移動の比較  : "<< std::endl;


	auto st = std::chrono::high_resolution_clock::now();

	std::string copy = data;

	auto end = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - st);
	long second = duration.count();

	std::cout << "コピー : " << second << std::endl;

	st = std::chrono::high_resolution_clock::now();

	std::string move = std::move(data);

	end = std::chrono::high_resolution_clock::now();
	duration = std::chrono::duration_cast<std::chrono::microseconds>(end - st);
	second = duration.count();
	
	std::cout << "移動 : " << second <<  std::endl;

	return 0;
}
