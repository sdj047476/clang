#include<stdio.h>

// course 구조체 만들고 강의명, 강사이름, 수강생수, 시간
// 함수 수강생수 한명 올리는
// 함수 수강정보

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
	printf("강의명. %s\n강사 이름. %s\n수강생 수. %d\n시간. %.2lf\n", x.c_name, x.t_name, x.student, x.time);
}

int main() {

	course cpp = { "cpp","전수효t",3,11.5 };
	plusstu(&cpp);
	show_c_info(cpp);

	return 0;
}