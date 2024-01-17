char *_strcat(char *dest, char *src) {
    // Implementation of the _strcat function
    char *originalDest = dest;
    while (*dest != '\0') {
        dest++;
    }
    while ((*dest++ = *src++) != '\0');
    return originalDest;
}
