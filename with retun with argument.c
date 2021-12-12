#include<stdio.h>
#include<conio.h>
int aofr(int a, int b )
{
int area;
area = a*b;
return area;	
}
int pofr(int x, int y)
{
int p;
p=2*x+2*y;
return p;	
	
}
float aofc(int r)
{
float pie=3.14;
float area;
area=pie*r*r;
return area;
	
}
float pofc(int r)
{
int p;
float pie=3.14;
p=2*pie*r;
return p;	
}
int main(){


int a1,p1,f,h,cost,price; // cost is the price of fencing the rectangle ground by the wire
printf("enter the length and breth of rec\n");
scanf("%d%d",&f,&h);
a1=aofr(f,h);
p1=pofr(f,h);

printf("area of the rectangle is %d\n",a1);
printf("perimeter of the rectangle is %d\n",p1);
printf("choose the price for fencing from 11 and 23 rupees\n");// there are two price 11 and 23 rupees per unit;
scanf("%d",&cost);
if(cost==11||cost==23);
 {
 	price=cost*a1;
 	printf("price after the fencing is %d\n",price);
	
}
float a2,p2;
int k;
int pricec;
int costc;
int combine;
printf("enter teh radius of cicrcle\n");
scanf("%d",&k);
a2=aofc(k);
p2=pofc(k);
printf("area of the circle is    %f\n",a2);
printf("perimeter  of the circle is   %f\n",p2);
printf("choose the price for fencing for circle from 11 and 23 rupees\n");// there are two price 11 and 23 rupees per unit;
scanf("    %d",&costc);
if(costc==11||costc==23);
 {
 	pricec=costc*a2;
 	printf("price after the fencing for circle is %d\n",pricec);
	

}
combine=pricec+price;
printf("price of circle and rectangle is %d\n",combine);
}





