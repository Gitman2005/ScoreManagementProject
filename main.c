#include <stdio.h>
#include <stdlib.h>

int operation2();
int main()
{
    int grade[][4];
    int names[][];
    int f=opration2();
    if(f=-1){
        printf("NO ANSWER");
    }
    else{
        printf("%10s"names[mid][20]);
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
