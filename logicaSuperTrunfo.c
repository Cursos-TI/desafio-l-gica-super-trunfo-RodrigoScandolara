#include <stdio.h>

int main() {
    
    //Definindo as variáveis para as duas cartas.
    int pturistico1, pturistico2; //Variável ponto turístico para as duas cartas (em int por ser número inteiro).
    int atributo1, atributo2; //Atributo escolhido para a batalha
    int resultado1, resultado2;
    unsigned long int populacao1, populacao2; //Variável população para as duas cartas
    char codigo1[6] = "01", codigo2[6] = "05"; //Variável código para as duas cartas (em char por ser número inteiro + aracter).
    char estado1[20], estado2[20]; //Variável Estado para as duas cartas (em char por ser conjunto de caracteres).
    char nome1[20] = "Campinas", nome2[20] = "Manaus"; //Variável nome da cidade para as duas cartas (em char por ser conjunto de caracteres).
    float area1, area2; //Variável área para as duas cartas (em float por ser decimal).
    float pib1, pib2; //Variável PIB para as duas cartas (em float por ser decimal).
   
    float denPopulacional1, denPopulacional2; // Variável Densidade Populacional das duas cartas, em float por ser número decimal.
    float pibCapita1, pibCapita2; // Variável PIB per Capita das duas cartas, em float por ser número decimal. 
    
       
    //Solicitando para o usuário entrar com as informações da primeira carta, e escaneando os dados informados.
    printf("Carta 1\n");
    printf("Informe o nome do primeiro Estado: ");
    scanf("%s", estado1);

    printf("Informe o código da carta, representado por um número: ");
    scanf("%s", codigo1); //Strig não necessita de "&".

    printf("Informe o nome da primeira cidade: ");
    scanf("%s", nome1); //Strig não necessita de "&".

    printf("Informe a população da primeira cidade: ");
    scanf("%lu", &populacao1);

    printf("Informe a área da primeira cidade em kilometros quadrados: ");
    scanf("%f", &area1);

    printf("Informe o PIB da primeira cidade em bilhões de Reais: ");
    scanf("%f", &pib1);

    printf("Informe o número de pontos turísticos da primeira cidade: ");
    scanf("%d", &pturistico1);

    // Definindo o cálculo das variáveis. 
    denPopulacional1 = (float)populacao1 / area1; // Comversão explicita para variável "população".
    pibCapita1 = pib1 / (float)populacao1; // Comversão explicita para variável "população".
    pibCapita1 *= 1000000000; // Vezes 1 bilhão, para converter o resultado para "reais"
    

    //Exibindo as informações finais no terminal do usuário a respeito da primeira carta.
    printf("\nCarta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1); 
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1); //"%.2f" para que o dado seja exibido com duas casas decimais.
    printf("PIB: %.2f Bilhões de Reais\n", pib1); //"%.2f" para que o dado seja exibido com duas casas decimais.
    printf("Número de Pontos Turísticos: %d\n", pturistico1);
    printf("Densidade Populacional: %.2f hab/Km²\n", denPopulacional1); 
    printf("PIB per Capita: %.2f reais\n", pibCapita1); 
    
    //Solicitando para o usuário entrar com as informações da segunda carta, e escaneando os dados informados.
    printf("\nCarta 2\n");
    printf("Informe o nome do segundo estado: ");
    scanf(" %s",estado2); // Foi inserido um espaço antes do especificador de formato para corrigir o erro de "reconhecimento de ENTER como caracter".

    printf("Informe o código da carta, representado por um número: ");
    scanf("%s", codigo2); //Strig não necessita de "&".

    printf("Informe o nome da segunda cidade: ");
    scanf("%s", nome2); //Strig não necessita de "&".

    printf("Informe a população da segunda cidade: ");
    scanf("%lu", &populacao2);

    printf("Informe a área da segunda cidade em kilometros quadrados: ");
    scanf("%f", &area2);

    printf("Informe o PIB da segunda cidade em bilhões de Reais: ");
    scanf("%f", &pib2);

    printf("Informe o número de pontos turísticos da segunda cidade: ");
    scanf("%d", &pturistico2);

    // Definindo o cálculo das variáveis.
    denPopulacional2 = (float)populacao2 / area2; // Comversão explicita para variável "população".
    pibCapita2 = pib2 / (float)populacao2; // Comversão explicita para variável "população".
    pibCapita2 *= 1000000000; // Vezes 1 bilhão, para converter o resultado para "reais"

    //Exibindo as informações finais no terminal do usuário a respeito da segunda carta.
    printf("\nCarta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2); 
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2); //"%.2f" para que o dado seja exibido com duas casas decimais.
    printf("PIB: %.2f Bilhões de Reais\n", pib2); //"%.2f" para que o dado seja exibido com duas casas decimais.
    printf("Número de Pontos Turísticos: %d\n", pturistico2);
    printf("Densidade Populacional: %.2f hab/Km²\n", denPopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibCapita2); 


    //Criando o menu
    printf("\n*** Batalha de Supertrunfo! ***\n");
    printf("Escolha o primeiro atributo!\n");
    printf("1. Para população.\n");
    printf("2. Para área.\n");
    printf("3. Para PIB.\n");
    printf("4. Para Número de pontos turísticos.\n");
    printf("5. Para densidade populacional.\n");
    printf("6. Para PIB per capita.\n");
    printf("\nEscolha o atributo: ");
    scanf("%d", &atributo1);

    
    switch (atributo1){

        case 1:
            printf("\nVocê escolheu o atributo POPULAÇÃO!\n");
            resultado1 = populacao1 > populacao2 ? 1 : 0;
            break;

        case 2:
            printf("\nVocê escolheu o atributo ÁREA!\n");
            resultado1 = area1 > area2 ? 1 : 0;
            break;

        case 3:
            printf("\nVocê escolheu o atributo PIB!\n");
            resultado1 = pib1 > pib2 ? 1 : 0;
            break;
            
        case 4:
            printf("\nVocê escolheu o atributo PONTOS TURÍSTICOS!\n");
            resultado1 = pturistico1 > pturistico2 ? 1 : 0;
            break;

        case 5:
            printf("\nVocê escolheu o atributo DENSIDADE POPULACIONAL!\n");
            resultado1 = denPopulacional1 < denPopulacional2 ? 1 : 0;
            break;
            
        case 6:
            printf("\nVocê escolheu o atributo PIB PER CAPITA!\n");
            resultado1 = pibCapita1 > pibCapita2 ? 1 : 0;
            break; 
                        
        default:
            printf("\nOpção Inválida! Tente Novamente!\n");
            break;
    }

    printf("\nEscolha o segundo atributo!\n");
    printf("1. Para população.\n");
    printf("2. Para área.\n");
    printf("3. Para PIB.\n");
    printf("4. Para Número de pontos turísticos.\n");
    printf("5. Para densidade populacional.\n");
    printf("6. Para PIB per capita.\n");
    printf("\nEscolha o atributo: ");
    scanf("%d", &atributo2);
    
    if (atributo1 == atributo2){
        printf("\nVocê escolheu o mesmo atributo!! Tente novamente!!\n");

    } else {

        switch (atributo2){

            case 1:
                printf("\nVocê escolheu o atributo POPULAÇÃO!\n");
                resultado2 = populacao1 > populacao2 ? 1 : 0;
                break;

            case 2:
                printf("\nVocê escolheu o atributo ÁREA!\n");
                resultado2 = area1 > area2 ? 1 : 0;
                break;

            case 3:
                printf("\nVocê escolheu o atributo PIB!\n");
                resultado2 = pib1 > pib2 ? 1 : 0;
                break;
            
            case 4:
                printf("\nVocê escolheu o atributo PONTOS TURÍSTICOS!\n");
                resultado2 = pturistico1 > pturistico2 ? 1 : 0;
                break;

            case 5:
                printf("\nVocê escolheu o atributo DENSIDADE POPULACIONAL!\n");
                resultado2 = denPopulacional1 < denPopulacional2 ? 1 : 0;
                break;
            
            case 6:
                printf("\nVocê escolheu o atributo PIB PER CAPITA!\n");
                resultado2 = pibCapita1 > pibCapita2 ? 1 : 0;
                break; 
                        
            default:
                printf("Opção Inválida! Tente Novamente!\n");
                break;
    }



                 if (resultado1 && resultado2){
                    printf("\n## RESULTADO FINAL ##\n");
                    printf("* Carta 1 - %s (%s) X Carta 2 - %s (%s) *\n", estado1, nome1, estado2, nome2);
                    printf("*** A Carta 1 - %s (%s) GANHOU!! ***\n", estado1, nome1);

                    } else if (resultado1 != resultado2){
                        printf("\n## RESULTADO FINAL ##\n");
                        printf("* Carta 1 - %s (%s) X Carta 2 - %s (%s) *\n", estado1, nome1, estado2, nome2);
                        printf("O jogo EMPATOU!!\n");

                    } else{
                        printf("\n## RESULTADO FINAL ##\n");
                        printf("* Carta 1 - %s (%s) X Carta 2 - %s (%s) *\n", estado1, nome1, estado2, nome2);
                        printf("A Carta 2 - %s (%s) GANHOU!!\n", estado2, nome2);
    }}
    

    return 0;
}
 

