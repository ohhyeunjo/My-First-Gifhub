#include <stdio.h>

main(){
	//30���� 10������ ¦�� 
	int num=30;
	while(num>=10){
        printf("%d", num);
        num-=2;
	}
	
	//1���� 10����(i)�� ��(sum)
	printf("\n1���� 10����(i)�� ��(sum)���ϱ�");
	int i=1;
	int sum=0;
	while(i<=10){
		sum = sum + i;
		i++;
	} 
	printf("\n1���� 10������ �� : %d", sum);
}
