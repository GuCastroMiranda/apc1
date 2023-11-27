#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

#define MAX_PALAVRA 20
#define MAX_TENTATIVAS 6

// Função para exibir o desenho da forca
void exibirForca(int tentativas) {
    printf("Tentativas restantes: %d\n", MAX_TENTATIVAS - tentativas);

    switch (tentativas) {
        case 0:
            printf("   _____\n");
            printf("  |     |\n");
            printf("  |     \n");
            printf("  |     \n");
            printf("  |     \n");
            break;
        case 1:
            printf("   _____\n");
            printf("  |     |\n");
            printf("  |     O\n");
            printf("  |     \n");
            printf("  |     \n");
            break;
        case 2:
            printf("   _____\n");
            printf("  |     |\n");
            printf("  |     O\n");
            printf("  |     |\n");
            printf("  |     \n");
            break;
        case 3:
            printf("   _____\n");
            printf("  |     |\n");
            printf("  |     O\n");
            printf("  |    /|\n");
            printf("  |     \n");
            break;
        case 4:
            printf("   _____\n");
            printf("  |     |\n");
            printf("  |     O\n");
            printf("  |    /|\\\n");
            printf("  |     \n");
            break;
        case 5:
            printf("   _____\n");
            printf("  |     |\n");
            printf("  |     O\n");
            printf("  |    /|\\\n");
            printf("  |    /\n");
            break;
        case 6:
            printf("   _____\n");
            printf("  |     |\n");
            printf("  |     O\n");
            printf("  |    /|\\\n");
            printf("  |    / \\\n");
            break;
    }
}

// Função para escolher aleatoriamente uma palavra do array
char* escolherPalavra() {
    char *palavras[] = {"estudioso", "computador", "Reginaldo", "retrospectiva", "elefante", "caminho", "aeroporto", "professor", "musica", "soberba", "cheirosa"};
    int tamanho = sizeof(palavras) / sizeof(palavras[0]);
    srand(time(NULL));
    return palavras[rand() % tamanho];
}

// Função principal
int main() {
    char palavraSecreta[MAX_PALAVRA];
    char palavraAtual[MAX_PALAVRA * 2]; // Tamanho suficiente para a palavra mais longa possível
    char letra;
    int tentativas = 0;
    int pontuacao = 0;

    int opcao;
    do {
        printf("\n=== JOGO DA FORCA ===\n");
        printf("Utilize apenas letras minusculas.\n");
        printf("1. Iniciar Jogo\n");
        printf("2. Como Jogar\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                // Inicializa o jogo
                strcpy(palavraSecreta, escolherPalavra());

                // Limpa a palavra atual antes de iniciar um novo jogo
                memset(palavraAtual, 0, sizeof(palavraAtual));

                // Preenche palavraAtual com underscores com base no tamanho da nova palavra
                memset(palavraAtual, '_', strlen(palavraSecreta));
                tentativas = 0;

                while (1) {
                    exibirForca(tentativas);
                    printf("Palavra atual: %s\n", palavraAtual);

                    printf("Digite uma letra: ");
                    scanf(" %c", &letra);

                    // Converter letra para minúscula
                    letra = tolower(letra);

                    // Verifica se a letra já foi tentada
                    if (strchr(palavraAtual, letra) != NULL) {
                        printf("Voce ja tentou essa letra. Tente novamente.\n");
                        continue;
                    }

                    // Verifica se a letra está na palavra secreta
                    if (strchr(palavraSecreta, letra) != NULL) {
                        for (int i = 0; i < strlen(palavraSecreta); i++) {
                            if (palavraSecreta[i] == letra) {
                                palavraAtual[i] = letra;
                            }
                        }

                        // Verifica se o jogador ganhou
                        if (strcmp(palavraAtual, palavraSecreta) == 0) {
                            printf("Parabens! Voce acertou a palavra: %s\n", palavraSecreta);
                            pontuacao += 10;
                            break;
                        }
                    } else {
                        tentativas++;

                        // Verifica se o jogador perdeu
                        if (tentativas == MAX_TENTATIVAS) {
                            exibirForca(tentativas);
                            printf("Voce perdeu! A palavra era: %s\n", palavraSecreta);
                            break;
                        }
                    }
                }

                printf("Sua pontuacao: %d\n", pontuacao);
                break;

            case 2:
                printf("\n=== COMO JOGAR ===\n");
                printf("Tente adivinhar a palavra secreta digitando letras. Cada letra correta\n");
                printf("revelara a posicao da letra na palavra. Voce tem um total de %d tentativas.\n", MAX_TENTATIVAS);
                break;

            case 3:
                printf("Saindo do jogo. Ate logo!\n");
                break;

            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 3);

    return 0;
}
