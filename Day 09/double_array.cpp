//double_array - 1
#include<stdio.h>

int main() {
	//2���� �迭_�迭 �ȿ� �迭
	/*int score[2][3] = { {1,2,3},{4,5,6} };
	
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf(" %d ", score[i][j]);
		}
	}*/




	//printf("%d", score[1][1]); //5



	//�ݿ� �л� 3�� ��,��,�� ����
	int sumK = 0, sumE = 0, sumM = 0;
	int stu_score[3][3] = { {75,85,85},{90,80,70},{60,100,90} };

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			sumK += stu_score[i][0];
			sumE += stu_score[i][1];
			sumM += stu_score[i][2];
		}
	}
	printf(" %.2lf ", (double)(sumE) / 3 );

	//printf("%.2lf", (double)(stu_score[0][1] + stu_score[1][1] + stu_score[2][1]) / 3);
	





	return 0;
}