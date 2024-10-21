//library system using functions
#include<stdio.h>

int fine(int daysoverdue,int finerate){
    int finecharged=daysoverdue*finerate;
    return finecharged;
}
int main(){
    int duedate,returndate,finerate,fineamount;
    char bookid;
    
    printf("enter bookid,duedate and returndate");
    scanf("%s%d%d",&bookid,&duedate,&returndate);
    
    int daysoverdue =returndate-duedate;
    if (daysoverdue>0 &&daysoverdue<=7){
        finerate=20;
        fineamount=(daysoverdue,finerate);
    }
    else if(daysoverdue<=14 &&daysoverdue>7){
        finerate=50;
        fineamount=(daysoverdue*finerate);
    }
    else if (daysoverdue>14){
        finerate=100;
        fineamount=(daysoverdue*finerate);
    }
    else{
        finerate=0;
        fineamount=(daysoverdue*finerate);
    }
    
    printf("The bookid is %s\nthe duedate was %d\nthe returndate was %d\n the days overdue were %d\n");
    return 0;
}