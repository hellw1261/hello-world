#include <iostream>
#include <string>
using namespace std;

int main(){
	int a[1000]={0};a[0]=1;
	int k[1000]={0},i=2,j=2;
	while(i<1000){
		if(a[i]) {
			i++;
			continue;	
		}
		if(!a[i]){//������ 
			j=2;
			while(j*i<1000) {
			a[j*i]=1,k[j*i]=1;	//k[i]�������
			j++; 
			}
		}
		i++;
	}
	//�ж��ǲ��ǳ�������
	i=101; 
	while(i<1000){
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
			if(a[sum]||a[product]||a[qs]) k[i]=1;
			i++;
		}
	}
		int count=0,tts=0,fin;
		for(i=101;i<1000;i++){
			if(!k[i]) {
				count++;
				tts=tts+i;
				fin=i;
				cout<<i<<endl;
			}
		}
		cout<<"��������������"<<count<<endl<<"���������ܺ�: "<<tts<<endl<<"��󳬼�������"<<fin<<endl; 
	return 0;
}
