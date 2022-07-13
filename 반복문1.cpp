#include <stdio.h>

main(){
	//30부터 10까지의 짝수 
	int num=30;
	while(num>=10){
        printf("%d", num);
        num-=2;
	}
	
	//1부터 10까지(i)의 합(sum)
	printf("\n1부터 10까지(i)의 합(sum)구하기");
	int i=1;
	int sum=0;
	while(i<=10){
		sum = sum + i;
		i++;
	} 
	printf("\n1부터 10까지의 합 : %d", sum);
}
