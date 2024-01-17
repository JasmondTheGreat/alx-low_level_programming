#include <stddef.h>

char *_strchr(char *s, char c) {
    // Implementation of the _strchr function
    while (*s != '\0') {
        if (*s == c) {
            return s;
        }
        s++;
    }
    return NULL;
}
