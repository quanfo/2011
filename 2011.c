//����͵�����׳˺������ɽ׳˱�//

#include<stdio.h>

double fact (int n);     //�Զ��庯������//

int main (void)

{
     int i,n;

     double result;

     printf ("Enter n:");        //������ʾ//


     scanf ("%d",&n );

     for (i=0; i<=n; i++){

        result=fact (i);

        printf ("%d!=% .0f\n",i,result);


     }
return 0;


}

double fact (int n)       //�����ײ�//
{

   int i;

   double product;        //���� product ���ڴ�Ž��//

   product =1;            //�ý׳�product�ĳ�ֵΪ1//

   for (i=1; i<=n; i++){

    product =product*i;

   }

    return product;       //���������//





}
















