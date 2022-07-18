#include <stdio.h>
int main(){
	int i;
	scanf("请输入一个整数%d\n",&i);
	for(int j=0;j<i;++j){
		printf("%d\n",j);
	}
	return 0;
}
