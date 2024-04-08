void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;
    swap(&x, &y); // x와 y의 주소를 전달
    printf("x = %d, y = %d", x, y); // 출력: x = 20, y = 10
    return 0;
}
