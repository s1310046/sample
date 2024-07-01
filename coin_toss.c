#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//関数のプロトタイプ宣言
char* toss_coin();
void print_results(int heads_count,int tails_count);

int main()
{
    int heads_count = 0;
    int tails_count = 0;

    srand(time(NULL));

    printf("Tossing a coin...\n");
    for(int i=1;i<=3;i++){
        char* result = toss_coin();
        printf("Round %d: %s\n",i,result);
        if(result[0]=='H'){
            heads_count++;
        }else{
            tails_count++;
        }
    }

    print_results(heads_count,tails_count);

    return 0;
}

//コイントスを模倣する関数
char* toss_coin(){
    return rand()%2 == 0 ? "Heads":"Tails";
}

//結果を表示する関数
void print_results(int heads_count,int tails_count){
    printf("Heads: %d,Tails: %d\n",heads_count,tails_count);
}