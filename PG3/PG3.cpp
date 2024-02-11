#include<stdio.h>
#include <iostream>
#include<chrono>

template<typename T,typename T2>

class Num {

public:

	T num1_;
	T2 num2_;

	Num(T num1, T2 num2) :num1_(num1), num2_(num2) {}

	T2 Min() {
		if (num1_ >= (T)num2_) {
			return (T2)num2_;
		}
		else {
			return (T)num1_;
		}
	}


};


int main()
{

	Num<int,int> b1(10, 20);
	Num<float,float>b2(1.2f, 1.4f);
	Num<double,double>b3(1.2, 1.4);

	Num<int, float>b4(3, 1.4f);
	Num<int, double>b5(5, 1.4);
	Num<double, float>b6(1.2, 1.4f);
	


	printf("小さい値 : %d\n", b1.Min());
	printf("小さい値 : %f\n", b2.Min());
	printf("小さい値 : %f\n", b3.Min());

	printf("小さい値 : %f\n", (float)b4.Min());
	printf("小さい値 : %f\n", (double)b5.Min());
	printf("小さい値 : %f\n", (double)b6.Min());

}
