#include <stdio.h>

void pointyExperiment1(int* pointAddr) {
    *pointAddr += 1;
}

typedef struct {
    int ints[64];
    int index;
} MemoryManager;

MemoryManager memoryManager() {
    MemoryManager mm = {
        {},
        0
    };
    return mm;
}

int* createInt(MemoryManager* mm) {
    int index = mm->index;
    mm->ints[index] = 5;
    return &mm->ints[index];
}

void temporaryMemory() {
    MemoryManager mm = memoryManager();
    int *x = createInt(&mm);
    printf("Managed int: %d\r\n", *x);
}

void main(int argc, char* argv[]) {
    // modify an int through a pointer
    int int1 = 1;
    pointyExperiment1(&int1);
    printf("ex1: 2==%d\r\n", int1);

    // store an int elsewhere and leave memory storage out of scope
    temporaryMemory();

}
