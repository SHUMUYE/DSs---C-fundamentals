 /* Fibonacci series program  using passing by value in C language */
 
#include<stdio.h>

   void fibo(int n){  //fibo is the function with out return value but with argument value
   
    int i,arr[n];  //array arr stores numbers of fibonacci series and i is iterative variable
    arr[0] = 0; //initialized first element to 0
    arr[1] = 1; //initialized second element to 1
    
    printf("The First %d fibonacci series Numbers are as follows \n",n);
    for (i=0;i<n;i++) {    	//loop to generate n elements
		    if (i<=1)
		      arr[i]=i;
		    else{
        arr[i] = arr[i-1]+arr[i-2];  //this is the mathematical operation of fibonaci series
		}
        printf("%d ",arr[i]);	 //print all n numbers in the series    
    }
}
    
int main(){
	int n;
   printf("Enter the total Number you want to display\n");
   scanf("%d",&n);
   fibo(n); //passing by value n=the users input
    return 0;
}



