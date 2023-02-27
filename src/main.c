#define MAIN_H "../include/main.h"
#include MAIN_H

int g;
__attribute__((pure)) int return4() {
    printf("%i\n", g);
    return 4;
}

__attribute__((const)) int return5() {
    printf("%i\n", g);
    return 5;
}



int main() {
    g = 1;
    return4(); return5();
    return 0;
}
