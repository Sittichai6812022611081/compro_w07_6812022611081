#include <stdio.h>                                                  // ประกาศฟังก์ชันมาตรฐาน

int main(){                                                         // ฟังก์ชันหลัก
    int age;                                                        // ประกาศตัวแปรเก็บจำนวนเต็ม age
    int level;                                                      // ประกาศตัวแปรเก็บจำนวนเต็ม level
    float amount;                                                   // ประกาศตัวแปรเก็บจำนวนจริงแบบทศนิยม amount
    printf("\nEnter your age: ");                                   // แสดงข้อความให้ผู้ใช้กรอกอายุ
    scanf("%d",&age);                                               // รับค่าจำนวนเต็มจากผู้ใช้และเก็บในตัวแปร age
    printf("Enter VIP level (1-5): ");                              // แสดงข้อความให้ผู้ใช้กรอกระดับ
    scanf("%d",&level);                                             // รับค่าจำนวนเต็มจากผู้ใช้และเก็บในตัวแปร level
    printf("Enter purchase amount: ");                              // แสดงข้อความให้ผู้ใช้กรอกจำนวนเงิน
    scanf("%f",&amount);                                            // รับค่าจำนวนจริงแบบทศนิยมจากผู้ใช้และเก็บในตัวแปร amount
    
    printf("\n--- Customer Info ---\n");                            // แสดงข้อความหัวข้อข้อมูลลูกค้า
    if (age>60 || level==3 && level==4){                                                                      // ตรวจสอบเงื่อนไขว่าค่า age มากกว่า 60 หรือ level เท่ากับ 3 และ level เท่ากับ 4 หรือไม่
        printf("Age: %d | VIP Level: %d | Amount: %.2f THB\nDiscount received: 20%%\n\n",age,level,amount);   // ถ้าเงื่อนไขเป็นจริง แสดงผลข้อมูลลูกค้าและส่วนลด 20%
    }else if (age>=30 && age<=40 && amount>2000){                                                             // ตรวจสอบเงื่อนไขว่าค่า age อยู่ระหว่าง 30 ถึง 40 และ amount มากกว่า 2000 หรือไม่
        printf("Age: %d | VIP Level: %d | Amount: %.2f THB\nDiscount received: 15%%\n\n",age,level,amount);   // ถ้าเงื่อนไขเป็นจริง แสดงผลข้อมูลลูกค้าและส่วนลด 15%
    }else if (age>=18 && age<=25 && amount>1000){                                                             // ตรวจสอบเงื่อนไขว่าค่า age อยู่ระหว่าง 18 ถึง 25 และ amount มากกว่า 1000 หรือไม่
        printf("Age: %d | VIP Level: %d | Amount: %.2f THB\nDiscount received: 10%%\n\n",age,level,amount);   // ถ้าเงื่อนไขเป็นจริง แสดงผลข้อมูลลูกค้าและส่วนลด 10%
    }else if (level==5 || amount>50000){                                                                      // ตรวจสอบเงื่อนไขว่าค่า level เท่ากับ 5 หรือ amount มากกว่า 50000 หรือไม่
        printf("Age: %d | VIP Level: %d | Amount: %.2f THB\nDiscount received: 25%%\n\n",age,level,amount);   // ถ้าเงื่อนไขเป็นจริง แสดงผลข้อมูลลูกค้าและส่วนลด 25%
    }else{                                                                                                    // ถ้าเงื่อนไขก่อนหน้าเป็นเท็จ ให้ทำงานในส่วนนี้
        printf("No discount applied \n\n");                       // แสดงผลข้อความว่า ไม่มีส่วนลด
    }
    printf("Thank you for shopping with us!\n\n");                  // แสดงข้อความขอบคุณลูกค้า

    return 0;                                                       // คืนค่า 0 เพื่อบอกว่าการทำงานสำเร็จ
    
}