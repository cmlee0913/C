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
		fp[i](&p[i]); // 7. Person ����ü ������ print�� ����Ű�� �Լ��� void print��
		              //    struct Person*�� �Ű������� ����ü �ּҸ� �޾� �Լ��� ����
	}
}

void (*getPrintFunc(struct Person* p))(struct Person*) {
	return p->print;
}

int main()
{
	struct Person p[3]; // 1. ���� 3 ����ü �迭 ����
	p[0].print = print;
	p[1].print = print; // 2. ����ü ������ struct Person*�� ���ڸ� ������ �Լ��� �����Ϳ� print �Լ��� �ּҰ� ����
	p[2].print = print;

	scanf("%s %d %s %d %s %d",
		p[0].name, &p[0].age,
		p[1].name, &p[1].age, // 3. ����ü �迭�� ��ҿ� �� ����
		p[2].name, &p[2].age
	);

	void (*fp[3])(struct Person*); // 4. struct Person*���� ���ڸ� ������ �Լ��� ������ �迭 ����

	for (int i = 0; i < sizeof(p) / sizeof(struct Person); i++)
	{
		fp[i] = getPrintFunc(&p[i]); // 5. �Լ��� ������ �迭(fp[i])�� struct Person�� �ּҰ��� �޾� struct Person*���� ����ü ������
		                             //    print �Լ� ������(line 7) ���� ��, fp[i] -> p[i] -> print
	}

	executer(fp, p, sizeof(p) / sizeof(struct Person)); // 6. �Լ��� ������ �迭, ����ü �迭�� �Ű������� �޾� �Լ� ����

	return 0;
}