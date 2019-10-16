//定义和调用求阶乘函数生成阶乘表//

#include<stdio.h>

double fact (int n);     //自定义函数声明//

int main (void)

{
     int i,n;

     double result;

     printf ("Enter n:");        //输入提示//


     scanf ("%d",&n );

     for (i=0; i<=n; i++){

        result=fact (i);

        printf ("%d!=% .0f\n",i,result);


     }
return 0;


}

double fact (int n)       //函数首部//
{

   int i;

   double product;        //变量 product 用于存放结果//

   product =1;            //置阶乘product的初值为1//

   for (i=1; i<=n; i++){

    product =product*i;

   }

    return product;       //将结果返回//





}
















