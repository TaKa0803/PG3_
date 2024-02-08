#include <iostream>
#include<thread>
#include<queue>
#include<condition_variable>
#include<mutex>


void Thread(int num) {
	printf("thread %d \n", num);
}

int main()
{

	std::mutex mutex;

	std::condition_variable condition;

	std::queue<int>q;




	return 0;
}
