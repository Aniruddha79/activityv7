#include <stdio.h>
#include <string.h>

int manual_strcmp_corrected(char s1[], char s2[]) {
    int i = 0;
   
    while (s1[i] == s2[i]) {
        if (s1[i]) { 
            return 0;        
        }
        i++;
    }
    return s1[i] - s2[i];
}

int main() {
      char user_answer_q1[100]; 
    char user_answer_q2[100];
    char correct_answer_q1[] = "C"; 
    char correct_answer_q2[] = "AEROPLANE";
    int comparison_result;
    printf("Welcome to the Quiz!\n");
    printf("Question 1: Which programming language are we currently using?\n");
    printf("Enter your answer:\n");
   
    scanf("%s", user_answer_q1);

    comparison_result = manual_strcmp_corrected(user_answer_q1, correct_answer_q1);

    if (comparison_result == 0) {
        printf("\nCorrect for Q1! Well done.\n");
    } else {
        printf("\nIncorrect for Q1. The correct answer was \"%s\".\n", correct_answer_q1);
    }
    printf("\nQuestion 2: COMPLETE THE WORD AER_P_A_N_ AND REWRITE?\n");
    printf("Enter your answer:\n");
    scanf("%s", user_answer_q2); 
    comparison_result = manual_strcmp_corrected(user_answer_q2, correct_answer_q2);
    if (comparison_result == 0) {
        printf("\nCorrect for Q2! Well done.\n");
    } else {
        printf("\nIncorrect for Q2. The correct answer was \"%s\".\n", correct_answer_q2);
    }

    return 0;
}
