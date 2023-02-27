void print_rev(char *s)
{
  // get the length of the string, use it to compute the middle index
  int length = strlen(s);
  int middle = length / 2;

  // used to swap characters on either side of the string
  char temp;

  // Swaps characters at the beginning of the string with their corresponding 
  // character at the end of the string... i.e. the first character with the 
  // last character, the second character with the second last character, and 
  // on and on until the middle of the string is reached, at which point the 
  // string will be reversed!
  for (int i = 0; i < middle; i++)
  {
    temp = s[i];
    s[i] = s[length - i - 1];
    s[length - i - 1] = temp;
  }
}
