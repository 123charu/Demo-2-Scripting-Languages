#include<stdio.h>
#include<conio.h>

void main(){

int a[2][3]={1,1,1,1,1,1,1,1};
int i,j,total=0;
printf("\nenter six number");

for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
printf("\t hello %d",a[i][j]);
total=total+a[i][j];
}


printf("\t %d",total);

total=0;
printf("\n\n\n\n");
}
getch();

}
