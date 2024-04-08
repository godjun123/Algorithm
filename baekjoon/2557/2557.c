#include <stdio.h>#include <stdlib.h>void deepCopy(int* ptr) {
    int* newPtr = malloc(sizeof(int)); // 새로운 메모리 할당
    *newPtr = *ptr; // 값 복사
    *newPtr = 20; // 서로 다른 메모리 영역을 가리키므로 원본 값은 변경되지 않음
}

int main() {
    int value = 10;
    int* ptr = &value;

    printf("Before deep copy: %d\n", *ptr); // 10

    deepCopy(ptr);

    printf("After deep copy: %d\n", *ptr); // 10

    return 0;
}
