#include <stdio.h>

int main() {
    int students = 10;
    int midterm_scores[students];
    int final_scores[students];

    for (int i = 0; i < students; i++) {
        printf("Enter midterm score for student %d: ", i + 1);
        scanf("%d", &midterm_scores[i]);

        printf("Enter final score for student %d: ", i + 1);
        scanf("%d", &final_scores[i]);
    }

    printf("\nTotal scores for each student:\n");
    for (int i = 0; i < students; i++) {
        int total_score = midterm_scores[i] + final_scores[i];
        printf("Student %d: %d\n", i + 1, total_score);
    }

    return 0;
}