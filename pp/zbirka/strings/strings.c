#include <stdio.h>
#include <string.h>

char *catStr(char *dest, char *src) {
  int i = 0;
  for (i = 0; dest[i] != '\0'; i++)
    ;

  for (int j = 0; src[j] != '\0'; j++) {
    dest[i] = src[j];
    i++;
  }

  return dest;
}

char *copyString(char *dest, char *src) {
  int i = 0;
  for (i = 0; src[i] != '\0'; i++) {
    dest[i] = src[i];
  }
  dest[i] = '\0';

  return dest;
}

int stringLength(char *str) {
  int i = 0;
  for (; str[i] != '\0'; i++)
    ;
  return i;
}

int areStringsEqual(char *str1, char *str2) {
  int i = 0;
  for (i = 0; str1[i] != '\0'; i++) {
    if (str1[i] != str2[i]) {
      return 0;
    }

    if (str2[i] == '\0') {
      return 0;
    }
  }

  return str2[i] == '\0';
}

int main() {
  char str[128] = "Tablet";
  char *str2 = "Tablet";

  printf("%s == %s: %d\n", str, str2, areStringsEqual(str, str2));

  return 0;
}