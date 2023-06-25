#include <stdio.h>
#include <string.h>

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
}

void initialize_array(struct Student *array, int size) {
    for (int i = 0; i < size; i++) {
        array[i].rollno = 0;
        strcpy(array[i].name, "");
        array[i].marks = 0.0;
    }
}

void display_array(struct Student *array, int size) {
    for (int i = 0; i < size; i++) {
        printf("Rollno: %d\n", array[i].rollno);
        printf("Name: %s\n", array[i].name);
        printf("Marks: %.2f\n", array[i].marks);
    }
}

void delete_member(struct Student *array, int size) {
    if (size == 0) {
        printf("Array is empty\n");
        return;
    }

    for (int i = 0; i < size - 1; i++) {
        array[i] = array[i + 1];
    }

    array[size - 1].rollno = 0;
    strcpy(array[size - 1].name, "");
    array[size - 1].marks = 0.0;
}

int main() {
    char string[100];
    scanf("%s", string);
    int count = 0;
    for (i = 0; s[i] != '\0'; ++i);
    struct Student student;
    parse_string(string, &student);
    printf("Rollno: %d\n", student.rollno);
    printf("Name: %s\n", student.name);
    printf("Marks: %.2f\n", student.marks);

    struct Student array[i];
    initialize_array(array, i);
    display_array(array, i);
    delete_member(array, i);
    display_array(array, i);
    return 0;
}