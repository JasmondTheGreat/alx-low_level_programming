char *_strcpy(char *dest, char *src) {
    // Implementation of the _strcpy function
    char *originalDest = dest;
    while ((*dest++ = *src++) != '\0');
    return originalDest;
}
