#include <stdio.h>
#include <string.h>

void reverseString(char* str) {
    int i, j;
    char temp;
    int length = strlen(str);

    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[100];

    printf("Bir metin girin: ");
    fgets(str, sizeof(str), stdin);

    // fgets(), satır sonu karakterini de alır, bu nedenle '\n' karakterini kaldıralım
    str[strcspn(str, "\n")] = '\0';

    reverseString(str);

    printf("Metin tersine çevrilmiş hali: %s\n", str);

    return 0;
}
