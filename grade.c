// grading system
#include<stdio.h>
int main(){
    int maths,english,physics,average;
    
    printf("enter marks for maths,english and physics");
    scanf("%d%d%d",&maths,&english,&physics);
    
    average=(maths+english+physics)/3;
    
    if(average>=70){
        printf(" grade is A of %d",average);
        
    }
    else if(average>=60){
        printf("grade is B of %d",average);
    }
    
    else if (average>=50){
        printf("grade is c of %d",average);
    }
    
    else if(average>=40){
        printf("grade is D of %d",average);
    }
    else{
        printf("grade is E of %d",average);
    }
    
    return 0;
}