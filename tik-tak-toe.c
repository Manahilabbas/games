#include<stdio.h>
#include <conio.h>
#include <stdlib.h>
void grid(char arr[9],int re);
int main(){
    char arr[9]={'1','2','3','4','5','6','7','8','9'};
    int n;
    int p=1;
    while(1){
    int re;
      p=(p%2==0)?2:1;
      
     grid( arr,re);
     printf("***player %d turn***\n",p);
     re=0;
     n=getch()-'0';
     if(arr[n-1]=='0'||arr[n-1]=='X'||n>9)
     { re=1;
     continue;}
     int flag=0;
     char c=(p%2==0)?'0':'X';
     arr[n-1]=c;
     for(int i=0;i<9;i++){
        if(arr[i]!=i+1+'0')
        flag++;
     }
     if((arr[0]==arr[1]&&arr[1]==arr[2])||(arr[3]==arr[4]&&arr[4]==arr[5])||(arr[6]==arr[7]&&arr[7]==arr[8])||(arr[0]==arr[4]&&arr[4]==arr[8])||(arr[2]==arr[4]&&arr[4]==arr[6]))
     {grid(arr,re);
     printf("***player %d won***",p);
        break;}
         if((arr[0]==arr[3]&&arr[3]==arr[6])||(arr[1]==arr[4]&&arr[4]==arr[7])||(arr[2]==arr[5]&&arr[5]==arr[8]))
     {grid(arr,re);
     printf("***player %d won***",p);
        break;}
        else if(flag==9){
            grid(arr,re);
     printf("***game tie***\n");
        break;
        }
     p++;}


   
   
    return 0;
}

void grid(char arr[9],int re){
    system("cls");

    printf("|     |     |     |\n");
    printf("|  %s%c%s  |  %s%c%s  |  %s%c%s  |\n",
           (arr[0] == '0') ? RED : (arr[0] == 'X') ? BLUE : "", arr[0], RESET,
           (arr[1] == '0') ? RED : (arr[1] == 'X') ? BLUE : "", arr[1], RESET,
           (arr[2] == '0') ? RED : (arr[2] == 'X') ? BLUE : "", arr[2], RESET);
    printf("|-----|-----|-----|\n");
    printf("|     |     |     |\n");
    printf("|  %s%c%s  |  %s%c%s  |  %s%c%s  |\n",
           (arr[3] == '0') ? RED : (arr[3] == 'X') ? BLUE : "", arr[3], RESET,
           (arr[4] == '0') ? RED : (arr[4] == 'X') ? BLUE : "", arr[4], RESET,
           (arr[5] == '0') ? RED : (arr[5] == 'X') ? BLUE : "", arr[5], RESET);
    printf("|-----|-----|-----|\n");
    printf("|     |     |     |\n");
    printf("|  %s%c%s  |  %s%c%s  |  %s%c%s  |\n",
           (arr[6] == '0') ? RED : (arr[6] == 'X') ? BLUE : "", arr[6], RESET,
           (arr[7] == '0') ? RED : (arr[7] == 'X') ? BLUE : "", arr[7], RESET,
           (arr[8] == '0') ? RED : (arr[8] == 'X') ? BLUE : "", arr[8], RESET);
    printf("|     |     |     |\n");

    if(re==1) printf(" %sRetry!!!%s\n",RED,RESET);
}
