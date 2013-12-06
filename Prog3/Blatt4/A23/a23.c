/*
Erl�utern Sie die Unterschiede zwischen den folgenden Deklarationen einer Funktion, die das erste Auftreten eines Zeichens in einem C-String sucht und einen Zeiger auf das gefundene Zeichen zur�ckgibt. Welche Variante eignet sich am besten? Begr�nden Sie Ihre Antwort.

const char* strChar(char *s, int c);
char* strChar(const char *s, int c);
char* strChar(char const *s, int c);
 * const char* strChar(char *s, int c);
 * -> liefert einen konstanten Zeiger vom Typ char zurück, übernimmt zwei variable Argumente vom Typ Zeiger auf char und int
 *
 * char* strChar(const char *s, int c);
 * -> liefert einen Zeiger vom Typ char zurück, übernimmt zwei Argumente vom Typ Zeiger auf konstanten char und int
 *
 * char* strChar(char const *s, int c);
 * -> liefert einen Zeiger vom Typ char zurück, übernimmt zwei Argumente vom Typ konstaner Zeiger auf char und int
 */
