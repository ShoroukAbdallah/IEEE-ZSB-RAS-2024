#include <stdio.h>
#include <stdlib.h>


//------------------------------------------Assignment_1----------------------------
//------------------------------------------problem_1-------------------------------

//int main()
//{
//
//    int *ptr_1;
//    char *ptr_2;
//    long long *ptr_3;
//
//    printf("*ptr_1 = 0x%X\n",ptr_1 );
//    printf("*ptr_2 = 0x%X\n",ptr_2 );
//    printf("*ptr_3 = 0x%X\n",ptr_3 );
//    ptr_1++;
//    ptr_2++;
//    ptr_3++;
//
//    printf("*ptr_1++ = 0x%X\n",ptr_1 );
//    printf("*ptr_2++ = 0x%X\n",ptr_2 );
//    printf("*ptr_3++ = 0x%X\n",ptr_3 );
//
//    return 0;
//}



//------------------------------------------problem_2-------------------------------
//int main()
//{
//
//     int X = 0x332211;
//     int *ptr= &X;
//     printf("*ptr++ = 0x%X\n", *ptr++ );
//     printf("*++ptr = 0x%X\n", *++ptr );
//     printf("++*ptr = 0x%X\n", ++*ptr );
//
//    return 0;
//}






//------------------------------------------Assignment_2----------------------------
//------------------------------------------problem_1-------------------------------

//void increment(int *ptr)
//{
//    (*ptr)++;
//}
//
//int main() {
//    int num = 5;
//    printf("value= %d\n", num);
//    void (*increment_ptr)(int *) = increment;
//    increment(&num);
//    printf("Incremented value= %d\n", num);
//
//    return 0;
//}





//------------------------------------------problem_2------------------------------
//int main()
// {
//    int arr[] = {2, 6, 9, 8, 5, 6};
//    int size = sizeof(arr) / sizeof(arr[0]);
//
//    int *ptr = arr;
//
//    printf("Array elements\n");
//    for (int i = 0; i < size; i++)
//    {
//        printf("%d ", *(ptr + i));
//    }
//    printf("\n");
//
//return 0;
//}












