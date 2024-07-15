#include <stdio.h>

int main() {

    const int numStudents = 5;
    int midScores[numStudents];
    int finScores[numStudents];

    
    for (int i = 0; i < numStudents; i++) {
        printf("Enter mid-term score for student %d: ", i + 1);
        scanf("%d", &midScores[i]);

        printf("Enter final exam score for student %d: ", i + 1);
        scanf("%d", &finScores[i]);
    }

    
    printf("\nTotal Scores:\n");
    for (int i = 0; i < numStudents; i++) {
        int totalScore = midScores[i] + finScores[i];
        printf("Student %d: %d\n", i + 1, totalScore);
    }

    return 0;
}
