#include <stddef.h>

char *_strpbrk(char *s, char *accept) {
    // Implementation of the _strpbrk function
    while (*s != '\0') {
        char *currentAccept = accept;
        while (*currentAccept != '\0') {
            if (*s == *currentAccept) {
                return s;
            }
            currentAccept++;
        }
        s++;
    }
    return NULL;
}
