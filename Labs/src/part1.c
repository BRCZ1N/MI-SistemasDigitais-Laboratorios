#include <stdio.h>
#include <stdlib.h>

int buscaMaior(int v[], int tamanho) {
    int maior = v[0];

    for (int i = 1; i < tamanho; i++) {
        if (v[i] > maior) {
            maior = v[i];
        }
    }

    return maior;
}

int main() {

    int numeros[] = {4, 5, 3, 6, 1, 8, 2};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    int maior = buscaMaior(numeros, tamanho);

    printf("O maior é: %d\n", maior);

    return 0;

}




/*
void bubbleSort(int v[], int tamanho){

	// Loop para iterar sobre o vetor
	for(int i = 0; i < tamanho - 1; i++){

		// Loop para comparar e trocar os elementos adjacentes
		for(int j = 0; j < tamanho - i -1; j++)

			// Verifica se o elemento atual é maior que o próximo
			if(v[j] > v[j+1]){

				// Troca os elementos se estiverem na ordem errada
				int temp = v[j];
				v[j] = v[j+1];
				v[j+1] = temp;

			}

	}

}

int main(void) {

	// Define o tamanho do vetor
	int tamanho = 5;
	// Declara o vetor com o tamanho especificado
	int v[tamanho];

	// Preenche o vetor com os valores fornecidos pelo usuário
	for(int i = 0; i < tamanho; i++){

		printf("Digite o %d° numero para armazenar no vetor:",i+1);
		scanf("%d", &v[i]);

	}

	// Chama a função bubbleSort para ordenar o vetor
	bubbleSort(v,tamanho);

	// Imprime o menor número do vetor, que estará na primeira posição após a ordenação
	printf("O menor numero do vetor é:%d",v[tamanho-1]);

	return 0;

}
*/


