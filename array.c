#include<stdio.h>

// input of 1D array
int main(){
    int n;
    printf("enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of the array:");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    return 0;
}

// to calculate pricce of three goods
int main(){
    float price[3];
    printf("enter price of first good:");
    scanf("%f", &price[0]);
    printf("enter price of second good:");
    scanf("%f", &price[1]);
    printf("enter price of third good:");
    scanf("%f", &price[2]);
    printf("Final price of goods: %f", ((price[0]+(0.18*price[0]))+(price[1]+(0.18*price[1]))+(price[2]+(0.18*price[2]))));
    return 0;       
}

// to take input and print array
int main(){
    int n,i;
    printf("enter the size of tha array: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of the array: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

// print sum of the elements of the array 
int main(){
    int n,i,sum=0;
    printf("enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of the array: ");
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }
    printf("%d", sum);
    return 0;
}
 
// to find secound largest in the array
int main(){
    int n,i;
    printf("enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int min=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>max){
            min=max;
            max=arr[i];
        }
        else if(arr[i]>min && arr[i]!= max){
            min=arr[i];
    }  
}
 printf("The second largest element in the array is: %d\n", min);
}

// to copy one array into another
int main(){
    int n,i;
    printf("enter the size of the arrray: ");
    scanf("%d", &n);
    int arr[n],arr1[n];
    printf("enter the elements of array:");
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++){
        arr1[i]=arr[i];
    }
    for(i=0;i<n;i++){
        printf("%d ", arr1[i]);
    }    
    return 0;
}

// find duplicate element
int main(){
    int n,x,flag=0;
    printf("enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter the elements oof the array: ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("enter the element you want to search: ");
    scanf("%d", &x);
    for(int i=0;i<n;i++){
        if(x==arr[i]){
            flag=1;
            break;
        }else{
            flag=0;
        }
    }
    if(flag=1){
        printf("%d",a[i]);
    }else{
        printf("no");
    }   
    return 0;
}

// count number of dublication of paticualr element
int main(){
    int n,count=0,x;
    printf("enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the number you want to search: ");
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        if(x==arr[i]){
            count++;
        }
    }
    if(count>1){
        printf("number of repetition %d",count);
    }else{
        printf("no repetition");
    }
    return 0;
}

// to reverse an array bt swapping
int main(){
    int n;
    printf("enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter the elemets of the array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("your entered array: ");
    for(int i=0;i<n;i++){
        printf("%d \n",arr[i]);
    }
    printf("Reversed array: ");
    for(int i=0;i<n;i++){
        int temp=arr[i];
        temp=arr[n-1-i];
        printf("%d ",arr[n-i-1]);
    }
    
    return 0;
}

// 2D array input
int main(){
    int r,c;
    printf("enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

// sum of matricces
int main() {
   int rows, cols;  
   printf("Enter the number of rows: ");
   scanf("%d", &rows);   
   printf("Enter the number of columns: ");
   scanf("%d", &cols);   
   int arr1[rows][cols];
   int arr2[rows][cols];
   int arr3[rows][cols];
   printf("Enter the elements of the 1 array: \n");
   for (int i = 0; i < rows; i++) {
      for (int j = 0; j < cols; j++) {
         scanf("%d", &arr1[i][j]);
      }
   }
   printf("Enter the elements of the 2 array: \n");
   for (int i = 0; i < rows; i++) {
      for (int j = 0; j < cols; j++) {
         scanf("%d", &arr2[i][j]);
      }
   }  
   printf("The entered array is: \n");
   for (int i = 0; i < rows; i++) {
      for (int j = 0; j < cols; j++) {
        printf("%d ", arr1[i][j]+arr2[i][j]);
      }
      printf("\n");
   }
   return 0;
}