#include <stdio.h>

int main() {
    char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    char input;

    printf("Enter a character: ");
    scanf("%c", &input);

    int isVowel = 0;
    for (int i = 0; i < sizeof(vowels) / sizeof(vowels[0]); i++) {
        if (input == vowels[i]) {
            isVowel = 1;
            break;
        }
    }

    if (isVowel) {
        printf("%c is a vowel.\n", input);
    } else {
        printf("%c is a consonant.\n", input);
    }

    return 0;
}