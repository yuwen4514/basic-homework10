#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main()

{

  char S[5000];

  char ouput;

  printf("��J�@�ӭ^��r��G"); 

  while(scanf("%s",S)==1) 

  {

   printf("�B�z�L���r�ꬰ�G",ouput);

   int a,N=strlen(S); 
   for(a=0;a<N;a++)

   if(S[a]>='a')  
   printf("%c",S[a]-'a'+'A'); 

   else 
   printf("%c",S[a]-'A'+'a'); 

  } 

system("pause");
return 0;  

}
