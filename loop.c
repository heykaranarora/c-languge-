#include<stdio.h>
// first code for loop
int main() {
    for(int i=1;i<=5;i=i+1) {
        printf("Hello world \n");
    }
    return 0;
}

// counting 1-100
int main() {
    for(int i=1;i<=100;i=i+1) {
        printf("%d \n", i);
    }
    return 0;
}

// use of while loop
int main() {
    int i=0;
    while(i<=5) {
        printf("Hello karan\n");
        i++;
    }
    return 0;
}

int main() {
    int n;
    printf("enter  the number");
    scanf("%d", &n);
    int i=0;
    while(i<=n) {
        printf("%d \n", i);
        i=i+1;
    }
    return 0;
}

// use of do while loop
int main() {
    int i=0;
    do{
        printf("%d \n", i);
        i++;
    } while(i<=5);
    return 0;
}

// sum of n numbers
int main() {
    int n;
    printf("enter the number :");
    scanf("%d", &n);
    int sum=0;
    for(int i=1;i<=n;i++) {
       sum=sum+i;
    }
    printf("%d\n", n);    
    return 0;
}

// printing table of a number entered by the user
int main() {
    int n;
    printf("enter the number :");
    scanf("%d", &n);
    for(int i=1;i<=10;i++) {
        printf("%d\n",n*i);
    }
    return 0;
}

// odd even
int main() {
    int n;
    do {
        printf("enter the number");
        scanf("%d", &n);
        printf("%d\n", n);
        if(n%2!=0){
            break;
        }
    }while(1);
    printf("thank you");
    return 0;
}

// checking number divisible by 7
int main() {
    int n;
    do {
        printf("Enter the number :");
        scanf("%d", &n);;
        printf("%d \n", n);
        
        if(n%7==0) {
            break;
        }    
    }while(1);
    printf("this  is multiple of seven");
    return 0;
}


// number of digits  in a number
int main(){
    int n,count=0;
    printf("enter the number");
    scanf("%d", &n);
    do{
        count++;
        n/=10;
    }while(n!=0);
    printf("number of digits %d", count);
}

// find first and last number of a digit
int main(){
    int first,last,n,temp;
    printf("enter the number ");
    scanf("%d", &n);
    temp=n;
    last=n%10;
    while(temp>=10){
        temp=temp/10;
    }
    printf("first digit: %d",temp);
    printf("last digit of number: %d",last);
    return 0;
}

// sum of digits of a number
int main(){
    int sum=0,n,l;
    printf("enter the number:");
    scanf("%d", &n);
    while(n!=0){
        l=n%10;
        sum+=l;
        n=n/10;
    }
    printf("sum of digits: %d", sum);
    return 0;
}

// find reverse of a number
int main(){
    int n,las,rev=0;
    printf("enter the number:");
    scanf("%d", &n);
    while(n!=0){
        las=n%10;
        rev=rev*10+las;
        n=n/10;
    }
     printf("reverse of a number: %d",rev);
}

// factorial of a number
int main(){
    int n,y=1;
    printf("enter the number:");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        y=y*i;
    } 
    printf("factorial of a number is: %d",y);
    return 0;
}

// unique pattern number and zero filled
int main(){
    int n;
    printf("enter number of rows: ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i==1||j==1||i==n||i==j){
                printf("1");
            }
            else{
                printf("0");
            }
        }
    printf("\n");
    }
    return 0;
}

// reverse of a number
int main(){
    int n,s,e,rev,rem;
    printf("enter start value");
    scanf(" %d",&s);
    printf("enter end value");
    scanf("%d", &e);
    for(n=s;n=e;n++){
        while(n!=0){
            rem=n%10;
            rev=rev*10+rem;
            n/=10;
        }
    }
    printf("%d",rev);
    return 0;
}

// Square pattern
 int main() {
    int n;
    printf("no. of rows :");
    scanf("%d", &n);
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++) {
            printf("* ");
        }
    printf("\n");
    }
    return 0;
}

// Pattern of 1234
int main()  {
    int n;
    printf("enter no. of rows: ");
    scanf("%d", &n);
    for(int i=0;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
    printf("\n");
    }
}

// Pattern 2
int main() {
    int n;
    printf("enter no. of rows: ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        for(int j=0;j<=n-i;j++){
            printf("%d",i);
        }
    printf("\n");
    }
}

// square pattern of 1
int main(){
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            printf("1");
        }
    printf("\n");
    }
}

// Right triangle number pattern
int main(){
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            printf("%d",i);
        }
    printf("\n");
    }
    return 0;
}

// pattern of mirror of right angle traingle
int main() {
    int n;
    printf("enter no. of rows : ");
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        for(int s=0;s<n-i;s++) {
            printf(" ");
        }
        for(int j=0;j<=i;j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

// reverse right angle traingle
int main() {
    int n;
    printf("no. of rows: ");
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        for(int j=n-i-1;j>=0;j--) {
        printf("* ");
        }
    printf("\n");
    }
    return 0;
}

// Pyramid pattern
int main() {
    int n;
    printf("no. of rows: ");
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        for(int s=0;s<n-i;s++) {
            printf(" ");
        }
        for(int j=0;j<=i;j++) {
            printf("*");
        }
        for(int k=0;k<i;k++) {
            printf("*");
        }
    printf("\n");
    }
    return 0;
}

// right angle triange aand reverse angle tringle combine
int main(){
    int n;
    scanf("%d", &n);
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            printf("*");
        }
    printf("\n");
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<n-i;j++){
            printf("*");
        }
    printf("\n");
    }
    return 0;
}

// mix of inverted and reverse triangle
int main(){
    int n;
    printf("enter number of rows: ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
    printf("\n");
    }
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("%d", j);
        }
    printf("\n");
    }
}
