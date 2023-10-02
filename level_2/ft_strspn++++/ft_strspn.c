#include <stdio.h>
#include <string.h>

int main() {
    const char *str1 = "123abc";
    const char *str2 = "1234567890";

    size_t len = strspn(str1, str2);

    printf("La longitud de la subcadena inicial con solo números es: %zu\n", len);

    return 0;
}

