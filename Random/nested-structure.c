#include <stdio.h>
#include <string.h>


struct UniversityDetails {
	int UniversityRanking;
	char UniversityName[90];
};

struct student_detail {
	int id;
	char name[20];
	float percentage;
	struct UniversityDetails data;
};

int main() {
	struct student_detail std = {1, "Arif", 80.5, 285, "National University of Computer & Emerging Sciences"};

	printf("Id is: %d\n", std.id);
	printf("Name is: %s\n", std.name);
	printf("Percentage is: %f\n", std.percentage);
	printf("University Ranking is: %d\n", std.data.UniversityRanking);
	printf("University Name is: %s\n", std.data.UniversityName);

	return 0;
}