#include <stdio.h>
#include <libintl.h>
#include <locale.h>

#define _(cadena) gettext(cadena)

int main(int argc, const char *argv[]){
	bind_textdomain_codeset ("Intel-BUAP", "UTF-8");
	setlocale(LC_ALL, "");
	bindtextdomain("Intel-BUAP", "Gettext");
	textdomain("Intel-BUAP");
	char  cadena[] = "Hola mundo piñata!";
	char nombre[] = _("Hola alumnos intel buap");
	

	printf(_("Hola mundo\n"));
	
	return 0;
}

