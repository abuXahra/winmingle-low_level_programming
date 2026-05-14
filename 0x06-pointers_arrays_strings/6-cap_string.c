#include <stdio.h>
#include <ctype.h>

char *cap_string(char *str) {

    int capitalizeNext = 1;
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i])) {
            capitalizeNext = 1;
        } else if (capitalizeNext) {
            str[i] = toupper(str[i]);
            capitalizeNext = 0;
        } else {
            str[i] = tolower(str[i]);
        }
    }

    return str;
}
