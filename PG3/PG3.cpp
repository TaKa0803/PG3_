#include <iostream>
#include<thread>


void Thread(int num) {
	printf("thread %d \n", num);
}

int main()
{

	std::thread thread1(Thread, 1);
	thread1.join();
	std::thread thread2(Thread, 2);
	thread2.join();
	std::thread thread3(Thread, 3);
	thread3.join();



	return 0;
}
