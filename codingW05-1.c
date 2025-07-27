#include <stdio.h>

int main() {
    int num = 25;
    float pi = 3.14159;
    char ch = 'A';
    char str[] = "Hello";

    // แสดงค่าจากตัวแปร
    printf("Character: %c\n", ch);          // แสดงตัวอักษร
    printf("String: %s\n", str);            // แสดงข้อความ
    printf("Float: %f\n", pi);              // แสดงเลขทศนิยม
    printf("Hex: %x\n", num);               // แสดงเลขฐาน 16
    printf("Pointer address: %p\n", &num);  // แสดงตำแหน่งหน่วยความจำ

    // แสดงค่าคงที่โดยตรง (ไม่ได้รับจากตัวแปร)
    printf("Literal int: %d\n", 100);                   // แสดงจำนวนเต็มโดยตรง
    printf("Literal float: %.2f\n", 2.71828);           // แสดงเลขทศนิยมโดยตรง
    printf("Literal hex: %x\n", 255);                   // แสดงเลขฐาน 16 โดยตรง

    return 0;

    // แสดงข้อความที่มีเครื่องหมายคำพูด
    printf("Quoted String: \"Hello\"\n"); // แสดง "Hello"

    return 0; // Return 0 to indicate successful execution
}