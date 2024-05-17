/* 作成日：2024/05/16        　*/
/* 作成者：中村快              */
/* 名称　：練習問題5_ケース3　　*/
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
        printf("優\n");
    }else if(n >= 70){
        printf("良\n");
    }else if(n >= 60){
        printf("可\n");
    }else{
        printf("不可\n");
    }
    
    return 0;
}