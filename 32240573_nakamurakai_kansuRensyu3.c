/* 作成日：2024/05/17        　*/
/* 作成者：中村快              */
/* 名称　：関数練習問題3　　　　　　*/
#include<stdio.h>

// 関数名：big_number(int型,int型)
// 概要：受け取った2つの引数の比較し大きい方を返す関数
int big_number(int a,int b){
    if(a >= b){
        return a;
    }else{
        return b;
    }
};

int main(void){
    int x,y,z;

    printf("xの整数を入力してください。＞");
    scanf("%d",&x);
    printf("yの整数を入力してください。＞");
    scanf("%d",&y);
    printf("zの整数を入力してください。＞");
    scanf("%d",&z);
    
    printf("%d と %d と %d で最も大きい数値は",x,y,z);
    if(big_number(x,y) == big_number(x,z)){
        printf(" %d です\n",x);
    }else if(big_number(y,x) == big_number(y,z)){
        printf(" %d です\n",y);
    }else{
        printf(" %d です\n",z);
    }
    
    return 0;
}