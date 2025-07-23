#include <stdio.h>

void countCall() {
    static int counter = 0 ; 
    counter++;
    printf("Call Function: Counter =  %d\n", counter);
}
int main() {
    printf("Starting function calls...\n");
    countCall();
    printf("After first call:\n");
    countCall();
    return 0;
}

    // การใช้ static การนับ ครั้งแรกจะได้ 1 และครั้งที่สองจะได้ 2 เพราะการนับจะไม่เริ่มเสมอ แต่จะคงค่าไว้ 