#include <stdio.h>

int main(void) {
    // ตัวแปรจำนวนเต็ม 
    int x, y;

    // รับค่า x 
    printf("กรุณาป้อนค่าตัวเลขที่ 1 (x): ");
    scanf("%d", &x);

    // รับค่า y
    printf("กรุณาป้อนค่าตัวเลขที่ 2 (y): ");
    scanf("%d", &y);

    // if-else if-else เพื่อเปรียบเทียบค่า
    if (x > y) {
        // x มากกว่า y
        printf("ผลลัพธ์: %d มากกว่า %d\n", x, y);
    }
    else if (x < y) {
        //  x น้อยกว่า y
        printf("ผลลัพธ์: %d น้อยกว่า %d\n", x, y);
    }
    else {
        //  x เท่ากับ y
        printf("ผลลัพธ์: %d เท่ากับ %d\n", x, y);
    }

    
    return 0;
}