


#include<stdio.h>

int Addition(int No1, int No2)
{
    int Sum =0;
    Sum = No1 + No2;
    return  Sum;
}

int main()
{


    int Value1 = 10;
    int Value2 = 11;
    int Ans = 0;

    Ans = Addition(Value1,Value2);

    printf("Addition  is : %d\n",Ans);



    return 0;

}