#include <stdio.h>

struct student {
  int roll_no;
  char name[20];
  int marks;
};

struct student *modify_student(struct student *student) {
  student->marks += 10;
  return student;
}

int main() {
  struct student student = {
  .roll_no = 1,
  .name = "John Doe",
  .marks = 50,
};

struct student *modified_student = modify_student(&student);
    printf("The marks of the student after modification is: %d\n", modified_student->marks);
    return 0;
}