#include <stdlib.h>
#include <locale.h> 
#include <wchar.h>

int main()
{
  setlocale(LC_ALL, "");
  wprintf(L"mario pokupec\n");
  return EXIT_SUCCESS;
}
