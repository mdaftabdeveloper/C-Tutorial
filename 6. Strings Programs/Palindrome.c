#include <stdio.h>
#include <string.h>
#include <stdbool.h>


bool isPalindrome(const char *str) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    
    const char *strings[] = {"level", "hello", "madam", "world", "radar", "program"};
    int n = sizeof(strings) / sizeof(strings[0]);

    printf("Palindrome strings are:\n");
    for (int i = 0; i < n; i++) {
        if (isPalindrome(strings[i])) {
            printf("%s\n", strings[i]);
        }
    }

    return 0;
}
