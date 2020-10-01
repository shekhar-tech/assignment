#include<stdio.h>
#include<stdlib.h>
FILE *ptr ;  // source file
FILE *fptr;  // answer file


//calculating average//
double average(double result,int m)  //average function
{
    result =result/(m+1);
    printf("AVERAGE OF %d NUMBERS ARE: %lf",m+1,result);
     fprintf(fptr,"average is : %f\n",result);
}
//////////////////////////////////
//calculating max//

int max(int a[],int n)  //max function
{
int i,max;   
     for(i=0;i<=n;i++)
      {
        fscanf(ptr,"%d",&a[i]);  //reading values from source file
      }
  //logic for finding max  
 for(i=0;i<=n;i++)
 {
     if(a[i]>a[i+1])
     max=a[i];
 }

 printf("\nthe max number is %d\n",max);
  //printing value to answer file
fprintf(fptr,"maximum number is :%d",max);
return max;
}
 
 
int main()
{
    int i,n,a[20];
    float sum=0.0;
/*opening and reading the source file for th first number*/

    ptr=fopen("C:\\Users\\user\\Desktop\\C FILES\\sample1.txt", "r");
    fscanf(ptr,"%d",&n);
   fclose(ptr);
//opening and reading source file upto a scanned number n

   ptr=fopen("C:\\Users\\user\\Desktop\\C FILES\\sample1.txt", "r");
   //creating answer file
fptr=fopen("C:\\Users\\user\\Desktop\\C FILES\\answer_hw3.txt","w");
fprintf(fptr,"values from source file are\n");

 //logic for addtion for using in average
for(i=0;i<=n;i++)
{
   fscanf(ptr,"%d",&a[i]);
   fprintf(fptr,"%d\n",a[i]);
   sum = sum+a[i];
printf("%f\n",sum);
}

average(sum,n);
max(a,n);

//closing all the files
fclose(ptr);
fclose(fptr);
    return 0;
}