char *_strncpy(char *dest, char *src, int n) {
    // Implementation of the _strncpy function
    char *originalDest = dest;
    while (n-- > 0 && (*dest++ = *src++) != '\0');
    while (n-- > 0) {
        *dest++ = '\0';
    }
    return originalDest;
}
