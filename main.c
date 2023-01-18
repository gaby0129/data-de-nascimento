#include <stdio.h>
int main(void)

{
  
struct dia_ano
  
{
   
 int ano;
  
  int dia;
   
 int mes;
  };
  

 struct dia_ano data;
  
  
printf("\n---------- informe data -------
----\n\n\n");
  

  printf("coloque o dia:");
 
 scanf("%d",&data.dia);

 printf("\ncoloque o mes:");
 
 scanf("%d",&data.mes);

 
 printf("\ncoloque o ano:");

 scanf("%d",&data.ano);

 
 printf("\n\n --------- resultado ---------\n\n");
 
 printf("dia ...........: %d\n", data.dia);
 
printf("mes .....: %d\n", data.mes);

 printf("ano ...: %d\n" , data.ano);
 
 
 
return(0);
}
