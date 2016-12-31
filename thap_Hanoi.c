#include<stdio.h>

int thapHaNoi(int n, char cot_bdau, char cot_tr_gian, char cot_den)
{
	
	if (n == 1)
	{
		printf("chuyen tu %c qua %c \n", cot_bdau, cot_den);	
		return 1;
	}
	else
	
	return thapHaNoi(n - 1, cot_bdau, cot_den, cot_tr_gian) + thapHaNoi(1, cot_bdau, cot_tr_gian, cot_den) +
			 thapHaNoi(n - 1, cot_tr_gian, cot_bdau, cot_den);
} 

int main()
{
	int n = 0, kq = 0;
	printf("Nhap vao so n: ");
	scanf("%d", &n);
	kq = thapHaNoi(n, 'A', 'B', 'C');
	printf("So lan chuyen %d \n", kq);
	return 0;
}
