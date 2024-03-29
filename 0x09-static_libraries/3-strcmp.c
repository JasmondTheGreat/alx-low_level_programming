int _strcmp(char *s1, char *s2) {
    // Implementation of the _strcmp function
    while (*s1 == *s2) {
        if (*s1 == '\0') {
            return 0;
        }
        s1++;
        s2++;
    }
    return *s1 - *s2;
}
