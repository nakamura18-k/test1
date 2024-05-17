/* 作成日：2024/05/17        　*/
/* 作成者：中村快              */
/* 名称　：関数練習問題1　　　　　　*/
#include<stdio.h>

// 関数名：square(int型)
// 概要：受け取った引数を2乗して返す関数
int square(int n){
    return n * n;
};

int main(void){
    int n;
    
    printf("数値を入力してください。＞");
    scanf("%d",&n);
    printf("%d の2乗は %d です\n",n ,square(n));
    return 0;
}