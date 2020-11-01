#include <stdio.h>
#include <stdlib.h>
#define sum 10
#define total 11

int NO[total];
int ElectiveScore[total];//选修课成绩
int ExperimentalScores[total];//实验课成绩
int CompulsoryScores[total];//必修课成绩
int weight1,weight2,weight3;//定义三种成绩的权重
int OverallRating[total];//定义综合评分
char OvGrade[total];//定义总评等级5

void menu(){
    system("cls");
    printf("\t\t|-------------Menu of the score management system-------------|\n");
    printf("\t\t|        0   Exit                                             |\n");
    printf("\t\t|        1   Add record                                       |\n");
    printf("\t\t|        2   Search record                                    |\n");
    printf("\t\t|        3   Delete record                                    |\n");
    printf("\t\t|        4   Modify record                                    |\n");
    printf("\t\t|        5   Show all records in given order                  |\n");
    printf("\t\t|-------------------------------------------------------------|\n");
    printf("\n\t\tPlease enter your choice (0-5): ");
}
int main()
{
    int weight1,weight2,weight3;

     printf("Firstly,please decide the weights(percentage) of three kinds of scores:\n");
        scanf("%d%d%d",&weight1,&weight2,&weight3);
        menu();

        printf("Call the function1 to add a record.\n");
        char names[sum];
    int i;
    int n;
    for (i=1;i<total;i++){
        n=i-1;
        NO[n]=i;
        scanf("%s%d%d%d",names,&ElectiveScore[n],&ExperimentalScores[n],&CompulsoryScores[n]);
        OverallRating[n]=ElectiveScore[n]*weight1/100.00+ExperimentalScores[n]*weight2/100.00+ExperimentalScores[n]*weight3/100.00;
        if(OverallRating[n]>=90)
            OvGrade[n]='A';
        else if(OverallRating[n]>=80)
            OvGrade[n]='B';
        else if(OverallRating[n]>=70)
            OvGrade[n]='C';
        else if(OverallRating[n]>=60)
            OvGrade[n]='D';
        else
            OvGrade[n]='E';
        printf("%s--%d--%c\n",names,NO[n],OvGrade[n]);
    }
        printf("\n\n");

         int j,k;
    for(i=0;i<total;i++)
    {
        for(j=0;j<total-1-i;j++)
        {
            if(OverallRating[j]<OverallRating[j+1])
            {
               k=OverallRating[j],OverallRating[j]=OverallRating[j+1],OverallRating[j+1]=k;


            }
            else {
                break;
            }
        }
        printf("%d\n",OverallRating[i]);
    }





    for(i=0;i<total;i++){

          if(OvGrade[i]=='A'){
        printf(" level A:");
        printf(" %13d",OverallRating[i]);
        continue;}

          if(OvGrade[i]=='B'){
         printf("\n level B:");
        printf(" %13d\n",OverallRating[i]);
        continue;}

          if(OvGrade[i]=='C'){
        printf("\n level C:");
        printf(" %13d\n",OverallRating[i]);

        continue;}

          if(OvGrade[i]=='D'){
        printf("\n level D:");
        printf(" %13d\n",OverallRating[i]);
        continue;}

          if(OvGrade[i]=='E'){
        printf("\n level E:");
        printf(" %13d\n",OverallRating[i]);
        continue;}
    }

    return 0;
}
