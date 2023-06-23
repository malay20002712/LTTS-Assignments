#include <stdio.h>
#include <stdlib.h>

struct student {
  int roll_no;
  char name[20];
  int marks;
};

int main() {
  int n, i;
  float avg;
  struct student *students;

  printf("Enter the number of students: ");
  scanf("%d", &n);

  students = (struct student *)malloc(n * sizeof(struct student));

  for (i = 0; i < n; i++) {
    printf("Enter the roll number of student %d: ", i + 1);
    scanf("%d", &students[i].roll_no);
    printf("Enter the name of student %d: ", i + 1);
    scanf("%s", students[i].name);
    printf("Enter the marks of student %d: ", i + 1);
    scanf("%d", &students[i].marks);
  }

  avg = 0;
  for (i = 0; i < n; i++) {
    avg += students[i].marks;
  }
  avg /= n;

  printf("The average marks of the class is: %.2f\n", avg);

  printf("The students scoring above the average marks are: \n");
  for (i = 0; i < n; i++) {
    if (students[i].marks > avg) {
      printf("Roll number: %d, Name: %s, Marks: %d\n", students[i].roll_no, students[i].name, students[i].marks);
    }
  }

  printf("The students scoring below the average marks are: \n");
  for (i = 0; i < n; i++) {
    if (students[i].marks < avg) {
      printf("Roll number: %d, Name: %s, Marks: %d\n", students[i].roll_no, students[i].name, students[i].marks);
    }
  }

  free(students);

  return 0;
}