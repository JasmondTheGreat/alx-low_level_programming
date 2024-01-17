char *_strncat(char *dest, char *src, int n) {
    // Implementation of the _strncat function
    char *originalDest = dest;
    while (*dest != '\0') {
        dest++;
    }
    while (n-- > 0 && (*dest++ = *src++) != '\0');
    return originalDest;
}
