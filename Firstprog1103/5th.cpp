#include <stdio.h>

int main()
{
	int arr[5];
	int i, ave = 0;
	for (i = 0; i < 4; i++) {
		printf("%d 번째 학생의 : ", i + 1);
		scanf_s("%d", &arr[i]);
		ave += arr[i];
	}
	/*int b[5] = {0,};

	int i = 0;
	for (int i = 0; i <= 4; i++) {
		b[i] = i + 1;
	}
	i =0;
	while (i <= 4) {
		printf("b[%d] is %d, %x\n",  i, b[i], &b[i]);
		i++;
	}*/
	return	0;
}