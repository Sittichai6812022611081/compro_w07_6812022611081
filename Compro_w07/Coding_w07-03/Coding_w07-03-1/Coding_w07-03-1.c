
//โปรแกรมเดิมแต่ถูกแก้ไขให้ถูกต้องแล้ว

#include <stdio.h>                              // ประกาศฟังก์ชันมาตรฐาน

int main(){                                     // ฟังก์ชันหลัก
    int level;                                  // ประกาศตัวแปรเก็บจำนวนเต็ม level
    printf("Enter level (1-4): ");              // แสดงข้อความให้ผู้ใช้กรอกระดับ
    scanf("%d", &level);                        // รับค่าจำนวนเต็มจากผู้ใช้และเก็บในตัวแปร level

    switch (level){                             // ตรวจสอบค่า level ด้วยคำสั่ง switch
        case 1: printf("Beginner\n");           // ถ้า level เท่ากับ 1 ให้แสดงข้อความ "Beginner"
        break;                                  // ออกจากคำสั่ง switch
        case 2: printf("Intermediate\n");       // ถ้า level เท่ากับ 2 ให้แสดงข้อความ "Intermediate"
        break;                                  // ออกจากคำสั่ง switch
        case 3: printf("Advanced\n");           // ถ้า level เท่ากับ 3 ให้แสดงข้อความ "Advanced"
        break;                                  // ออกจากคำสั่ง switch
        case 4: printf("Expert\n");             // ถ้า level เท่ากับ 4 ให้แสดงข้อความ "Expert"
        break;                                  // ออกจากคำสั่ง switch
        default: printf("Invalid level\n");     // ถ้า level ไม่ตรงกับกรณีใดๆ ให้แสดงข้อความ "Invalid level"

    }
    return 0;                                   // คืนค่า 0 เพื่อบอกว่าการทำงานสำเร็จ
}
//เมื่อทำการrun แล้วรับค่า level = 1,2,3,4,0,10 และแสดงผลลัพธ์ทีละตัว จะเห็นได้ว่า level = 1,2,3,4 แสดงผลลัพธ์ถูกต้องตามเงื่อนไขที่กำหนดไว้
//แต่ level = 0,10 แสดงผลลัพธ์เป็น Invalid level เพราะ ไม่ตรงกับเงื่อนไข case ใดๆเลย จึงทำงานในส่วนของ default
//กรณีที่เข้าเงื่อนไข case ใดๆแล้วจะทำงานในส่วนของ case นั้นๆและจะออกจากคำสั่ง switch ทันทีเมื่อเจอคำสั่ง break;
//ส่วนกรณีที่ไม่เข้าเงื่อนไข case ใดๆเลยจะทำงานในส่วนของ default แทน
//ความหมายของ defalt คือ กรณีที่ไม่ตรงกับเงื่อนไขใดๆจะถูกเลือกทำงานในส่วนนี้
//ถ้าขาด break; จะทำให้โปรแกรมทำงานผิดพลาดได้ เช่น level = 1 จะทำงานแสดงผลลัพธ์เป็น Beginner
//แล้วจะทำงานต่อไปเรื่อยๆจนถึง case 4 จะทำให้แสดงผลลัพธ์เป็น Beginner Intermediate Advanced Expert Invalid level