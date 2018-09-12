#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void doublePointers(void** out_buff);

int main(int argc, char* argv[]) {
    void* out_buff;
    doublePointers(&out_buff);
    printf("Result: %s\n", (char*) out_buff);

    return 0;
}

void doublePointers(void** out_buff) {
    char* buffer = malloc(11);
    sprintf(buffer, "This is it");

    *out_buff = malloc(11);
    strcpy(*out_buff, buffer);
}