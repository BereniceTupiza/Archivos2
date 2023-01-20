#include <stdio.h>

int main(){

int num;
FILE *doc=NULL;
FILE *vector=NULL;
vector=fopen("vector.txt","r");
doc=fopen("doc.txt","w");
   
   int cont=1;
 
    while (!feof(vector)){
    fscanf(vector, "%d", &num);
   

        if (num%5==0)
        {
            fprintf(doc," %d Es multiplo del numero 5 \n", num);
        }else{
            fprintf(doc," %d \n ", num);
        }
        

   }
   
    
    fclose(vector);
    fclose(doc);

    return 0;


}