char *_memset(char *s, char b, unsigned int n) {
    // Implementation of the _memset function
    char *originalS = s;
    while (n-- > 0) {
        *s++ = b;
    }
    return originalS;
}
