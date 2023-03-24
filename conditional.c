#include<stdio.h>
#include<math.h>
int main() {
    int age;
    printf("Enter the age");
    scanf("%d", &age);

    if( age >18) {
        printf("adult");
    }
    else {
        printf("not adult");
    }
    return 0;
}

int main() {
    int age;
    printf("Enter the age");
    scanf("%d", &age);

    if( age >18 && age <50) {
        printf("adult");
    }
    else if(age>13 && age<18) {
        printf("Teenager");
    }
    else {
        printf("Senior citizen");
    }
    return 0;
}


 int main() {
    int age;
    printf("enter the age");
    scanf("%d", &age);
    age>=18? printf("adult") : printf("not adult");
    return 0;
 }

int main() {
    int day;
    printf("enter the day :");
    scanf("%d", &day);
    switch (day) {
        case 1: printf("monday \n");
                 break; 
                
        case 2: printf("tuesday \n");
                 break;

        case 3: printf("wednesday \n");
                 break;       
        default :printf("not a valid day \n");
    }
    return 0;
}

int main(){
    int num;
    printf("enter the number");
    scanf("%d", &num);
    if (num>=0) {
        printf("number is even");
        if (num%2==0) {
            printf("number is ");
        }    
            else {
                printf("odd");
        }
    } else {
        printf("number is negative");
    }   
        return 0;
}

int main() {
    int marks;
    printf("enter the marks :");
    scanf("%d", &marks);
    if(marks>30) {
        printf("Pass");
    }
    else {
        printf("Fail");
    }
    return 0;
}

int main() {
    int marks;
    printf("enter the marks");
    scanf("%d", &marks);
    marks>30? printf("pass") : printf("fail");
    return 0;

}

int main() {
    int marks;
    printf("enter the marks");
    scanf("%d", &marks);
    switch (marks){
    case 30:printf("pass");
             break;
    default:printf("fail");
        break;
    }
    return 0;
}

int main() {
    double a,b,c,d,root1,root2, imagPart,realPart;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    d=b*b-4*a*c;
    if(d>0){
        root1=(-b+sqrt(d))/2*a;
        root2=(-b-sqrt(d))/2*a;
        printf("root1= %lf root2= %lf", root1,root2);
    }
    else if(d==0){
        printf("root1=root2= %lf", -b/(2*a));
    }
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-d) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }
}