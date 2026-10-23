#include <stdio.h>

int main() {
    int nationality, age, test, fee;

    printf("Are you an Indian citizen? (1 - Yes, 0 - No): ");
    scanf("%d", &nationality);

    if (nationality != 1) {
        printf("\nNot eligible: Candidate must be Indian.\n");
    }
    else {
        printf("Enter your age: ");
        scanf("%d", &age);

        if (age < 18) {
            printf("\nNot eligible: Age must be 18 years or above.\n");
        }
        else {
            printf("Have you passed the driving test? (1 - Yes, 0 - No): ");
            scanf("%d", &test);

            if (test != 1) {
                printf("\nNot eligible: Driving test not passed.\n");
            }
            else {
                printf("Have you paid the DL processing fee? (1 - Yes, 0 - No): ");
                scanf("%d", &fee);

                if (fee != 1) {
                    printf("\nNot eligible: DL processing fee not paid.\n");
                }
                else {
                    printf("\nCongratulations! You are eligible for a driving licence.\n");
                }
            }
        }
    }

    return 0;
}
