#include<stdio.h>

// course ����ü ����� ���Ǹ�, �����̸�, ��������, �ð�
// �Լ� �������� �Ѹ� �ø���
// �Լ� ��������

typedef struct course {
	char c_name[30];
	char t_name[30];
	int student;
	double time;
}course;

void plusstu(course* x) {
	x->student += 1;
}

void show_c_info(course x) {
	printf("���Ǹ�. %s\n���� �̸�. %s\n������ ��. %d\n�ð�. %.2lf\n", x.c_name, x.t_name, x.student, x.time);
}

int main() {

	course cpp = { "cpp","����ȿt",3,11.5 };
	plusstu(&cpp);
	show_c_info(cpp);

	return 0;
}