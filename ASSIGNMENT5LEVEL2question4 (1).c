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

void rotate_array(struct Student *array, int size, int k) {
    int temp;
    for (int i = 0; i < k; i++) {
        temp = array[0];
        for (int j = 0; j < size - 1; j++) {
            array[j] = array[j + 1];
        }
        array[size - 1] = temp;
    }
}

int main() {
    char string[100];
    scanf("%s", string);
    struct Student student;
    parse_string(string, &student);
    printf("Rollno: %d\n", student.rollno);
    printf("Name: %s\n", student.name);
    printf("Marks: %.2f\n", student.marks);

    struct Student array[3];
    initialize_array(array, 3);
    display_array(array, 3);

    int k;
    printf("Enter the value of K: ");
    scanf("%d", &k);
    rotate_array(array, 3, k);
    display_array(array, 3);
    return 0;
}