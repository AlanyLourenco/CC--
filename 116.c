#include <stdio.h>

/**
 * Imprime os bits do byte endereçados por end_byte.
 * @param end_byte endereço do byte a ser impresso
 */
void print_byte(char end_byte) {
	unsigned char byte;
	int pot, k, i;

	byte = (unsigned char ) end_byte;
	
	pot = 128;
	for ( i = 0; i < 8; i++ ) {
		k = byte / pot;
		if ( k > 0 ) {
			printf("1");
			byte %= pot;
		} else printf("0");
		pot = pot / 2;
	}
}

void print_bytes(const void * end_byte, int n) {
	int i;
	unsigned char * c = (unsigned char *) end_byte;
	for ( i = 0; i < n; i++ ) {
		print_byte( *(c + i) );
		printf(" ");
	}
}

int main() {

	unsigned char ch;
	unsigned short sh;
	unsigned int in;
	float fl;
	double db;

	scanf("%lf", &db);
	ch = sh = in = fl = db;

	print_bytes(&ch, sizeof(ch)); printf("\n");
	print_bytes(&sh, sizeof(sh)); printf("\n");
	print_bytes(&in, sizeof(in)); printf("\n");
	print_bytes(&fl, sizeof(fl)); printf("\n");
	print_bytes(&db, sizeof(db)); printf("\n");

	return 0;
}