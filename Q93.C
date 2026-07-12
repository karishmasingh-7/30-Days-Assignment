#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100], temp[200];

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    // dono ki length same honi chahiye rotation ke liye
    if(strlen(s1) != strlen(s2)) {
        printf("Strings are not rotations of each other\n");
        return 0;
    }

    // temp me s1 copy karenge aur usme s1 dubara jod denge
    strcpy(temp, s1);
    strcat(temp, s1); // jaise 'abcd' ban jayega 'abcdabcd'

    // check karenge agar s2 temp me hai (strstr se sub-string dhundhte hain)
    if(strstr(temp, s2) != NULL) {
        printf("Strings are rotations of each other\n");
    } else {
        printf("Strings are not rotations of each other\n");
    }

    return 0;
}