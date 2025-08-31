
//เขียนโปรแกรมโดยใช้ switch-case

#include <stdio.h>                                  // ประกาศฟังก์ชันมาตรฐาน

int main(){                                         // ฟังก์ชันหลัก
    int level;                                      // ประกาศตัวแปรเก็บจำนวนเต็ม level
    printf("Enter membership level (1-4): ");       // แสดงข้อความให้ผู้ใช้กรอกระดับ
    scanf("%d",&level);                             // รับค่าจำนวนเต็มจากผู้ใช้และเก็บในตัวแปร level
    
  switch(level){                                                                                // ตรวจสอบค่า level ด้วยคำสั่ง switch
        case 1: printf("Silver Member: 5%% discount\n");                                        // ถ้า level เท่ากับ 1 ให้แสดงข้อความ "Silver Member: 5% discount"
        break;                                                                                  // ออกจากคำสั่ง switch
        case 2: printf("Gold Member: 10%% discount + Reward points\n");                         // ถ้า level เท่ากับ 2 ให้แสดงข้อความ "Gold Member: 10% discount + Reward points"
        break;                                                                                  // ออกจากคำสั่ง switch
        case 3: printf("Platinum Member: 15%% dicount + Reward points + Birthday gift\n");      // ถ้า level เท่ากับ 3 ให้แสดงข้อความ "Platinum Member: 15% dicount + Reward points + Birthday gift"
        break;                                                                                  // ออกจากคำสั่ง switch
        case 4: printf("Diamond Member: ได้ทุกอย่าง + VIP events\n");                              // ถ้า level เท่ากับ 4 ให้แสดงข้อความ "Diamond Member: ได้ทุกอย่าง + VIP events"
        break;                                                                                  // ออกจากคำสั่ง switch
        default: printf("Invalid membership level\n");                                           // ถ้า level ไม่ตรงกับกรณีใดๆ ให้แสดงข้อความ "Invalid membership level"
        break;                                                                                  // ออกจากคำสั่ง switch
    }
    return 0;                                       // คืนค่า 0 เพื่อบอกว่าการทำงานสำเร็จ

}

//สรุป

//เมื่อเปลี่ยบเทียบกับโปรแกรมใน Coding_w07-04-1.c จะเห็นได้ว่าโปรแกรมการทำงานเหมือนกันทุกประการแต่ใช้โครงสร้างการควบคุมที่ต่างกัน

//โปรแกรมใน Coding_w07-04-1.c ใช้ if-else ในการตรวจสอบเงื่อนไข 
//ข้องดี คือ สามารถตรวจสอบเงื่อนไขที่ซับซ้อนได้ เช่น การเปรียบเทียบช่วงของค่า หรือการตรวจสอบเงื่อนไขที่ไม่ใช่ค่าคงที่
//ข้อเสีย คือ ถ้ามีเงื่อนไขหลายๆเงื่อนไขจะทำให้โค้ดยาวและอ่านยากขึ้น เช่นเดียวกับกรณีนี้ที่มีการตรวจสอบค่า level ที่เป็นค่าคงที่ 1,2,3,4

//โปรแกรมใน Coding_w07-04-2.c ใช้ switch-case ในการตรวจสอบเงื่อนไข 
//ข้อดี คือ โค้ดจะกระชับและอ่านง่ายเมื่อมีการตรวจสอบค่าคงที่หลายๆค่า เช่นเดียวกับกรณีนี้ที่มีการตรวจสอบค่า level ที่เป็นค่าคงที่ 1,2,3,4
//ข้อเสีย คือ ไม่สามารถตรวจสอบเงื่อนไขที่ซับซ้อนได้ เช่น การเปรียบเทียบช่วงของค่า หรือการตรวจสอบเงื่อนไขที่ไม่ใช่ค่าคงที่

//จากโจทย์ที่ให้มา คำสั่ง switch-case ดูเหมาะสมกว่า คำสั่ง if-else เพราะมีการตรวจสอบค่า level ที่เป็นค่าคงที่ 1,2,3,4 ซึ่งทำให้โค้ดดูกระชับและอ่านง่ายกว่า
