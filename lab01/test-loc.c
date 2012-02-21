#include <stdio.h>
#include <libintl.h>
#include <locale.h>

#define NAME "test-loc"
#define ENABLE_NLS
#define _(text) gettext(text)

int main(int argc, char *argv[]){

#ifdef ENABLE_NLS
  setlocale (LC_ALL, "");
  bindtextdomain (NAME, "/tmp/locale");
  bind_textdomain_codeset (NAME, "ISO8859-2");
  textdomain (NAME);
#endif

  /* internationalized text */                                                                                             
  printf("%s\n", _("Hello, World"));
  printf("%s\n", "Hello, World");

  return 0;
}
