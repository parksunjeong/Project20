#include <stdio.h>

int main()
{
	int input1, input2, max, min;
	printf("�� ������ �Է��ϼ���: ");
	scanf_s("%d%d", &input1, &input2);
	max = (input1 > input2) ? input1 : input2;
	min = (input1 > input2) ? input2 : input1;

	printf("ū ���� �������� ���� ����     %d\n", max / min);
	printf("ū ���� �������� ���� �������� %d\n", max % min);

	return 0;
}