/* 作成日：2024/05/15        　*/
/* 作成者：中村快              */
/* 名称　：練習問題3    　　　　*/
#include<stdio.h>

int main(void){
    int x,y;
    printf("xの数値を入力してください。＞");
    scanf("%d",&x);
    printf("yの数値を入力してください。＞");
    scanf("%d",&y);

    printf("大きい方の数値は ");
    if(x > y){
        printf("%d\n",x);
    }else if(x < y){
        printf("%d\n",y);
    }
    
    return 0;
}