#include <stddef.h>

int _isalpha(int c) {
    // Implementation of the _isalpha function
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
