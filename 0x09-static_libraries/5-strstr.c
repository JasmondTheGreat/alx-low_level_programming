#include <stddef.h>

char *_strstr(char *haystack, char *needle) {
    // Implementation of the _strstr function
    while (*haystack != '\0') {
        char *h = haystack;
        char *n = needle;
        while (*n != '\0' && *h == *n) {
            h++;
            n++;
        }
        if (*n == '\0') {
            return haystack;
        }
        haystack++;
    }
    return NULL;
}
