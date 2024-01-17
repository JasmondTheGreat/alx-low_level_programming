char *_strcpy(char *dest, char *src) {
    char *originalDest = dest;
    while ((*dest++ = *src++) != '\0');
    return originalDest;
}
