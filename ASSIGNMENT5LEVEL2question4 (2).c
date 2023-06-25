#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parse_string(char *string, struct Student *student) {
    char *token;
    token = strtok(string, " ");
    student->rollno = atoi(token);
    token = strtok(NULL, " ");
    strcpy(student->name, token);
    token = strtok(NULL, " ");
    student->marks = atof(token);
    // atof converts into a double precision string.
}

int main() {
    // char string[] = "1001 Aron 100.00";
    char string_data [100];
    scanf("%s", string_data);
    struct Student student;
    parse_string(string_data, &student);
    printf("Rollno: %d\n", student.rollno);
    printf("Name: %s\n", student.name);
    printf("Marks: %.2f\n", student.marks);
    return 0;
}