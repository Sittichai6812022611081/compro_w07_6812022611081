
//เขียนโปรแกรมเวอร์ชันอัปเดรต

#include <stdio.h>                                              // ประกาศฟังก์ชันมาตรฐาน

int main(){                                                     // ฟังก์ชันหลัก
    int level;                                                  // ประกาศตัวแปรเก็บจำนวนเต็ม level
    printf("Enter level (1-4): ");                              // แสดงข้อความให้ผู้ใช้กรอกระดับ
    scanf("%d", &level);                                        // รับค่าจำนวนเต็มจากผู้ใช้และเก็บในตัวแปร level

    if (level <= 0){                                            // ตรวจสอบเงื่อนไขว่าค่า level น้อยกว่าหรือเท่ากับ 0 หรือไม่
        printf("The level below 1 is not allowed\n");           // ถ้าเงื่อนไขเป็นจริง แสดงผลข้อความว่า level ต่ำกว่า 1 ไม่ได้รับอนุญาต
    }else if (level > 4){                                       // ตรวจสอบเงื่อนไขว่าค่า level มากกว่า 4 หรือไม่
        printf("The level above 4 is not allowed\n");           // ถ้าเงื่อนไขเป็นจริง แสดงผลข้อความว่า level สูงกว่า 4 ไม่ได้รับอนุญาต
    }else{                                                      // ถ้าเงื่อนไขก่อนหน้าเป็นเท็จ ให้ทำงานในส่วนนี้
        switch (level){                                         // ตรวจสอบค่า level ด้วยคำสั่ง switch
        case 1: printf("Beginner\n");                           // ถ้า level เท่ากับ 1 ให้แสดงข้อความ "Beginner"
        break;                                                  // ออกจากคำสั่ง switch
        case 2: printf("Intermediate\n");                       // ถ้า level เท่ากับ 2 ให้แสดงข้อความ "Intermediate"
        break;                                                  // ออกจากคำสั่ง switch
        case 3: printf("Advanced\n");                           // ถ้า level เท่ากับ 3 ให้แสดงข้อความ "Advanced"
        break;                                                  // ออกจากคำสั่ง switch
        case 4: printf("Expert\n");                             // ถ้า level เท่ากับ 4 ให้แสดงข้อความ "Expert"
        break;                                                  // ออกจากคำสั่ง switch
    }
    }
    return 0;                                                   // คืนค่า 0 เพื่อบอกว่าการทำงานสำเร็จ
}

//ผลที่เกิดขึ้นในกรณี level ด้วย -4,0,1,2,3,4,100
//level = -4 แสดงผลลัพธ์เป็น The level below 1 is not allowed เพราะ เข้าเงื่อนไข if (level <= 0) เป็นจริง
//level = 0 แสดงผลลัพธ์เป็น The level below 1 is not allowed เพราะ เข้าเงื่อนไข if (level <= 0) เป็นจริง
//level = 1 แสดงผลลัพธ์เป็น Beginner เพราะ ไม่เข้าเงื่อนไข if (level <= 0) และ else if (level > 4) เป็นเท็จ จึงทำงานในส่วนของ else และเข้าเงื่อนไข case 1
//level = 2 แสดงผลลัพธ์เป็น Intermediate เพราะ ไม่เข้าเงื่อนไข if (level <= 0) และ else if (level > 4) เป็นเท็จ จึงทำงานในส่วนของ else และเข้าเงื่อนไข case 2
//level = 3 แสดงผลลัพธ์เป็น Advanced เพราะ ไม่เข้าเงื่อนไข if (level <= 0) และ else if (level > 4) เป็นเท็จ จึงทำงานในส่วนของ else และเข้าเงื่อนไข case 3
//level = 4 แสดงผลลัพธ์เป็น Expert เพราะ ไม่เข้าเงื่อนไข if (level <= 0) และ else if (level > 4) เป็นเท็จ จึงทำงานในส่วนของ else และเข้าเงื่อนไข case 4
//level = 100 แสดงผลลัพธ์เป็น The level above 4 is not allowed เพราะ เข้าเงื่อนไข else if (level > 4) เป็นจริง