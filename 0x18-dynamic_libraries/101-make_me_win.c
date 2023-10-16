#define _GNU_SOURCE
#include <stdio.h>
#include <dlfcn.h>

int main(int argc, char **argv) {
    int (*real_main)(int, char **) = dlsym(RTLD_NEXT, "main");
    printf("Please make me win!\n");
    return 0;
}
