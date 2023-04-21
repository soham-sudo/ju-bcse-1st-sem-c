#include <stdio.h>
#include <math.h>

float func(float x){
 return x*tan(x) ;
}

float df(float x){
 return tan(x) + x/pow(cos(x),2);
}

float bisection( float c){
 float xL =c,xR=c+1,xM;
 int i=0; 
 while(xR-xL>=0.001){
  xM = (xL+xR)/2;
  if((func(xL)>c && func(xR)>c) 
        || (func(xL)>c && func(xR)>c)){
   xL =xM;
  }
  else xR =xM;
  printf("%d iteration xR: %f xL: %f",i,xR,xL);
  i++;
 }
 return xR;
}

float NewtonRhapson(float c){
 float x=c;
 for(int i =0;i<100;i++){
  x = x -func(x)/df(x);
 }
 return x;
}

int main()
{
 float x,c;
 printf("x: ");
 scanf("%f",&c);
x=c;
 for(int i =0;i<3;i++){
  printf("%f  \n",bisection(c));
  c=c+4;
 }
 c=x;
 for(int i =0;i<3;i++){
  printf("%f  \n",bisection(c));
  c=c+4;
 }
}
