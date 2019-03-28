#include "class.h"

primenumber::primenumber(){
	min=100;
	max=999;
}

primenumber::~primenumber(){}

extern int a[1000],k[1000];
void primenumber::isprime(){
	int i=2;
	while(i<=max){
		if(a[i]) {
			i++;
			continue;	
		}
		if(!a[i]){//是素数 
			int j=2;
			while(j*i<1000) {
			a[j*i]=1,k[j*i]=1;	//k[i]是最后结果
			j++; 
			}
		}
		i++;
	}
}

void primenumber::issuperprime(){
	a[0]=1;
	int i=min;
	while(i<=max){
		if(a[i]) {
			i++;
			continue;
		}
		else{
			int g=i%10;
			int s=i/10%10;
			int b=i/100%10;
			int sum=g+s+b;
			int product=g*s*b;
			int qs=g*g+s*s+b*b;
			if(a[sum]||a[product]||a[qs]) {
				k[i]=1;
			}
			i++;
		}
	}
}

int primenumber::count(){
	int i,count=0;
	for(i=min;i<=max;i++) if(!k[i]) count++;
	return count;	
}

int primenumber::fin(){
	int i,fin;
	for(i=min;i<=max;i++) 
	{
		if(!k[i]) fin=i;
	}
	return fin;
}

int primenumber::sum(){
	int i,sum=0;
	for(i=min;i<=max;i++) if(!k[i]) sum=sum+i;
	return sum;
}

void primenumber::print_1(){
	for(int i=100;i<=999;i++){
		if(!k[i]) cout<<i<<endl; 
	}
}
void primenumber::print(int count,int sum,int fin){
	cout<<"一共有"<<count<<"个超级素数"<<endl
	<<"超级素数的和为："<<sum<<endl
	<<"最大的超级素数为："<<fin<<endl;
}
