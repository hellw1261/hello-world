#ifndef class_h
#define class_h

#include <iostream>
using namespace std;
class primenumber{
	private:
		int min,max;
	public:
		primenumber();
		void print(int count,int sum,int max);
		void print_1();//测试，全部罗列出来
		void isprime();
		void issuperprime();
		int count();
		int sum();
		int fin();
		~primenumber();
};


#endif
