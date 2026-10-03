#include<stdio.h>
#include<math.h>


int main() {
    double number1,number2 ;
    char operation ;

    
    printf("enter first number ");
    scanf("%lf", &number1);
   printf("enter your operation (+, -, *, / ,r for underroot,L for log,T for trignometric values*(ENTER 'T' IN RADIANS))");
   scanf(" %c", &operation);

   if (operation == 'T'){
    printf("sin = %f\n", sin(number1));
    printf("cos = %f\n", cos(number1));
    printf("tan = %f\n", tan(number1));

    
   }
    
   
   if (operation == 'r'){
    if (number1 >= 0){
        printf("your answer is %f", sqrt(number1));

    }  else {
        printf("cannot find square root of negative number " );

    }

   }

   else if (operation == 'L' ){
    if (number1>0){
    printf("log base e = %f\n", log(number1));
    printf("log base 10 = %f", log10(number1));
    } else {
        printf("invalid opreation");
    }

   }

   
   
   if (operation== '+'){
    printf("enter second number ");
   scanf("%lf", &number2) ;

   float result1 = (number1 + number2);
   printf("your answer is %f", result1);
   }


  else if (operation == '-'){
    printf("enter second number ");
   scanf("%lf", &number2) ;

    float result2 = (number1-number2);
    printf("your answer is %f", result2);

   }

   else if (operation== '*'){
    printf("enter second number ");
   scanf("%lf", &number2) ;

    float result3 = (number1*number2);
    printf("your answer is %.2f", result3);
    }

   else if (operation == '/'){
    printf("enter second number ");
   scanf("%lf", &number2) ;

        float result4 = (number1/number2);
        printf("your answer is %f", result4);

    }







return 0;

}