#include <stdio.h>
#include <string.h>

int compare_string(char s1[], char s2[]) {
    int i = 0;
   
    while (s1[i]&&s1[i] == s2[i]) {
        i++;
    }
    return s1[i] - s2[i];
}
void combine_string(char s1[], char s2[]){
    printf("your answer is %s %s\n",s1,s2);
}

int main() {
    char user_answer_q1[100]; 
    char user_answer_q2[100];
    char user_answer_q3[100];
    char correct_answer_q1[] = "C"; 
    char correct_answer_q2[] = "AEROPLANE";
    char correct_answer_q3[]="TIT FOR";
    int comparison_result;
    printf("Welcome to the Quiz!\n");
    printf("Question 1:\nWhich programming language are we currently using?\n");
    printf("Enter your answer:\n");
   
    scanf("%s", user_answer_q1);

    comparison_result = compare_string(user_answer_q1, correct_answer_q1);

    if (comparison_result == 0) {
        printf("\nCorrect for Q1! Well done.\n");
    } else {
        printf("\nIncorrect for Q1. The correct answer was \"%s\".\n", correct_answer_q1);
    }
    printf("\nQuestion 2:\nCOMPLETE THE WORD AER_P_A_N_ AND REWRITE?\n");
    printf("Enter your answer:\n");
    scanf("%s", user_answer_q2); 
    comparison_result =compare_string(user_answer_q2, correct_answer_q2);
    if (comparison_result == 0) {
        printf("\nCorrect for Q2! Well done.\n");
    } else {
        printf("\nIncorrect for Q2. The correct answer was \"%s\".\n", correct_answer_q2);
    }
    printf("Question 3:\ncomplete the phrase TIT FOR ........");
    scanf("%s",user_answer_q3);
    combine_string( correct_answer_q3,user_answer_q3);
    printf("correct answer is TIT FOR TAT");
    return 0;
    
}

