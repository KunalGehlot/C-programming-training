/*
 * WAP to print nested structure
 */

#include <stdio.h>

struct person {
	char name[20];
	int age;
	char add[100];
};

struct Student {
	struct person p;
	int roll;
	float score;
	int class;
};

int main() {

	struct Student s1 = { "Zack", 21, "New hampshire", 3569, 89.9, 12 }, s2 = {
			"Bucky", 35, "Boston, New York", 1586, 95.68, 16 };

	printf("Name: %s  Age: %d  Add: %s  Roll: %d  Marks: %.2f  Class: %d\n",
			s1.p.name, s1.p.age, s1.p.add, s1.roll, s1.score, s1.class);
	printf("Name: %s  Age: %d  Add: %s  Roll: %d  Marks: %.2f  Class: %d\n",
			s2.p.name, s2.p.age, s2.p.add, s2.roll, s2.score, s2.class);
}
