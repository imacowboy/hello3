/* time.c */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* die Kopfzeile eines Standard-HTML-Dokuments;
 * Titel: String, der als Titel erscheinen soll
 */
void print_html_header(char *titel) {
   printf("<html><head>\n");
   printf("<title>%s</title>\n",titel);
   printf("</head><body>\n");
}

/* das Ende eines HTML-Dokuments */
void print_html_end(void) {
   printf("</body></html>\n");
}

/* damit ueberhaupt ein HTML-Dokument ausgegeben wird */
void print_header(void) {
   printf("Content-Type: text/html\n\n");
}

void print_time(void) {
   time_t zeit;

   time(&zeit);
   printf("Aktuelle Systemzeit: ");
   printf("%s\n",ctime(&zeit));
}

int main(void) {
   print_header();
   print_html_header("Hallo Welt in CGI mit Zeit\n");
   print_time();
   print_html_end();
   return EXIT_SUCCESS;
}
