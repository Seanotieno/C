// c structures
#include <stdio.h>
#include<string.h>//string copy function
struct book{
    char title[30];
    char author[30];
    char ISBN[13];
    int year;
    float price;
    };
int main(){
   //struct book
   char title[30],author[30],ISBN[13];

   int year;
   float price;
   strcpy(title,"introduction to c programming");
   strcpy(author,"john smith");
   strcpy(ISBN,"978013110362");
   year=2022;
   
   price=49.99;
   
   printf("title:%s\n",title);
   printf("author:%s\n",author);
   printf("year:%d\n",year);
   printf("ISBN:%s\n",ISBN);
   printf("price:%f\n",price);
   
   return 0;
}   