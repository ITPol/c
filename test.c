#include <stdio.h>

main()
{
  /** Conversation Strings */
  char* fiskaya = "\033[22;31m Hello yes ,ı am learning git system :)\n";
  char* str = "Merhaba my foreign friend, testing editing github files.\n";
  
  // Sorry for the long text, don't know how to make a new line without breaking the string (in java you can use the + operator)
  char* itpol_a = "Glad to meet you :).\n So I am pretty new to github and c, how do you make those colors like \033[22;31m\n Is there a list for those colors?\n I did compile this code and saw your red text haha that is very nice :)\n";
  
  /** Conversation */
  printf("Merhaba Dünya , test github.\n");
  printf("%s",str);
  printf("%s",fiskaya);
  printf("%s",itpol_a);

}
