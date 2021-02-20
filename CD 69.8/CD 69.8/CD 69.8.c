#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Person {
	char name[30];
	int age;
	void (*print)(struct Person*);
};

void print(struct Person* p)
{
	printf("%s %d\n", p->name, p->age);
}

void executer(void (*fp[])(struct Person*), struct Person p[], int count)
{
	for (int i = 0; i < count; i++)
	{
		fp[i](&p[i]); // 7. Person 구조체 내부의 print가 가리키는 함수인 void print가
		              //    struct Person*형 매개변수인 구조체 주소를 받아 함수를 실행
	}
}

void (*getPrintFunc(struct Person* p))(struct Person*) {
	return p->print;
}

int main()
{
	struct Person p[3]; // 1. 길이 3 구조체 배열 선언
	p[0].print = print;
	p[1].print = print; // 2. 구조체 내부의 struct Person*의 인자를 가지는 함수의 포인터에 print 함수의 주소값 저장
	p[2].print = print;

	scanf("%s %d %s %d %s %d",
		p[0].name, &p[0].age,
		p[1].name, &p[1].age, // 3. 구조체 배열의 요소에 값 저장
		p[2].name, &p[2].age
	);

	void (*fp[3])(struct Person*); // 4. struct Person*형의 인자를 가지는 함수의 포인터 배열 선언

	for (int i = 0; i < sizeof(p) / sizeof(struct Person); i++)
	{
		fp[i] = getPrintFunc(&p[i]); // 5. 함수의 포인터 배열(fp[i])에 struct Person의 주소값을 받아 struct Person*형의 구조체 내부의
		                             //    print 함수 포인터(line 7) 저장 즉, fp[i] -> p[i] -> print
	}

	executer(fp, p, sizeof(p) / sizeof(struct Person)); // 6. 함수의 포인터 배열, 구조체 배열을 매개변수로 받아 함수 실행

	return 0;
}