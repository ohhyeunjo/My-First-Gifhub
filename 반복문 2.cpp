#include <stdio.h>
main(){
	int i, n, sum=0; 
     
    printf("ū�� �Է�:");
    scanf("%d", &i);
    int large = i; 
    
	printf("������ �Է�: ");
	scanf("%d", &n); 
	while(i>=n){
		sum = sum+i; //sum += 1
		i--;
	} 
	printf("%d���� %d���� ���� %d�Դϴ�\n", large, n, sum);
}
