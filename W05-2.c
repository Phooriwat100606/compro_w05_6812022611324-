#include <stdio.h>

int main() {
    char name[30];
    int age;
    float height;
    char suject;
    float grade;
    char grageChar;

    printf("Enter name, age, height, subjecet, grade, grade symbol; ");
    scanf("%s %d %f %c", &name, &age, &height, &suject, &grade, &grageChar);

    printf("%s 1s %d years old and %.1f contumaters tall.\n", name,age,height);
    printf("In subject %c, %s got %.2f which is symbolzed as '%c'.\n",suject,name,grade,grageChar);

    return 0;
}