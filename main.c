#include <stdio.h>

int main(){
    int t = 1;
    float pnum, dnum;
    char v;
    while(t){
        int entrada;
        printf("===============================\n");
        printf("   Calculadora Simples   \n");
        printf("===============================\n");
        printf("Selecione uma operação: \n");
        printf("1. Adição\n");
        printf("2. Subtração\n");
        printf("3. Multiplicação\n");
        printf("4. Divisão\n");
        printf("5. Sair\n");
        printf("Opção: ");
        
        scanf("%d", &entrada);

        if(entrada != 1 && entrada != 2 && entrada != 3 && entrada != 4 && entrada != 5){
            printf("Erro! Por favor, insira uma resposta adequada!");
            continue;
        }


        switch( entrada){
            case 1: {
                printf("Digite o primeiro número: ");
                scanf("%f", &pnum);
                printf("Digite o segundo número: ");
                scanf("%f", &dnum);
                printf("Resultado: %f + %f = %f\n", pnum, dnum, pnum + dnum);
                printf("Deseja realizar outra operação? (s/n): \n");
                scanf(" %c", &v);
                if(v == 'n' || v == 'N'){
                    printf("Obrigado por usar a calculadora! Até a próxima.");
                    return 0;
                } else if( v != 's' || v != 'S'){
                    printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.");

                }
                break;
            }
            case 2: {
                printf("Digite o primeiro número: ");
                scanf("%f", &pnum);
                printf("Digite o segundo número: ");
                scanf("%f", &dnum);
                printf("Resultado: %f - %f = %f\n", pnum, dnum, pnum - dnum);
                printf("Deseja realizar outra operação? (s/n): \n");
                scanf(" %c", &v);
                if(v == 'n' || v == 'N'){
                    printf("Obrigado por usar a calculadora! Até a próxima.");
                    return 0;
                } else if( v != 's' || v != 'S'){
                    printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.");

                }
                break;
            }
            case 3: {
                printf("Digite o primeiro número: ");
                scanf("%f", &pnum);
                printf("Digite o segundo número: ");
                scanf("%f", &dnum);
                printf("Resultado: %f x %f = %f\n", pnum, dnum, pnum * dnum);
                printf("Deseja realizar outra operação? (s/n): \n");
                scanf(" %c", &v);
                if(v == 'n' || v == 'N'){
                    printf("Obrigado por usar a calculadora! Até a próxima.");
                    return 0;
                } else if( v != 's' || v != 'S'){
                    printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.");

                }
                break;
            }
            case 4: {
                printf("Digite o primeiro número: ");
                scanf("%f", &pnum);
                printf("Digite o segundo número: ");
                scanf("%f", &dnum);
                if(dnum == 0){
                    printf("Erro: Divisão por zero não é permitida. \n");
                    printf("Deseja realizar outra operação? (s/n): \n");
                    scanf("%c", &v);
                    if(v == 'n'){
                        printf("Obrigado por usar a calculadora! Até a próxima.");
                        return 0;
                    }
                    break;
                }
                printf("Resultado: %f / %f = %f\n", pnum, dnum, pnum / dnum);
                printf("Deseja realizar outra operação? (s/n): \n");
                scanf(" %c", &v);
                if(v == 'n' || v == 'N'){
                    printf("Obrigado por usar a calculadora! Até a próxima.");
                    return 0;
                } else if( v != 's' || v != 'S'){
                    printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.");

                }
                break;
            }
            case 5: {
                printf("Obrigado por usar a calculadora! Até a próxima.");
                return 0;
            }
        }
    }
    
    return 0;
}
