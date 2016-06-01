#include <stdlib.h>
#include <locale.h>
#include <wchar.h>

int main()
{
setlocale(LC_ALL, "");
wprintf(L"Josip Kodzoman\n");
return EXIT_SUCCESS;
}

