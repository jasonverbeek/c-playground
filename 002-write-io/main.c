#include <stdio.h>

const int MAX_BRIGHTNESS = 120000;

void main(int argc, char* argv[]) {
    FILE *f = fopen("/sys/class/backlight/intel_backlight/brightness", "w+");
    fputs("120000", f);
    fclose(f);
}
