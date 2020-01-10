#include<stdio.h>

const int NUM = 5;

struct student
{
	int studentID;
	char name[10];
	float English;
	float Calculus;
	float C;
} 
stu[]={{ 1, "A", 87, 92.5, 45 }, { 2, "B", 78, 76.9, 76.4 }, { 3, "C", 87, 96.7, 58 }, { 4, "D", 67, 86.7, 78.7 }, { 5, "E", 66, 76.5, 76 }};

float average(float x, float y, float z)
{
	return(x + y + z) / 3.0;
}

int main()
{
	int i;
	float avg;
	printf("姓名平均成绩\n-------------\n");
	for (i = 0; i < NUM; ++i)
	{
		avg = average(stu[i].English, stu[i].Calculus, stu[i].C);
		printf("%s\t%2.f\n", stu[i].name, avg);
	}
	return 0;
}