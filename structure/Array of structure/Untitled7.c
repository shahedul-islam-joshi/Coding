#include <stdio.h>

int main() {
    struct student {
        char name[20];
        int roll;
        int marks1, marks2, marks3;
        float avg;
    };

    struct student st[20];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter name: ");
        scanf("%s", st[i].name);

        printf("Enter roll: ");
        scanf("%d", &st[i].roll);

        printf("Enter marks 1: ");
        scanf("%d", &st[i].marks1);

        printf("Enter marks 2: ");
        scanf("%d", &st[i].marks2);

        printf("Enter marks 3: ");
        scanf("%d", &st[i].marks3);

        // Calculate the average for each student
        st[i].avg = (st[i].marks1 + st[i].marks2 + st[i].marks3) / 3.0;
    }

    for (i = 0; i < 5; i++) {
        printf("Name: %s\n", st[i].name);
        printf("Roll: %d\n", st[i].roll);
        printf("Marks 1: %d\n", st[i].marks1);
        printf("Marks 2: %d\n", st[i].marks2);
        printf("Marks 3: %d\n", st[i].marks3);
        printf("Average: %.2f\n", st[i].avg);
    }

    return 0;
}
