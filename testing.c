#include<stdio.h>
#include<time.h>
#include "header.h"

int compare(int ex[],int ei,int ac[])
{
    int i;
    for(i=0;ex[i]==ac[i] && i<ei;i++);
    if(i==ei)
            return 1;
    else
            return 0;

}




void test(int exparr[],int actual[],int i,char *str)
{
  int l;

        l=compare(exparr,i,actual);
        if(l==1)
            printf("-------%s:success\n",str);
         else
         {
            printf("------%s:failed:\n",str);
            printf("------expected array:\t");
            for(l=0;l<i;l++)
            printf("%d  ",exparr[l]);
            printf("\n------ your array:\t");
            for(l=0;l<i;l++)
            printf("%d  ",actual[l]);
            printf("\n");

          }
  }


void test_bubble()
{
        int a[]={4,1,8,9,11,11,3,23,12,90};
        int b[]={8,3,2,1,-1,8,9,12,100,89};
	int c[]={-1,-10,0,13,19,90,13,-100,9,1};
	int c1[]={-100,-10,-1,0,1,9,13,13,19,90};
        int a1[10]={1,3,4,8,9,11,11,12,23,90};
        int b1[10]={-1,1,2,3,8,8,9,12,89,100};
        test(a1,bubblesort(a,10),10,"bubblesort");
        test(b1,bubblesort(b,10),10,"bubblesort");
	test(c1,bubblesort(c,10),10,"bubblesort");
        printf("\n");


}


void test_insertion()
{


int a[]={4,1,8,9,11,11,3,23,12,90};
        int b[]={8,3,2,1,-1,8,9,12,100,89};
        int a1[10]={1,3,4,8,9,11,11,12,23,90};
        int b1[10]={-1,1,2,3,8,8,9,12,89,100};
        test(a1,insertionsort(a,10),10,"insertion");
        test(b1,insertionsort(b,10),10,"insertion");
        printf("\n");

}


void test_selection()
{

int a[]={4,1,8,9,11,11,3,23,12,90};
        int b[]={8,3,2,1,-1,8,9,12,100,89};
        int a1[10]={1,3,4,8,9,11,11,12,23,90};
        int b1[10]={-1,1,2,3,8,8,9,12,89,100};
        test(a1,selectionsort(a,10),10,"selection");
        test(b1,selectionsort(b,10),10,"selection");
        printf("\n");
        
}

void test_quick()
{
	int a[]={4,-1,8,9,96,11,3,23,12,90};
        int b[]={8,3,2,1,-1,8,9,12,100,89};
        int a1[10]={-1,3,4,8,9,11,12,23,90,96};
        int b1[10]={-1,1,2,3,8,8,9,12,89,100};
	quickSort(a, 0, 10);
	test(a1,a,10,"quicksort");
	quickSort(b,0,10);
	test(b1,b,10,"quicksort");
	printf("\n");
}




int main()
{

clock_t t;
int *ptr,choice,j;
double time_taken;
while(1)
{
printf("enter ur choice\n 0:break 1:bubblesort 2:insertion sort 3:selection sort 4:quick sort\n");
scanf("%d",&choice);
if(choice==0)
        break;
switch(choice)
{
        case 1: t = clock();
                test_bubble();
                t = clock() - t;
                time_taken = ((double)t)/CLOCKS_PER_SEC; 
		printf("-----bubblesort executed in  %f seconds  \n", time_taken);
                break;
        case 2:t=clock();
	       test_insertion();
	       t = clock() - t;
               time_taken = ((double)t)/CLOCKS_PER_SEC;
               printf("-----insertionsort executed in  %f seconds  \n", time_taken);
               break;
        case 3:t=clock();
	       test_selection();
               t = clock() - t;
               time_taken = ((double)t)/CLOCKS_PER_SEC; 
               printf("-----selectionsort executed in  %f seconds  \n", time_taken);
               break;

        case 4:t=clock();
               test_quick();
               t = clock() - t;
               time_taken = ((double)t)/CLOCKS_PER_SEC;
               printf("-----quick executed in  %f seconds  \n", time_taken);
               break;




}


}


        return 0;
}


