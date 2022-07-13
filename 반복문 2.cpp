#include <stdio.h>
main(){
	int i, n, sum=0; 
     
    printf("큰수 입력:");
    scanf("%d", &i);
    int large = i; 
    
	printf("작은수 입력: ");
	scanf("%d", &n); 
	while(i>=n){
		sum = sum+i; //sum += 1
		i--;
	} 
	printf("%d부터 %d까지 합은 %d입니다\n", large, n, sum);
}
