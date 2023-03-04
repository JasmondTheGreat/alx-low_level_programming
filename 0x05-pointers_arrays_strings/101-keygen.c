#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

int main(void)
{
    srand(time(NULL)); // initialize the random number generator with the current time

    char password[PASSWORD_LENGTH + 1]; // create a character array to hold the password

    // generate a random password
    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        int random_num = rand() % 62; // generate a random number between 0 and 61

        if (random_num < 26) {
            password[i] = 'a' + random_num; // if the number is less than 26, use a lowercase letter
        } else if (random_num < 52) {
            password[i] = 'A' + random_num - 26; // if the number is between 26 and 51, use an uppercase letter
        } else {
            password[i] = '0' + random_num - 52; // if the number is between 52 and 61, use a digit
        }
    }

    password[PASSWORD_LENGTH] = '\0'; // terminate the string with a null character

    printf("%s\n", password); // print the generated password

    return 0;
}

