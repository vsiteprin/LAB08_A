#include <stdlib.h>
#include <locale.h> 
#include <wchar.h>

int main()
{
  setlocale(LC_ALL, "");
  wprintf(L"Domagoj Krušić\n");
  return EXIT_SUCCESS;
}
