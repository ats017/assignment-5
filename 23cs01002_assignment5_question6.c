#include <stdio.h>
#include <string.h>

#define MAX_CHARS 256
int can_make_word(char char_array[], char word[]) {
    int char_count[MAX_CHARS] = {0};

    for (int i = 0; char_array[i] != '\0'; i++) {
        char_count[char_array[i]]++;
    }

    for (int i = 0; word[i] != '\0'; i++) {
        if (char_count[word[i]] == 0) {
            return 0;
        }
        char_count[word[i]]--;
    }

    return 1;
}

int main() {
    char char_array[] = {'a', 'd', 'i', 't', 'y', 's', 'h', '\0'};
    char word[100];

    printf("Enter a word: ");
    scanf("%s", word);

    if (can_make_word(char_array, word)) {
        printf("The word '%s' can be made from the characters in the array.\n", word);
    } else {
        printf("The word '%s' cannot be made from the characters in the array.\n", word);
    }

    return 0;
}

