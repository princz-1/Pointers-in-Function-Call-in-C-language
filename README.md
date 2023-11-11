# Pointers-in-Function-Call-in-C-language

# Call by value:

In function calling, we pass arguments by value. The call function creates a new set of variables and copies the value of arguments into them.

The function doesn't have access to the actual variable and work only on the

copies of values.

It is suitable when we don't need to alter the values of the original variables.

void swap(int, int); //prototype


void swap(int a,int b)//definition formal parameter
{

int t;
t=a;
a=b;
b=1;

printf("In swap function value of a and b is %d %d",a,b);

}

void main() { 
int a=5;
int b=9;
swap(a,b); //callingActual argument

printf("In main function value of a and b is %d %d",a,b);

}



# Call by reference:
C allows us to pass arguments to the functions bypassing the address of a variable. By using this, function working on the original data instead of copies of values.
 void swap(int *, int "); //prototype

void swap(int *a, int *b) //definition formal argument

int t;
t=*a;
*a=*b;
*b=t;

printf("In swap function value of a and b is %d %d", *a. *b);
}

void main()
{
int a=5;

int b-9;

swap(&a,&b); //calling Actual argument printf("In main function value of a and b is %d %d",a,b);
}



