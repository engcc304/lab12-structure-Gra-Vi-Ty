#include <stdio.h>

struct Student {
    char Name[30];
    char ID[14];
    float ScoreSub1;
    float ScoreSub2;
    float ScoreSub3;
    float ScoreSub4;
    float ScoreSub5;
} typedef S;

// ฟังก์ชันเพื่อคำนวณเกรด
char calculateGrade(float score) {
    if (score >= 85) return 'A plus';
    else if (score >= 80) return 'A';
    else if (score >= 75) return 'B plus';
    else if (score >= 70) return 'B';
    else if (score >= 65) return 'C plus';
    else if (score >= 60) return 'C';
    else if (score >= 55) return 'D plus';
    else if (score >= 50) return 'D';
    else return 'F';
}

int main() {
    S students[3];

    printf("Enter the details of 3 students:\n");

    for (int i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", students[i].Name);

        printf("ID: ");
        scanf("%s", students[i].ID);

        printf("Scores in Subject 1: ");
        scanf("%f", &students[i].ScoreSub1);

        printf("Scores in Subject 2: ");
        scanf("%f", &students[i].ScoreSub2);

        printf("Scores in Subject 3: ");
        scanf("%f", &students[i].ScoreSub3);

        printf("Scores in Subject 4: ");
        scanf("%f", &students[i].ScoreSub4);

        printf("Scores in Subject 5: ");
        scanf("%f", &students[i].ScoreSub5);
    }

    printf("\nStudent Details:\n");

    for (int i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].Name);
        printf("ID: %s\n", students[i].ID);
        printf("Scores: %.0f %.0f %.0f %.0f %.0f\n",
               students[i].ScoreSub1, 
               students[i].ScoreSub2,
               students[i].ScoreSub3, 
               students[i].ScoreSub4,
               students[i].ScoreSub5);

        printf("Grades: %c %c %c %c %c\n",
               calculateGrade(students[i].ScoreSub1),
               calculateGrade(students[i].ScoreSub2),
               calculateGrade(students[i].ScoreSub3),
               calculateGrade(students[i].ScoreSub4),
               calculateGrade(students[i].ScoreSub5));

        float averageScore = (students[i].ScoreSub1 + students[i].ScoreSub2 +
                              students[i].ScoreSub3 + students[i].ScoreSub4 +
                              students[i].ScoreSub5) / 5.0;
        printf("Average Scores: %.1f\n\n", averageScore);
    }

    return 0;
}//end main function