#include <stdio.h>

int main() {
    struct student {
        char name[20];
        int roll;
        int marks[3];
        float avg;
    };

    struct student st[20];
    int i, j;

    for (i = 0; i < 5; i++) {
        printf("Enter name: ");
        scanf("%s", st[i].name);

        printf("Enter roll: ");
        scanf("%d", &st[i].roll);

        for (j = 0; j < 3; j++) {
            printf("Enter marks %d: ", j + 1);
            scanf("%d", &st[i].marks[j]);
        }

        // Calculate the average for each student
        st[i].avg = (st[i].marks[0] + st[i].marks[1] + st[i].marks[2]) / 3.0;
    }

    for (i = 0; i < 5; i++) {
        printf("Name: %s\n", st[i].name);
        printf("Roll: %d\n", st[i].roll);

        for (j = 0; j < 3; j++) {
            printf("Marks %d: %d\n", j + 1, st[i].marks[j]);
        }

        printf("Average: %.2f\n", st[i].avg);
    }

    return 0;
}

