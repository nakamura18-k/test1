/*                               */
/*       Cプログラムのサンプル     */
/*                               */
#include<stdio.h>

int main(void){
    int ten;
    printf("点数を入力してください。＞");
    scanf("%d",&ten);

    if(ten >= 60){
        printf("合格です。\n");
        printf("おめでとう！\n");
    }else{
        printf("不合格です。\n");
        printf("もっと勉強しましょう。\n");
    }

    printf("次の試験は来週の水曜日です。\n");
    
    return 0;
}