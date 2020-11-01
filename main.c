#include <stdio.h>
#include <stdlib.h>
#define total 4
#define sum 10

void menu();
void operation1();
void operation2();
void operation3();
void operation4();
void operation5();
void starbar(void);

int NO[total];
int ElectiveScore[total];//选修课成绩
int ExperimentalScores[total];//实验课成绩
int CompulsoryScores[total];//必修课成绩
int weight1,weight2,weight3;//定义三种成绩的权重
int OverallRating[total];//定义综合评分
char OvGrade[total];//定义总评等级

int main(void)
{
        printf("Firstly,please decide the weights(percentage) of three kinds of scores:\n");
        scanf("%d%d%d",&weight1,&weight2,&weight3);

    char names[4][10]={0};
    int i;
    int n;
    for (i=0;i<total;i++){
        n=i;
        NO[n]=i;
        scanf("%s%d%d%d",&names[n][10],&ElectiveScore[n],&ExperimentalScores[n],&CompulsoryScores[n]);
        OverallRating[n]=ElectiveScore[n]*weight1/100+ExperimentalScores[n]*weight2/100+ExperimentalScores[n]*weight3/100;
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
        printf("%s--%d--%c\n",names[n][10],NO[n],OvGrade[n]);
        }

    int choice;

    do{

        menu();
        scanf("%d",&choice);
        printf("\n\n");
        switch(choice)
        {
        case 0: printf("Thank you. Exiting...\n");
                break;

        case 2: printf("Call the function2 to search the given record.\n");//查找学生信息
                starbar();
                break;
        case 3: printf("Call the function3 to delete the given record.\n");//删除学生信息
                starbar();
                break;
        case 4: printf("Call the function4 to modify the given record.\n");//修改学生信息
                starbar();
                break;
        case 5: printf("Call the function5 to show all records in order.\n");//学生信息统计与显示
                starbar();
                break;
        default: printf("No such choice. Please enter a right choice (0-5)!\n");
        }
            if(choice)
            printf("\n\nPress any key to continue.");
        getch();
    }while(choice);

    return 0;
}

void menu(){
    system("cls");
    printf("\t\t|-------------Menu of the score management system-------------|\n");
    printf("\t\t|        0   Exit                                             |\n");
    printf("\t\t|        2   Search record                                    |\n");
    printf("\t\t|        3   Delete record                                    |\n");
    printf("\t\t|        4   Modify record                                    |\n");
    printf("\t\t|        5   Show all records in given order                  |\n");
    printf("\t\t|-------------------------------------------------------------|\n");
    printf("\n\t\tPlease enter your choice (0-5): ");
}
void starbar(void)
{
    int count;
    putchar('\n');
    for(count=1;count<=50;count++)
        putchar('*');
    putchar('\n');
}



