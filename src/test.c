int main() {
  char* case1 = "{    }";
  char* case1 = " { \"abc\":23, \"def\":\"ce   efg    \"}";
  char* case1 = " { \"abc\":23, \"def\":\"ce   efg    \"} , { \"qqq\"  :  \"QQQ\"}   " ;

  printf("%s\n", trim_all(case1) );
  printf("%s\n", trim_all(case2) );
  printf("%s\n", trim_all(case3) );

  return ;
}

