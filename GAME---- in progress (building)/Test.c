#include <stdio.h>
#include <string.h>

int main()
{
   char s1 = '\0';
   char s2 = '\0';
   int i1 = 0;

   scanf("%c", &s1);
   scanf("%c", &s2);
   scanf("%i", &i1);
   printf("%c %i %i", s1, s2, i1);



   /*char str1[5] = "Rakes";
  char str2[5] = "Rakee";
  int ret;

  ret = strncmp(str1, str2, 5);
  printf("%d",ret);

  if(ret > 0)
  {
    printf("str1 is longer");
  }
  else if(ret < 0)
  {
    printf("str2 is longer");
  }
  else
  {
    printf("The two strings are equal");
  }

  return(0);
*/








   /*char Name[] = {'V','I','N','N','Y','V','I','N','N','Y','\0'};
    for(int i = 0 ; i<6;i++)
    {
        printf("%c\n",Name[i]);
    }
    printf("%d\n",Name);
    printf("End");


    //Array
    //int num = 0;
    //scanf("%d",&num);
    //printf("The Input Value:%d\n",num);

    int Number[5] ;//= {11,12,13,14,15};

    //Initialization of Array
    for(int i = 0 ; i<5;i++)
    {
        Number[i]=0;
    }

    for(int i = 0 ; i<5;i++)
    {
        printf("\n%d",Number[i]);
    }
*/
}
