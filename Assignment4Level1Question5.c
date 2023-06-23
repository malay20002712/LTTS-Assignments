#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

void swapPersons(struct Person* p1, struct Person* p2) {
    struct Person temp;

    strcpy(temp.name, p1->name);
    strcpy(p1->name, p2->name);
    strcpy(p2->name, temp.name);

    temp.age = p1->age;
    p1->age = p2->age;
    p2->age = temp.age;
}

int main() {
    struct Person person1, person2;

    printf("Enter the name for person 1: ");
    scanf("%s", person1.name);
    printf("Enter the age for person 1: ");
    scanf("%d", &(person1.age));

    printf("Enter the name for person 2: ");
    scanf("%s", person2.name);
    printf("Enter the age for person 2: ");
    scanf("%d", &(person2.age));

    printf("\nBefore swapping:\n");
    printf("Person 1: Name = %s, Age = %d\n", person1.name, person1.age);
    printf("Person 2: Name = %s, Age = %d\n", person2.name, person2.age);

    swapPersons(&person1, &person2);

    printf("\nAfter swapping:\n");
    printf("Person 1: Name = %s, Age = %d\n", person1.name, person1.age);
    printf("Person 2: Name = %s, Age = %d\n", person2.name, person2.age);

    return 0;
}
