/* 作成日：2024/05/16        　*/
/* 作成者：中村快              */
/* 名称　：練習問題6　　　　　　*/
#include<stdio.h>

int main(void){
    int d,t;
    while (1){
        printf("0=日曜、1=月曜、2=火曜、3=水曜、4=木曜、5=金曜、6=土曜\n曜日の数値を入力してください。＞");
        scanf("%d",&d);
        if(d >= 0 && d <= 6){
            break;;
        }
        printf("数値は0~6の間にしてください。\n");
    }
    while (1)
    {
        printf("0=午前、1=午後、2=夜間\n時間帯の数値を入力してください。＞");
        scanf("%d",&t);
        if(t >= 0 && t <= 2){
            break;;
        }
        printf("数値は0~2の間にしてください。\n");
    }
    
    
    if(d == 0 || (d == 2 && t == 0) || (d == 3 && t == 2) || (d == 5 && t == 0) || (d == 6 && t == 1) || (d == 6 && t == 2)){
        printf("休診です。\n");
    }else{
        printf("開いています。\n");
    }
    
    return 0;
}