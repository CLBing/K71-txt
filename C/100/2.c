//题目：企业发放的奖金根据利润提成。
//利润(profit)低于或等于10万元时，奖金可提10%；
//利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可可提成7.5%；
//20万到40万之间时，高于20万元的部分，可提成5%；
//40万到60万之间时高于40万元的部分，可提成3%；
//60万到100万之间时，高于60万元的部分，可提成1.5%，高于100万元时，超过100万元的部分按1%提成，
//从键盘输入当月利润I，求应发放奖金总数？
//程序分析： 请利用数轴来分界，定位。注意定义时需把奖金定义成长整型。
#include<stdio.h>
#include<stdlib.h>
void main()
{
    long int profit;
    double bonus1,bonus2,bonus4,bonus6,bonus10,bonus;
    scanf("%ld", &profit);
    bonus1=100000*0.1;
    bonus2=bonus1+100000*0.075; 
    bonus4=bonus2+200000*0.05;
    bonus6=bonus4+200000*0.03;
    bonus10=bonus6+400000*0.015;
    if(profit<=100000)  //低于或等于10万元时,奖金可提10%
    bonus=profit*0.1;
        else
        if(profit<=200000)  //利润高于10万元，低于20万元时,低于10万元的部分按10%提成，高于10万元的部分，提成7.5%
        bonus=bonus1+(profit-100000)*0.075;
            else
            if(profit<=400000)  //20万到40万之间时，高于20万元的部分，提成5%
            bonus=bonus2+(profit-200000)*0.05;
                else
                if(profit<=600000)  //40万到60万之间时高于40万元的部分，可提成3%
                bonus=bonus4+(profit-400000)*0.03;
                    else
                    if(profit<=1000000) //60万到100万之间时，高于60万元的部分，可提成1.5%
                    bonus=bonus6+(profit-600000)*0.015;
                        else
                        bonus=bonus10+(profit-1000000)*0.01;    //高于100万元时，超过100万元的部分按1%提成
    printf("bonus=%f",bonus);
    system("pause");
}

/* void main()
{
    long int profit;
    double b1,b2,b4,b6,b10;
    double b;
    scanf("%ld",&profit);
    b1=100000*0.1;
    b2=b1+100000*0.075;
    b4=b2+200000*0.05;
    b6=b4+200000*0.03;
    b10=b6+400000*0.015;
    if(profit<=100000){
        b=profit*0.1;
    }else if(profit<=200000){
        b=b1+(profit-100000)*0.075;
    }else if(profit<=400000){
        b=b2+(profit-200000)*0.05;
    }else if(profit<=600000){
        b=b4+(profit-400000)*0.03;
    }else if(profit<=1000000){
        b=b6+(profit-600000)*0.015;
    }else{
        b=b10+(profit-1000000)*0.01;
    }
    printf("bonus=%2f",b);
    system("pause");
} */