#include <stdio.h>
#include <string.h>

void reverse(char *vec,int len){
  char copia[101];
  strcpy(copia, vec);
  
  int j = 0;
  for(int i = len-1;i>=0;i--){
    vec[j] = copia[i];
    ++j;
  } vec[j+1] = '\0';
  
}

void copy(char *vec, char *src, int len){

  for(int i = 0; i< len; i++){
    vec[i] = src[i];
  } vec[len] = '\0';}

  void copy2(char *vec, char *src, int len, int limit){
  int j = 0;
  for(int i = len-1; i>= 0; i--){
    if(i == limit-1){break;}
    vec[j] = src[i];
    ++j;
  }vec[j+1]= '\0';

}

int main(void) {

  char frase[101];
  char temp1[101];
  char temp2[101];
  int len = 0;
  int n;
  
  scanf("%d",&n);
  getchar();
  
  for(int i = 0; i<n; i++){
    scanf("%[^\n]s",frase); //ex de entrada: NAMSOG
    getchar();
    
    len = strlen(frase);
    copy(temp1,frase,len/2); // copia conteúdo de 'frase' para 'temp1'
    
    reverse(temp1, strlen(temp1)); //'temp1' é invertido (MAN)
    
    copy2(temp2, frase, len,len-(len/2)); //corrige metade da frase (GOS)
    
    printf("%s%s\n",temp1,temp2);
    
    temp1[0] = '\0';
    temp2[0] = '\0';
  }


  return 0;
}
