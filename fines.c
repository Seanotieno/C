// calculating library fine rates
#include<stdio.h>
int calculatefine(int daysoverdue) {
    int finerate = 0;
     
     if (daysoverdue<=7){ 
         finerate = 20;
     }else if(daysoverdue<=14){
         finerate = 50;
     }else{
         finerate = 100;
     }
     return finerate;
     
}
   int main(){
       int bookID,dueDate,ReturnDate,daysoverdue;
       int finerate,fineamount;
       
       //input from the user
       printf("enter bookID:");
       scanf("%d",&bookID);
       
       printf("enter dueDate(in days):");
       scanf("%d",&dueDate);
       
       printf("enter ReturnDate(in days):");
       scanf("%d",&ReturnDate);
       
       daysoverdue=ReturnDate-dueDate;
       //  checking if the book was overdue
       if(daysoverdue<=0){
           printf("no fine.the book was returned in time.\n");
            return 0;
}
       fineamount=finerate * daysoverdue;
       
       printf("\nbookID:%d\n",bookID);
       printf("dueDate:%d\n",dueDate);
       printf("ReturnDate:%d\n",ReturnDate);
       printf("daysoverdue:%d",daysoverdue);
       printf("fine rate:ksh %d per day\n",finerate);
       printf("total fineamount:ksh %d\n",fineamount);
       
       return 0;
   }