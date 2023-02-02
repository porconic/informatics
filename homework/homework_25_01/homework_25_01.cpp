#include <iostream>
using namespace std;

//	Ex.0
/*
Un debugger è un programma che permette il debug di ogni linea di codice, ovvero l'analisi passo per passo di
variabili e cicli.
*/

//	Ex.1
/*
GDB debugger
*/

//	Ex.2
/*
Disassemblare significa convertire le istruzioni da linguaggio macchina a linguaggio disassembly
*/

//	Ex.3
/*
La memoria heap è una memoria che, a differenza dello stack, va gestita manualmente: dichiarare i vari tipi con
malloc, calloc... per poi liberare lo spazio nel momento in cui non sono più utili. 
Si possono inoltre allungare o restringere le dimensioni degli array, rendendo questa memoria molto più flessibile.
*/

//	Ex.4
/*
La memoria heap è uno spazio di memoria che va gestito manualmente poiché vanno dichirate le variabile inserite
all'interno dell'heap che poi andranno liberate manualmente con free(nome_variabile); se questo non accadesse e 
continuassimo a scrivere sull'heap, che ha una grandezza variabile da pc a pc, il programma crasherebbe poiché non
avremmo liberato gli spazi precedenti, avremmo invece riempito la memoria restante.
*/

//	Ex.5
struct pointers {
	char* c;
	int* i;
	double* d;
};

pointers function(char* c[], int* i[], double* d[], int n){
	char* c[] = (char*)malloc(sizeof(char) * n);
	int* i[] = (int*)malloc(sizeof(int) * n);
	double* d[] = (double*)malloc(sizeof(double) * n);
}

//	Ex.6
/*
"Memory leak", tradotto letteralmente in "perdita di memoria" è il fenomeno che definisce quando nell'heap si alloca della
memoria, non venendo poi deallocata, causando uno spreco di memoria ed un possibile crash nel momento in cui l'heap non
avrà più spazio a disposizione.
E' un grave errore logico che può causare, come detto in precedenza, ad un crash del programma.
*/

//	Ex.7
/*
Non è stata allocata alcuna memoria nell'heap, quindi il free non sta liberando alcuna memoria inerente al programma.
*/

//	Ex.8
/*
Si sta liberando un puntatore che punta allo stack e non piu all'heap.
*/

//	Ex.9
/*
ls -> library search
cd -> change directory
pwd -> print working directory
mkdir -> make directory
sudo -> installare software
apt -> installazione, upgrade, update
kill -> chiude il programma
nano -> programmazione
g++ -> compilatore
break -> set break point
run -> runna il programma
*/

//	Ex.10
int main() {
	int* v[5];
	for (int i = 0; i < 5; i++) {
		int* v[i] = (int*)calloc(sizeof(int)*6);
	}
}

//	Ex.11
struct circle {
	double x_center, y_center;
	double radius;
};

int main() {
	struct circle* c = (circle*)malloc(sizeof(double) * 3);
}

//	Ex.12
/*
Assegnazione di una costante ad un puntatore.
*/
