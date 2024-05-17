/* 作成日：2024/05/17        　*/
/* 作成者：中村快              */
/* 名称　：関数練習問題2　　　　　　*/
#include<stdio.h>

// 関数名：ave(int型)
// 概要：受け取った2つの引数の平均（小数点以下は切り捨て）を返す関数
int ave(int a,int b){
    return (a + b)/2;
};

int main(void){
    int a,b;
    
    printf("1つ目の整数を入力してください。＞");
    scanf("%d",&a);
    printf("2つ目の整数を入力してください。＞");
    scanf("%d",&b);
    printf("%d と %d の平均は %d です\n",a ,b ,ave(a,b));
    return 0;
}