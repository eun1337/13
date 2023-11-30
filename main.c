#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
	int ID; // 학번 
	char name[20]; // 이름 
	double grade; // 학점 
};

int main(void) 
{
	struct student s1 = {2314513, "Eun Seo", 4.3};
	
	s1.ID = 1234567;
	s1.name[0] = 'C';
	s1.grade = 4.2;
	
	printf("ID : %d\n", s1.ID);
	printf("name : %s\n", s1.name);
	printf("grade : %f\n", s1.grade);

	return 0;
}
