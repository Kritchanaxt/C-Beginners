#include <stdio.h>

#define MAX_NAME 50

struct Student {
    int id;
    char name[MAX_NAME];
    float midtermScore;
    float finalScore;
};

int main() {
    int numStudents;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    struct Student students[numStudents];

    for (int i = 0; i < numStudents; i++) {
        printf("\nStudent %d\n", i+1);
        printf("ID: ");
        scanf("%d", &students[i].id);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Midterm Score: ");
        scanf("%f", &students[i].midtermScore);
        printf("Final Score: ");
        scanf("%f", &students[i].finalScore);
    }

    printf("\nExam Results\n");
    for (int i = 0; i < numStudents; i++) {
        float totalScore = students[i].midtermScore + students[i].finalScore;
        printf("Student: %s, ID: %d, Result: %s\n",
               students[i].name, students[i].id, totalScore >= 60 ? "Pass" : "Fail");
    }

    return 0;
}
