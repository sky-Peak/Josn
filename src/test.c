#include <stdio.h>
#include "test.h"
   int main()
{
  
  char* case1="{      }";
  char* case2 = "     \n   \t         { \"abc\":23, \"def\":\"ce   efg    \"}";
  char* case3 = " { \"abc\":23, \"def\":\"ce   efg    \"} ,{ \"qqq\"  :  \"QQQ\"}   " ;
  printf("%s\n", trim_all(case1));
  printf("%s\n", trim_all(case2));
  printf("%s\n", trim_all(case3));
  return 0;
}

