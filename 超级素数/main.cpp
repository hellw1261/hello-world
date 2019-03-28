#include "stucture.h" 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int a[1000],k[1000];
int main(int argc, char** argv) {
	primenumber l;
	l.isprime();
	l.issuperprime();
	l.print(l.count(),l.sum(),l.fin());
	return 0;
}
