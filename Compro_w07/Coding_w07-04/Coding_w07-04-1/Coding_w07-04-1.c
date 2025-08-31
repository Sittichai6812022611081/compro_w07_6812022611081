
//เขียนโปรแกรมโดยใช่ if-else

#include <stdio.h>                                                                      // ประกาศฟังก์ชันมาตรฐาน

int main(){                                                                             // ฟังก์ชันหลัก
    int level;
    printf("Enter membership level (1-4): ");                                           // แสดงข้อความให้ผู้ใช้กรอกระดับ
    scanf("%d",&level);                                                                 // รับค่าจำนวนเต็มจากผู้ใช้และเก็บในตัวแปร level

if (level == 1){                                                                        //ถ้า level เท่ากับ 1
        printf("Silver Member: 5%% discount\n");                                        // ถ้า level เท่ากับ 1 ให้แสดงข้อความ "Silver Member: 5% discount"
    }else if(level == 2){                                                               //ถ้า level เท่ากับ 2
        printf("Gold Member: 10%% discount + Reward points\n");                         // ถ้า level เท่ากับ 2 ให้แสดงข้อความ "Gold Member: 10% discount + Reward points"
    }else if (level == 3){                                                              //ถ้า level เท่ากับ 3
        printf("Platinum Member: 15%% dicount + Reward points + Birthday gift\n");      // ถ้า level เท่ากับ 3 ให้แสดงข้อความ "Platinum Member: 15% dicount + Reward points + Birthday gift"
    }else if (level == 4){                                                              //ถ้า level เท่ากับ 4
        printf("Diamond Member: ได้ทุกอย่าง + VIP events\n");                              // ถ้า level เท่ากับ 4 ให้แสดงข้อความ "Diamond Member: ได้ทุกอย่าง + VIP events"
    }else{                                                                              //ถ้า level ไม่เท่ากับ 1,2,3,4
        printf("Invalid membership level\n");                                           // ถ้า level ไม่ตรงกับกรณีใดๆ ให้แสดงข้อความ "Invalid membership level"
    }

    return 0;                                                                           // คืนค่า 0 เพื่อบอกว่าการทำงานสำเร็จ
}

   
    

