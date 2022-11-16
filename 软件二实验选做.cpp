#include<stdio.h>
#define n 5
typedef struct spare{
	char name[20];
	int year;
	float price;
	int num;
}hut;
void fun(struct spare spa1[])
{
	{
	int i;
	printf("零部件相关信息为\n");
	for(i=0;i<n;i++)
        {
		printf("%s %d %f %d\n",spa1[i].name,spa1[i].year,spa1[i].price,spa1[i].num);
	}
}
}
 void fun1(struct spare spa3[])
 {
	 int i,j;
	 hut t;
	 printf("排序后输出\n");
	 for(i=0;i<n-1;i++)
	 {
		 for(j=0;j<n-1-i;j++)
		 {
			 if(spa3[j].price<spa3[j+1].price)
			 {
				 t=spa3[j];
				 spa3[j]=spa3[j+1];
				 spa3[j+1]=t;
			 }
		 }
	 }
	 for(i=0;i<n;i++)
	 {
		 printf("%f ",spa3[i].price);
	 }
	 printf("\n");
	 for(i=0;i<n;i++)
	 {
		 if(spa3[i].price==spa3[0].price)
		 {
			 printf("价格最高飞机部件信息:\n");
			 printf("%s %d %f %d",spa3[i].name,spa3[i].year,spa3[i].price,spa3[i].num);
		 }
	 }
 }
 void fun2(struct spare spa2[])
 {
	 {
	 int i;

	 for(i=0;i<n;i++)
		 {
			 if(spa2[i].year>5)
			 {
		 spa2[i].price=spa2[i].price/2.0;
	 printf("%s %d %f %d",spa2[i].name,spa2[i].year,spa2[i].price,spa2[i].num);
			 }
 }	
 }
 }
int main()
{
	{
	struct spare spa4[n];
	int i;
	for(i=0;i<n;i++)
		scanf("%s%d%f%d",spa4[i].name,&spa4[i].year,&spa4[i].price,&spa4[i].num);
	fun(spa4);
	fun1(spa4);
	printf("\n");
	fun2(spa4);
	return 0;
	}
}
