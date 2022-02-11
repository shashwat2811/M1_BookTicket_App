#include "calculator.h"

int input_number;   // Defining global variable

void menu_display();

    //case 1
    void add();
    void sub();
    void mult();
    void di();
    void po();
    void sq();
    void facto();
    void sini();
    void cosi();
    void tani();
    float sine(float , int );
    float cosine(float , int );
    int factorial(int n);
    
    //case 2
    void BinToDec();
    void DecToBin();
    void OctalToDec();
    void DecToOctal();
    void HexaToDec();   
    void DecToHex();

    //case 3
    void onescomplement();
    void twoscomplement();

    //case 4
    void BinToGray();
    void GrayToBin();
    int bintogray(int);

    //case 5
    void printANDtable();
    void printORtable();
    void printNOTtable();


void menu_display()
{
    system("cls");
    printf("**Welcome**\n");
    printf("Enter 1 for Basic Math Operations\n");
    printf("Enter 2 for Base Conversion\n");
    printf("Enter 3 for Mathematical Operation on Binary Numbers\n");
    printf("Enter 4 for Binary to Gray Code Conversion\n");
    printf("Enter 5 for Truth Tables of Logic Gates\n");
    printf("Enter 6 to exit\n");
    printf("Enter your selection  ");
}

void add()
{
    float sum=0,i;
    char a;
    while(a!= '=')
    {
        printf("Enter Number:");
        scanf("%f",&i);
        sum=sum+i;
        printf("sum= %.3f",sum);
        printf("\nPress + to add more numbers\n");
        scanf(" %c",&a);
    }
    printf("Final Sum =%.3f \n",sum);
}

void sub()
{
    float diff,i;
    char a;
    printf("Enter Number to subtract from:");
    scanf("%f",&diff);
    while(a!= '=')
    {
        printf("Enter Number:");
        scanf("%f",&i);
        diff=diff-i;
        printf("difference= %.3f",diff);
        printf("\nPress - to subtract more numbers\n");
        scanf(" %c",&a);
    }
    printf("Final Difference =%.3f \n",diff);
}

void mult()
{
    float mu=1,i;
    char a;
    while(a!= '=')
    {
        printf("Enter Number:");
        scanf("%f",&i);
        mu=mu*i;
        printf("product= %.3f",mu);
        printf("\nPress * to multiply more numbers\n");
        scanf(" %c",&a);
    }
    printf("Final Product =%.3f \n",mu);
}

void di()
{
    float di,i;
    char a;
    printf("Enter Dividend:");
    scanf("%f",&di);
    while(a!= '=')
    {
        printf("Enter Divisor:");
        scanf("%f",&i);
        di=di/i;
        printf("Quotient= %.3f",di);
        printf("\nPress / to divide more numbers\n");
        scanf(" %c",&a);
    }
    printf("Final Result=%.3f \n",di);
}

void po()
{
    int n;
    float nu,result;
    printf("Enter number:");
    scanf(" %f",&nu);
    printf("Enter power:");
    scanf(" %d",&n);
    result=pow(nu,n);
    printf("%f raised to the power %d is = %.3f",nu, n, result);
}

void sq()
{
    float nu,result;
    printf("Enter number:");
    scanf(" %f",&nu);
    result=sqrt(nu);
    printf("Square root of %.3f is %.3f",nu,result);
}

void facto()
{
    int n, result;
    printf("Enter number:");
    scanf(" %d",&n);
    result=factorial(n);
    printf("Factorial of %d is: %d", n, result);

}

void sini()
{
    float degree,radian,result;
    int n;
    printf("Enter the angle in degree: ");
    scanf("%f",&degree);
    printf("Enter the iteration: ");
    scanf("%d",&n);
    radian = degree * PI / 180;
    result = sine(radian,n);
    printf("\n");
    printf("sin%.2f = %.3f",degree,result);
}

void cosi()
{
    float degree,radian,result;
    int n;
    printf("Enter the angle in degree: ");
    scanf("%f",&degree);
    printf("Enter the iteration: ");
    scanf("%d",&n);
    radian = degree * PI / 180;
    result = cosine(radian,n);
    printf("\n");
    printf("cos%.2f = %.3f",degree,result);
}

void tani()
{
    float degree,radian,result;
    printf("Enter angle in degree:");
    scanf("%f",&degree);
    radian=degree*PI/180;
    result=sin(radian)/cos(radian);
    printf("tan %.3f =%.3f",degree,result);
}

float sine(float an, int n)
{
    if (an == 0 || n == 0)
        return 0;
    else
        return (-1*pow(-1,n)*pow(an,2*n-1)/factorial(2*n-1) + sine(an, n - 1));
}
float cosine(float an, int n)
{
    if (an == 0 || n==0 )
        return 1;
    else
        return (pow(-1,n)*pow(an,2*n)/factorial(2*n) + cosine(an, n - 1));
}
int factorial(int n)
{
    if(n==0)
        return 1;
    else if (n==1)
        return 1;
    else
        return (n*factorial(n-1));
}

void BinToDec()  //Binary to Decimal
{
    int input_number;
    printf("Enter the Binary number to be converted to Decimal  " );
    scanf("%d", &input_number);
    int dec=0, i=0, rem;
    while(input_number!=0)
    {
       rem = input_number%10;
       input_number=input_number/10;
       dec=dec + rem*pow(2,i);
       ++i;
    }
    printf("The number converted to Decimal is = %d", dec);
}

void DecToBin()
{
    int n,i;int a[10];
    printf("Enter the Decimal number to convert to Binary ");
    scanf("%d",&n);
    for(i=0;n>0;i++)
    {
        a[i]=n%2;
        n=n/2;
    }
    printf("\nBinary of Given Number is=");
    for(i=i-1;i>=0;i--)
        {
        printf("%d",a[i]);
        }
    printf("\n");
}

void OctalToDec() //Octal to Decimal
{
  int input_number,output=0,i,a;
  int b;
  printf("Enter the Octal number "); scanf("%d", &input_number);
  int len =0; int n = input_number;
  while(n>0)
  {
      b=n%10;
      len++;
      n=n/10;
  }
  for(i=0;i<len;i++)
  {
      a=input_number %10;
      output = output + (pow(8,i)*a);
      input_number = input_number/10;
  }
  printf("The number converted into Decimal is = %d\n", output);

}

void DecToOctal()
{

    int decimalNumber;
    printf("Enter the Decimal number to be converted to Octal"); scanf("%d",&decimalNumber);
    int octalNumber = 0, i = 1;
    while (decimalNumber != 0)
    {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }
    printf("The Octal number is %d",octalNumber);
}

void HexaToDec() //Hexadecimal to Decimal
{
    char hex[17];
    int decimal;
    int i = 0, val, len;
    decimal = 0;
    printf("Enter the Hexadecimal number  ");
    scanf("%s", &hex);
    len = strlen(hex);
    len--;
    for(i=0; hex[i]!='\0'; i++)
    {
        if(hex[i]>='0' && hex[i]<='9')
        {
            val = hex[i] - 48;
        }
        else if(hex[i]>='a' && hex[i]<='f')
        {
            val = hex[i] - 97 + 10;
        }
        else if(hex[i]>='A' && hex[i]<='F')
        {
            val = hex[i] - 65 + 10;
        }

        decimal += val * pow(16, len);
        len--;
    }
    printf("Decimal number = %d", decimal);
}

void DecToHex()
{
    int num;
    int i = 0, rem;
    char hex_arr[50];

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    while(num != 0)
    {
        rem = num % 16;  // get the right most digit

        if (rem < 10)
        {
            hex_arr[i++] = 48 + rem;
        }
        else
        {
            hex_arr[i++] = 55 + rem;
        }

        num /= 16;  // get the quotient
    }

    printf("0x");

    for(int j = i - 1; j >= 0 ; j--)  // print the hex_arr in reverse order
    {
        printf("%c", hex_arr[j]);
    }
}

void onescomplement()
{
    int n;
    printf("Enter the number of bits do you want to enter : ");
    scanf("%d",&n);
    char binary[n+1];
    char onescomplement[n+1];
    printf("\nEnter the binary number : ");
    scanf("%s", binary);
    printf("%s", binary);
    printf("\nThe ones complement of the binary number is : ");
    for(int i=0;i<n;i++)
    {
       if(binary[i]=='0')
       onescomplement[i]='1';
       else if(binary[i]=='1')
       onescomplement[i]='0';
    }
    onescomplement[n]='\0';
    printf("%s",onescomplement);
}

void twoscomplement()
{
    int n;
   printf("Enter the number of bits do you want to enter :");
   scanf("%d",&n);
   char binary[n+1];
   char onescomplement[n+1];
   char twoscomplement[n+1];
   int carry=1;
   printf("\nEnter the binary number : ");
   scanf("%s", binary);
   printf("%s", binary);
    for(int i=0;i<n;i++)
    {
       if(binary[i]=='0')
       onescomplement[i]='1';
       else if(binary[i]=='1')
       onescomplement[i]='0';
    }
    onescomplement[n]='\0';
    printf("\nThe twos complement of a binary number is : ");
    for(int i=n-1; i>=0; i--)
    {
        if(onescomplement[i] == '1' && carry == 1)
        {
            twoscomplement[i] = '0';
        }
        else if(onescomplement[i] == '0' && carry == 1)
        {
            twoscomplement[i] = '1';
            carry = 0;
        }
        else
        {
            twoscomplement[i] = onescomplement[i];
        }
    }
    twoscomplement[n]='\0';
    printf("%s",twoscomplement);
}

void BinToGray()
{
    printf("Enter the Binary number to convert to Gray ");scanf("%d", &input_number);

    int a, b, result=0, i=0;
    while(input_number!=0)
    {
        a= input_number%10;
        input_number=input_number/10;
        b=input_number%10;
        if ((a&&!b)||(!a&&b))
        {
            result = result + pow(10,i);
        }
        i++;
    }
    printf("The result in Gray code is %d", result);
}

void GrayToBin()
{
    int bin, gray;

    printf("Enter the  Gray number to be converted into Binary: "); scanf("%d", &bin);
    gray = bintogray(bin);
    printf("The gray code of %d is %d\n", bin, gray);
}

int bintogray(int bin)
{
    int a, b, result = 0, i = 0;
    while (bin != 0)
    {
        a = bin % 10;
        bin = bin / 10;
        b = bin % 10;
        if ((a && !b) || (!a && b))
            {
            result = result + pow(10, i);
        }
        i++;
    }
    return result;
    }

int AND(int a, int b )
{
    if (a==1 && b ==1)
        return 1;
    else
        return 0;
}

int OR(int a, int b)
{
    if (a==1 || b==1)
        return 1;
    else
        return 0;
}

int NOT(int a)
{
    if (a==0) return 1;
    else return 0;
}

void printANDtable()
{
    printf("\n\n");
    printf("Truth Table of AND Gate\n");
    printf("\t\t0\t0\t%d\n", AND(0,0));
    printf("\t\t0\t1\t%d\n", AND(0,1));
    printf("\t\t1\t0\t%d\n", AND(1,0));
    printf("\t\t1\t1\t%d\n", AND(1,1));
}

void printORtable()
{
    printf("\n\n");
    printf("Truth Table of OR Gate\n");
    printf("\t\t0\t0\t%d\n", OR(0,0));
    printf("\t\t0\t1\t%d\n", OR(0,1));
    printf("\t\t1\t0\t%d\n", OR(1,0));
    printf("\t\t1\t1\t%d\n", OR(1,1));
}

void printNOTtable()
{
    printf("\n\n");
    printf("Truth Table of NOT Gate\n");
    printf("\t\t0\t%d\n", NOT(0));
    printf("\t\t0\t%d\n", NOT(1));
} 