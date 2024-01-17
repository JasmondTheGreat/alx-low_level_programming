unsigned int _strspn(char *s, char *accept) {
    // Implementation of the _strspn function
    unsigned int count = 0;
    while (*s != '\0' && *accept != '\0' && *s == *accept) {
        count++;
        s++;
        accept++;
    }
    return count;
}
