#include <stdio.h>
int main() {
    int x = 2;
    int y = x++ * ++x + --x + x++;
    printf("x=%d y=%d", x, y);
    return 0;
}
