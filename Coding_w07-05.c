#include <stdio.h>

// ฟังก์ชันสำหรับหาค่าอัตราส่วนลดจากเงื่อนไขที่กำหนด
float calculate_discount(int age, int vip_level, float purchase_amount) {
    float discount_rate = 0.0;

    // เงื่อนไขที่ 1 ลูกค้าที่อายุมากกว่า 60 ปี หรือเป็น VIP ระดับ 3–4
    if (age > 60 || (vip_level == 3 || vip_level == 4)) {
        discount_rate = 0.20;
    }
    // เงื่อนไขที่ 2 อายุระหว่าง 30–40 ปี และมียอดซื้อเกิน 2,000 บาท
    else if (age >= 30 && age <= 40 && purchase_amount > 2000) {
        discount_rate = 0.15;
    }
    // เงื่อนไขที่ 3 อายุระหว่าง 18–25 ปี และมียอดซื้อเกิน 1,000 บาท
    else if (age >= 18 && age <= 25 && purchase_amount > 1000) {
        discount_rate = 0.10;
    }
    // เงื่อนไขที่ 4 ลูกค้าที่เป็น VIP ระดับ 5 หรือมียอดซื้อเกิน 50,000 บาท
    else if (vip_level == 5 || purchase_amount > 50000) {
        discount_rate = 0.25;
    }

    return discount_rate;
}

int main() {
    int age, vip_level;
    float purchase_amount;
    float discount_rate, discount_amount, final_price;

    // รับข้อมูลจากผู้ใช้งาน
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter VIP level (1-5): ");
    scanf("%d", &vip_level);
    printf("Enter purchase amount: ");
    scanf("%f", &purchase_amount);

    // คำนวณอัตราส่วนลดจากฟังก์ชัน
    discount_rate = calculate_discount(age, vip_level, purchase_amount);
    
    // หายอดเงินที่ลดได้และราคาสุทธิหลังหักส่วนลด
    discount_amount = purchase_amount * discount_rate;
    final_price = purchase_amount - discount_amount;

    // แสดงข้อมูลลูกค้าและผลลัพธ์การคิดส่วนลด
    printf("\n--- Customer Info ---\n");
    printf("Age: %d | VIP Level: %d | Amount: %.2f THB\n", age, vip_level, purchase_amount);

    // ตรวจสอบว่าลูกค้าได้รับส่วนลดหรือไม่
    if (discount_rate > 0) {
        printf("Discount received: %.0f%%\n", discount_rate * 100);
        printf("Discount amount: %.2f THB\n", discount_amount);
        printf("Final price: %.2f THB\n", final_price);
    } else {
        printf("No discount applied\n");
    }

    printf("\nThank you for shopping with us!\n");

    return 0;
}
