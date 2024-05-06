#include <stdio.h>    //para iniciar o programa
#include <stdbool.h> //para retratar booleans
#include <string.h> //para strings maiores
#include <math.h>  //para funçoes matematicas
#include <ctype.h>//para diferente idiomas e alfabetos




//& Basic
/*
 int main(){
   
   int age = 18;
   char name[] = "Erick";
   char grade = 'D';
   float height = 1.76;

   printf("Possui %d anos.\n",age);
   printf("Nome:%s.\n",name);
   printf("Nota:%c.\n",grade);
   printf("Altura:%.2fm.\n",height);
   return 0;
} */

//^ Data types
/*
 int main(){

    char a = 'C';                  //* single character    %c  
    char b[] = "Bro";            //* array of characters %s    

    float c = 3.141592;                         //* 4 bytes (32 bits of precision) 6 - 7 digits %f   
    double d = 3.141592653589793; //* 8 bytes (64 bits of precision) 15 - 16 digits %lf  + utilizado por precisão   

    bool e = true;                        //* 1 byte (true or false) %d   
 
    char f = 120;                         //* 1 byte (-128 to +127) %d or %c    
    unsigned char g = 255;       // 1 byte (0 to +255) %d or %c

    short h = 32767;                  // 2 bytes (−32,768 to +32,767) %d
    unsigned short i = 65535;  // 2 bytes (0 to +65,535) %d

    int j = 2147483647;                    //* 4 bytes (-2,147,483,648 to +2,147,483,647) %d    
    unsigned int k = 4294967295;  // 4 bytes (0 to +4,294,967,295) %u

    long long int l = 9223372036854775807;                         // 8 bytes (-9 quintillion to +9 quintillion) %lld
    unsigned long long int m = 18446744073709551615U; // 8 bytes (0 to +18 quintillion) %llu

    printf("%c\n", a);  // char
    printf("%s\n", b);  // character array
    printf("%f\n", c);  // float
    printf("%lf\n", d); // double
    printf("%d\n", e);  // bool
    printf("%d\n", f);  // char as numeric value
    printf("%d\n", g);  // unsigned char as numeric value
    printf("%d\n", h);  // short
    printf("%d\n", i);  // unsigned short
    printf("%d\n", j);  // int
    printf("%u\n", k);  // unsigned int
    printf("%lld\n", l);  // long long int
    printf("%llu\n", m);  // unsigned long long int

    return 0;
} */

//^ Format Specifiers
/*
 //* %.X vai mostrar X casas decimais

//* %X vai jogar pro lado direito como se fosse o widht

//* %-X vai jogar pra esquerda como se fosse o widht

int main(){

   float item1 = 45.00;
   float item2 = 15.00;
   float item3 = 27.90;

   printf("Banana o Kilo: R$%10.2f\n", item1);
   printf("Carne o Kilo: R$%11.2f\n", item2);
   printf("Piada do Pastor: R$%8.2f\n", item3);
  
   return 0;
} */

//? Constant
/*
*assim como no js nao permite alteraçao de valores
*considere boa pratica colocar em maiusculo o nome da variavel 

int main(){
   const float PI = 3.14;
   float PI = 6.28;
   printf("O valor de PI é %f.", PI);
   return 0;
}
*/

//& user input 
/*
 int main(){
   int age;
   char name [25];     //bytes

    printf("Qual o seu nome?");
    //scanf("%s", name); * nao le espaço
    fgets(name, 25, stdin);         //  *le espaço
    name[strlen(name)-1] = '\0';     //  *faz a funçao do \n para o fgets

    printf("Qual a sua idade?");
    scanf("%d", &age);

    printf("Olá %s\n", name);
    printf("Você tem %d anos\n", age);


   
   return 0;
} */

//! math functions
/*
int main(){

   double A = sqrt(9);               //* raiz
   double B = pow(2,4);             //* potencia
   int C = round(3.14);            //* arredondar para o numero mais proximo
   int D = ceil(3.14);            //* arredondar sempre para o maior
   int E = floor(3.99);          //* arredondar sempre pro menor
   double F = fabs(-100);       //* distancia pro 0
   double G = log(3);          //* logaritmo
   double H = sin(45);        //* seno
   double I = cos(45);       //* cosseno
   double J = tan(45);      //* tangente

   printf("%.2lf\n", A);
   printf("%.2lf\n", B);
   printf("%d\n", C);
   printf("%d\n", D);
   printf("%d\n", E);
   printf("%lf\n", F);
   printf("%.2lf\n", G);
   printf("%.2lf\n", H);
   printf("%.2lf\n", I);
   printf("%.2lf\n", J);
   
   return 0;
}; */

//^ if statements
/*
int main(){

   int age;
   printf("Digite sua idade",age);
   scanf("%d", &age);

   if(age>=18){
      printf("\nConta criada com sucesso!");
   }
   else if(age == 0){
      printf("\nVoce acabou de nascer");
   }
   else if(age < 0){
      printf("\nVoce ainda nao nasceu");
   }
   else{
      printf("\nNegado");
   }
   return 0;
}
*/

//~ case switch
/*
int main(){
   char grade;

   printf("\nDigite sua nota: ",grade);
   scanf("%c", &grade);
   grade = toupper(grade);  //* vai aceitar chars minusculos o oposto seria o tolower

   switch (grade){
    
    case 'A': printf("Excelente!");
      break;
    
    case 'B': printf("Bom");
      break;
    
    case 'C': printf("Okay");
      break;
    
    case 'D': printf("Ruim");
      break;
    
    case 'F': printf("Reprovado");
      break;
    
    default: printf("Erro, digite uma nota valida");
   }
   return 0;
} 
*/

//^ Logical operator  &&
/*
//* && (AND) esse operador checa se os todos sao verdadeiros caso contrario dara falso.

int main(){

   int temp = 25;
   bool sunny = true;    //* mudando para false dara false.
   
   if(temp <= 0 && temp <= 30 && sunny){   
      printf("\nO tempo esta otimo!");
   }
   else{
      printf("\nO tempo esta ruim!");
   }
   
   return 0;
}
*/

//^ Logical operator  ||
/*
//* || (OR) checa se um ou outro é verdadeiro só dara false se os dois forem false.

int main(){
   int temp = 1000;

   if(temp <= 0 || temp <= 30){
      printf("\nO tempo esta otimo!");
   }
   else{
      printf("\nO tempo esta ruim!");
   }

   return 0;
}
*/

//^ Logical operator  !
/*

//* ! irá reverter o valor se x for false !x é true e vice-versa.

int main(){
   bool sunny = true;

   if(!sunny){
      printf("\nesta ensolarado!");
   }
   else{
      printf("\nesta nublado!");
   }
   return 0;
}
*/

//& Functions
/*
void parabens(){
   printf("\nParabens pra voce!");
   printf("\nParabens pra...voce!");
   printf("\nParabens pra voce!");
   printf("\nParabens pra...voceeeeeee!\n");
}

int main(){
   parabens();
   parabens();
   
   return 0;
}
*/

//? Arguments and Parameters
/*
void parabens(char x[], int y){
   printf("Parabens %s\n",x);
   printf("Voce agora tem %d\n",y);
}

int main(){
   char name[] = "Erick";
   int age = 19;

   parabens(name,age);

   return 0;
}
*/

//~ Return
/*
double square(double x){
   double result = x*x;
   return result;
}

int main(){
   double x = square(3.14);
   printf("%.2lf",x);
   
   return 0;
}
*/

//^ Ternary operator
/* 
int  findMax(int x , int y){
   return (x > y) ? x : y;  //*  ? = valor se for true  : = valor se for false
}

int main(){
  int max =  findMax(10,8);

   printf("%d", max);
   return 0;
}
 */

//& Function prototype
/* 
void hello(char[], int);  //* function prototype, permite que o corpo da funçao fique depois do main sem que der erro. Boa prática

int main(){
  char name[] = "Babidi"; 
  int age = 58;                             //* main

  hello(name , age);
  return 0;
}


void hello(char name[], int age){
   printf("\n Ola %s", name);              //* funçao com corpo
   printf("\n Voce tem %d",age);
}
 */

//& Strings functions
/*
 int main(){
  
   char string1[] = "Bro";
   char string2[] = "Code";
 
   strlwr(string1);                              //*converts a string to lowercase
   strupr(string1);                           //* converts a string to uppercase
   strcat(string1, string2);             //* appends string2 to end of string1
   strncat(string1, string2, 1);       //* appends n characters from string2 to string1
   strcpy(string1, string2);             //* copy string2 to string1
   strncpy(string1, string2, 2);      //* copy n characters of string2 to string1
   
   strset(string1, '?');        //* sets all characters of a string to a given character
   strnset(string1, 'x', 1);  //* sets first n characters of a string to a given character
   strrev(string1);             //* reverses a string

   int result = strlen(string1);                          //* returns string length as int
   int result = strcmp(string1, string2);         //* string compare all characters
   int result = strncmp(string1, string2, 1);   //* string compare n characters
   int result = strcmpi(string1, string1);        //* string compare all (ignore case)
   int result = strnicmp(string1, string1, 1);  //* string compare n characters (ignore case)

   printf("%s", string1);

   
  if(result == 0)
   {
      printf("These strings are the same");
 }
   else
  {
      printf("These strings are not the same");
 } 


   return 0;
}
*/

//^ For Loops
/* 
//* loop de quantidade determinada

int main(){
   for(int i=1; i<=10; i ++){
      printf("%d\n",i);
   }
}
*/

//! While Loops
/* 
//* Vai repetir o codigo infinitas vezes ATÉ algumas condiçoes continuarem verdadeiras

int main(){
   char name[25];

   printf("\n Qual o seu nome?");
   fgets(name, 25 , stdin);
   name[strlen(name) - 1] = '\0';

   while(strlen(name)== 0){
      printf("\n Qual o seu nome?");
      fgets(name, 25 , stdin);
      name[strlen(name) - 1] = '\0';
   }
   printf("Ola %s", name);
   
   return 0;
}
*/

//! Do While Loops
/*
int main(){
 
   //* o loop While vai fazer a repetiçao depois da condiçao
   //* o loop Do While vai fazer a repetiçao antes da condiçao
  
  int number = 0;
  int sum = 0;

   do{
      printf("Digite um Numero maior que 0: ");
      scanf("%d", &number);
      if(number > 0){
         sum += number;
      }
   }while(number > 0);
      
      printf("sum: %d", sum);

      return 0;
}*/

//~ Nested Loops
/* 
int main(){

   //* loop dentro de um loop

   int linha;
   int coluna;
   char simbolo;

   printf("\nDigite o numero de linhas: ");
   scanf("%d", &linha);

   printf("Digite o numero de colunas: ");
   scanf("%d", &coluna);

    scanf("%*c");  //* limpa o buffer

   printf("Digite um simbolo desejado:");
   scanf(" %c", &simbolo);

   for(int i = 1; i <= linha ; i++){
      for(int j = 1; j <= coluna; j++){
         printf("%c", simbolo);
      }
      printf("\n");
   };
 
 return 0;

} */

//^ Break vs Continue
