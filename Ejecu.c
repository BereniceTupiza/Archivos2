#include <stdio.h>

int main(){

int num;
FILE *vector=NULL;
vector=fopen("vector.txt","r");

FILE *vector2=NULL;


vector2=fopen("vector2.txt","w");
   
   int cont=1;
   while (!feof(vector))
   {
    fscanf(vector, "%d", &num);

        if (num%5==0)
        {
            fprintf(vector2," %d Es multiplo del numero 5 \n", num);
        }else{
            fprintf(vector2," %d \n ", num);
        }
        

   }
   
    
    fclose(vector);
    fclose(vector2);

    return 0;


}