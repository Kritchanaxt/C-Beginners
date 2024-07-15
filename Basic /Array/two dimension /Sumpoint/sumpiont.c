#include <stdio.h>

#define NUM_STUDENTS 3
#define NUM_SUBJECTS 4

int main() {
    int scores[NUM_STUDENTS][NUM_SUBJECTS];

    for (int i = 0; i < NUM_STUDENTS; ++i) {
        printf("Enter scores for student %d:\n", i + 1);

        for (int j = 0; j < NUM_SUBJECTS; ++j) {
            printf("Enter score for subject %d: ", j + 1);
            scanf("%d", &scores[i][j]);
        }
    }

    printf("\nTotal Scores for Each Student:\n");
    for (int i = 0; i < NUM_STUDENTS; ++i) {
        int totalScore = 0;

        for (int j = 0; j < NUM_SUBJECTS; ++j) {
            totalScore += scores[i][j];
        }

        printf("Student %d: %d\n", i + 1, totalScore);
    }

    printf("\nTotal Scores for Each Subject:\n");
    for (int j = 0; j < NUM_SUBJECTS; ++j) {
        int totalScore = 0;

        for (int i = 0; i < NUM_STUDENTS; ++i) {
            totalScore += scores[i][j];
        }

        printf("Subject %d: %d\n", j + 1, totalScore);
    }

    return 0;
}
