#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// ==========================================
// SAMI (DEVELOPER LEAD) FEATURES
// ==========================================
void basic_calculator() {
    printf("\nCalculator feature coming soon.\n");
}

void unit_converter() {
    printf("\nUnit Converter feature coming soon.\n");
}

// ==========================================
// SADIQ (MAINTAINER LEAD) FEATURES
// ==========================================
void gpa_calculator() {
    printf("\nGPA Calculator feature coming soon.\n");
}

void todo_manager() {
    printf("\nTo-Do List Manager feature coming soon.\n");
}

// ==========================================
// ASHIQ (REVIEWER LEAD) FEATURES
// ==========================================
void trivia_quiz() {
    int ans, score = 0;
    printf("\n--- Git & GitHub Quick Quiz ---\n");

    printf("Q1: Which Git operation saves uncommitted changes temporarily?\n");
    printf("1) Commit   2) Stash   3) Blame\nYour answer (1-3): ");
    scanf("%d", &ans);
    if (ans == 2) { printf("Correct!\n"); score++; }
    else { printf("Incorrect. Answer is 2 (Stash).\n"); }

    printf("\nQ2: Which keyword in a PR description auto-closes Issue #5?\n");
    printf("1) Closes #5   2) Deletes #5   3) Pushes #5\nYour answer (1-3): ");
    scanf("%d", &ans);
    if (ans == 1) { printf("Correct!\n"); score++; }
    else { printf("Incorrect. Answer is 1 (Closes #5).\n"); }

    printf("\nQ3: Which branch is protected in our repository workflow?\n");
    printf("1) feature   2) main   3) draft\nYour answer (1-3): ");
    scanf("%d", &ans);
    if (ans == 2) { printf("Correct!\n"); score++; }
    else { printf("Incorrect. Answer is 2 (main).\n"); }

    printf("\nFinal Quiz Score: %d/3\n", score);
}


void password_generator() {
    int length, i;
    const char chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*";
    int char_len = (int)strlen(chars);

    printf("\n--- Secure Password Generator ---\n");
    printf("Enter password length (8-32): ");
    scanf("%d", &length);

    if (length < 8 || length > 32) {
        printf("Length must be between 8 and 32.\n");
        return;
    }

    printf("Generated Password: ");
    for (i = 0; i < length; i++) {
        printf("%c", chars[rand() % char_len]);
    }
    printf("\n");
}


// ==========================================
// MAIN CLI MENU
// ==========================================
int main() {
    int choice;
    srand((unsigned int)time(NULL));

    while (1) {
        printf("\n====================================\n");
        printf("         TEAM TOOLKIT v1.0          \n");
        printf("====================================\n");
        printf("1. Basic Calculator       (Sami)\n");
        printf("2. Unit Converter         (Sami)\n");
        printf("3. GPA Calculator         (Sadiq)\n");
        printf("4. To-Do List Manager     (Sadiq)\n");
        printf("5. Git & CS Trivia Quiz   (Ashiq)\n");
        printf("6. Password Generator     (Ashiq)\n");
        printf("0. Exit\n");
        printf("Select an option (0-6): ");

        if (scanf("%d", &choice) != 1) {
            while (getchar() != '\n');
            printf("Invalid input. Please enter a number.\n");
            continue;
        }

        if (choice == 1) {
            basic_calculator();
        } else if (choice == 2) {
            unit_converter();
        } else if (choice == 3) {
            gpa_calculator();
        } else if (choice == 4) {
            todo_manager();
        } else if (choice == 5) {
            trivia_quiz();
        } else if (choice == 6) {
            password_generator();
        } else if (choice == 0) {
            printf("Exiting Team Toolkit. Goodbye!\n");
            break;
        } else {
            printf("Invalid selection. Try again.\n");
        }
    }
    return 0;
}