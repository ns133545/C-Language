#include<stdio.h>
#include<conio.h>
int c=0;
//function declaration
void input_array(int [],int);
void output_array(int [],int);
void merge_sort(int [],int ,int);
void merge(int a[],int,int,int);

int main()
{
int n, a[100],p,r;
printf("enter number of elements\n");
scanf("%d",&n);
printf("enter the elements\n");
input_array(a,n);
p=0;
r=n-1;
merge_sort(a,p,r);
output_array(a,n);
printf("\nComplexity = %d",c);
getch();
return 0;
}

void input_array(int a[],int n)
{
int i;
for(i=0;i<n;i++)
scanf("%d",&a[i]);

}
void output_array(int a[],int n)
{
int i;
for(i=0;i<n;i++)
printf("%d\t",a[i]);

}

//merging two array data
void merge(int a[],int p,int q,int r)
{
int i,j,k,n1,n2,l[50],r1[50];
n1=q-p+1;
c++;
n2=r-q;
c++;
for(i=0;i<n1;i++)
{
c++;
l[i]=a[p+i];
c++;
}
c++;
for(j=0;j<n2;j++)
{
c++;
r1[j]=a[q+j+1];
c++;
}
l[n1]=9999;
r1[n2]=9999;
i=0;
j=0;
for(k=p;k<=r;k++)
{
c++;
if(l[i]<=r1[j])
{
a[k]=l[i];
c++;
i++;;
c++;
}
else
{
a[k]=r1[j];
c++;
j++;
c++;
}
c++;
}
}

//full divide and conquer process
void merge_sort(int a[],int p,int r)
{
int q;
if(p<r)
{
q=(p+r)/2; c++;
merge_sort(a,p,q); c++;
merge_sort(a,q+1,r);   c++;
merge(a,p,q,r); c++;
}
}
