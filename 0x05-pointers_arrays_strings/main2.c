#include <stdio.h>

int main(void)
{
        char *p;
        char a = 's';

        p = &a;

        printf("%lu\n", sizeof(char));
        printf("%lu\n", sizeof(p));
        /**print the value of memory address*/
        printf("%c\n", *p);
        printf("%c\n", a);
        /** print the memory location in itself*/
        printf("%p\n", &a);
        /** change the value of memory location*/
        *p = 'k';
        printf("%c\n", *p);
        /**Arrays*/
        int num[] = {4, 5, 8};
        /**indexes is how we use to access to any elem of array*/
        /** print the sec ele of num array*/
        printf("%d\n", num[1]);
        /**print the addres of num array*/
        printf("%p\n", num);
        /**print the memory address of the third ele*/
        printf("%p\n", &num[2]);

        char c[] = {'a', 'b', 'c', 'd'};
        printf("%c\n", c[0]);
        printf("%p\n", c);
        /*stor the memory  address of the array ina pointer*/
        char *ch;
        ch = c;
        /*now u can access to the elem in array by the pointer or by the index with variable*/
        printf("%c\n", *ch); /**'a'*/
        printf("%c\n", *(ch + 1)); /**'b'*/

        char name[] = "shahd";
        printf("%c\n", name[0]); /**s*/
        char *sh;
        sh = name;
        printf("%c\n", *sh); /**s*/
        printf("%s\n", name);
}
