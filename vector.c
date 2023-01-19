#include <stdio.h>

int main(){
    int num;
    char buffer[]="archivo.txt";
    char vec[]="vector.txt";
    FILE *archivo;
    FILE *vec1;
    archivo=fopen(buffer,"r");//apertura archivo
    vec1=fopen(vec,"r+");

if (archivo == NULL){
        printf("No se puede abrir el archivo1");
        return -1;
    }
if (vec1 == NULL){
        printf("No se puede abrir el archivo2");
        return -1;
   }
char c;
c= fgetc(archivo);
printf("%c",c);
printf("\n");
fgets(buffer,100,archivo);
printf("%s",buffer);
printf("\n");
for ( int i = 0; i < 101; i++)
{
    fscanf(vec1, "%d", &num);
    printf("%d",num);
    printf("\n");   
}
    fclose(archivo);
    fclose(vec1);
    return 0;
}