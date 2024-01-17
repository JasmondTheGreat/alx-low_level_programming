char *_memcpy(char *dest, char *src, unsigned int n) {
    // Implementation of the _memcpy function
    char *originalDest = dest;
    while (n-- > 0) {
        *dest++ = *src++;
    }
    return originalDest;
}
