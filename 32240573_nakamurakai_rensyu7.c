/* 作成日：2024/05/16        　*/
/* 作成者：中村快              */
/* 名称　：練習問題7　　　　　　*/
#include<stdio.h>

int main(void){
    int m;
    while (1){
        printf("月を表す数値を入力してください。＞");
        scanf("%d",&m);
        if(m >= 1 && m <= 12){
            break;;
        }
        printf("数値は1~12の間にしてください。\n");
    }

    printf("%d月の祝日は以下の通りです。\n",m);
    switch (m)
    {
        case 1: printf("元日、成人の日"); break;
        case 2: printf("建国記念の日"); break;
        case 3: printf("春分の日"); break;
        case 4: printf("昭和の日"); break;
        case 5: printf("憲法記念日、みどりの日、こどもの日"); break;
        case 7: printf("海の日"); break;
        case 9: printf("敬老の日、秋分の日"); break;
        case 10: printf("体育の日"); break;
        case 11: printf("文化の日、勤労感謝の日"); break;
        case 12: printf("天皇誕生日"); break;
    }
    
    return 0;
}