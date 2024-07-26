#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int *ptr = NULL;
    printf("NULL 포인터 역참조: %d\n", *ptr);
}