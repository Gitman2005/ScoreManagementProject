#include <stdio.h>
#include <stdlib.h>
#define total 3//ѧ������������һ��ȫ��
#define sum 10//ѧ����������󳤶�

void menu();
void operation1();//ѧ����Ϣ¼�루Ŀǰ��ִ�еĹ��ܣ�
void operation2();
void operation3();
void operation4();
void operation5();
void starbar(void);

int NO[total];//����ѧ��
int ElectiveScore[total];//ѡ�޿γɼ�
int ExperimentalScores[total];//ʵ��γɼ�
int CompulsoryScores[total];//���޿γɼ�
int weight1,weight2,weight3;//�������ֳɼ���Ȩ��
int OverallRating[total];//�����ۺ�����
char OvGrade[total];//���������ȼ�

int main(void)
{
    int choice;
    printf("Firstly,please decide the weights(percentage) of three kinds of scores:\n");
    scanf("%d%d%d",&weight1,&weight2,&weight3);
    printf("Call the function1 to add record.\n");
    operation1();

    do{
        menu();
        scanf("%d",&choice);
        printf("\n\n");
        switch(choice)
        {
        case 0: printf("Thank you. Exiting...\n");
                break;
        case 2: printf("Call the function2 to search the given record.\n");//����ѧ����Ϣ
                int f=operation2();
                if(f=-1){
                    printf("NO ANSWER!");
                }
                else{
                    printf("%10s"names[mid][20]);
                }
                starbar();
                break;
        case 3: printf("Call the function3 to delete the given record.\n");//ɾ��ѧ����Ϣ
                operation3();
                starbar();
                break;
        case 4: printf("Call the function4 to modify the given record.\n");//�޸�ѧ����Ϣ
                operation4();
                starbar();
                break;
        case 5: printf("Call the function5 to show all records in order.\n");//ѧ����Ϣͳ������ʾ
                operation5();
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

void operation1()
{
    char names[total][sum];
    int i;
    int n;
    for (i=1;i<total;i++){
        n=i-1;
        NO[n]=i;
        scanf("%s%d%d%d",names[n][sum],&ElectiveScore[n],&ExperimentalScores[n],&CompulsoryScores[n]);
        OverallRating[n]=ElectiveScore[n]*weight1/100.0+ExperimentalScores[n]*weight2/100.0+ExperimentalScores[n]*weight3/100.0;
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
        printf("%s--%d--%c\n",names[n][sum],NO[n],OvGrade[n]);
    }
}
int operation2(){
    int k;
    scanf("%d",&k);
    while(grade[min][3]<=grade[max][3]){
        max=0;
        min=N-1;
        mid=(N-1)/2;
        if((k>grade[max][3])||(k<grade[min][3])){
            return -1;
        }
        else if(k>grade[mid][3]){
            min=mid-1;
        }
        else if(k<grade[mid][3]){
            max=mid+1;
        }
        else{
            return 1;
        }
    }
}
void operation2(char names[][20],float OverallRating[N][4])
{
    int grade;
    scanf("%d",&grade);
    for(int i=0;i<(N-1);i++){
        if(OverallRating[i][3]==grade)
            printf("%s",names[i][20]);
        else continue;
    }return 0;

}
