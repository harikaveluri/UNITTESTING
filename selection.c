int  *selectionsort(int *a,int size)
{
        int i,j,n,temp;
        for(i=0;i<size-1;i++)
        {
                n=i;
                for(j=i+1;j<size;j++)
                        if(a[j]<a[n])
                                n=j;
                temp=a[i];
                a[i]=a[n];
                a[n]=temp;

        }
return a;
}
 
