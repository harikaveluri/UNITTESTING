int *bubblesort(int *a,int n)
{
        int i,j,k;
        for(i=0;i<n-1;i++)
                for(j=0;j<n-1-i;j++)
                        if(a[j]>a[j+1])
                        {
                                k=a[j];
                                a[j]=a[j+1];
                                a[j+1]=k;


                          }
return a; 

}

