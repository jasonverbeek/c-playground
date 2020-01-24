#include <stdio.h>
#include <math.h>

const int OPTION_RANGE = 0b0100;

void options(int options, char* bv) {
    printf("selected options: %d(%s)5\r\n", options, bv);
    unsigned int shifted;
    for (int i = OPTION_RANGE; i > 0; i--) {
        shifted = 1 << i-1;
        if (options & shifted) {
            printf("Option[%d] selected.\r\n", i);
        }
    }
    printf("---------------------\r\n");
}

void main(int argc, char* argv[]) {
    options(0b0000, "0b0000");
    options(0b0010, "0b0010");
    options(0b0101, "0b0101");
    options(0b1001, "0b1001");
    options(0b1010, "0b1010");
    options(0b1011, "0b1011");
    options(0b1100, "0b1100");
    options(0b1101, "0b1101");
    options(0b1111, "0b1111");
}
