#include <stdio.h>
#include <string.h>

int isPalindrome(char* word) {
    int i, j;
    int length = strlen(word);

    for (i = 0, j = length - 1; i < j; i++, j--) {
        if (word[i] != word[j]) {
            return 0; // Kelime palindrom degilse 0 döndürülür
        }
    }

    return 1; // Kelime palindrom ise 1 döndürülür
}

int main() {
    char word[100];

    printf("Bir kelime girin: ");
    scanf("%s", word);

    if (isPalindrome(word)) {
        printf("%s bir palindrom kelime.\n", word);
    } else {
        printf("%s bir palindrom kelime degil.\n", word);
    }

    return 0;
}
