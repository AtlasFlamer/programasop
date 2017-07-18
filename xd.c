#include<stdio.h>

int main(){
  float dolar;
  int dias;
  int counter;
  int valoranterior;
  int record=0;

  printf("Ingrese cantidad de dias: " );
  scanf("%d",&dias );
  for (counter=1;counter<=dias;counter++){
    printf ("Dia %d:  \n",counter);
    scanf("%f",&dolar);
    if(record<dolar){
      record=dolar;
    }
      print ("Record: %d",  record);
    }
  }
