/* 作成日：2024/05/15        　*/
/* 作成者：中村快              */
/* 名称　：練習問題2    　　　　*/
#include<stdio.h>

int main(void){
    int x,y;
    printf("xの数値を入力してください。＞");
    scanf("%d",&x);
    printf("yの数値を入力してください。＞");
    scanf("%d",&y);

    if(x > y){
        printf("xはyより大きい\n");
    }else if(x < y){
        printf("xはyより小さい\n");
    }
    
    return 0;
}