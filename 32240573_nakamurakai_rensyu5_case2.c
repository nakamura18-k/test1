/* 作成日：2024/05/15        　*/
/* 作成者：中村快              */
/* 名称　：練習問題5_ケース2　　*/
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
    
    if(n >= 80){
        printf("たいへんよくできました。\n");
    }else if(n >= 60){
        printf("よくできました。\n");
    }else{
        printf("ざんねんでした。\n");
    }
    
    return 0;
}