/* 作成日：2024/05/15        　*/
/* 作成者：中村快              */
/* 名称　：練習問題5_ケース1　　*/
#include<stdio.h>

int main(void){
    int n;
    while (1){
        printf("数値を入力してください。＞");
        scanf("%d",&n);
        if(n >= 0 && n <= 100){
            break;;
        }
        printf("数値は0~100の間にしてください。\n");
    }    
    
    if(n >= 60){
        printf("合格\n");
    }else{
        printf("不合格\n");
    }
    
    return 0;
}