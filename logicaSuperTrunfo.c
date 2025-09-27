#include <stdio.h>

int main() {
    
    //Definindo as variáveis para as duas cartas.
    int pturistico1, pturistico2; //Variável ponto turístico para as duas cartas (em int por ser número inteiro).
    int atributo1; //Atributo escolhido para a batalha
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
    printf("Escolha sua opção!\n");
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
            printf("\n* O atributo escolhido foi: POPULAÇÃO *\n");
            printf("\n## RESULTADO FINAL ##\n");
            printf("\n* Carta 1 - %s (%s) X Carta 2 - %s (%s) *\n", estado1, nome1, estado2, nome2);
            printf("População 1: %lu habitantes X População 2: %lu\n", populacao1, populacao2);
        if (populacao1 > populacao2){
            printf("\n### A Carta 1 - %s (%s) VENCEU!! ###\n", estado1, nome1);
        } else if (populacao1 < populacao2){
            printf("\n### A Carta 2 - %s (%s) VENCEU!! ###\n", estado2, nome2);
        } else{
            printf("\n### O jogo empatou!! ###\n");
        }
        break;


        case 2:
            printf("\n* O atributo escolhido foi: ÁREA *\n");
            printf("\n## RESULTADO FINAL ##\n");
            printf("\n* Carta 1 - %s (%s) X Carta 2 - %s (%s) *\n", estado1, nome1, estado2, nome2);
            printf("Área 1: %.2f Km² X Área 2: %.2f Km²\n", area1, area2);
        if (area1 > area2){
            printf("\n### A Carta 1 - %s (%s) VENCEU!! ###\n", estado1, nome1);
        } else if (area1 < area2){
            printf("\n### A Carta 2 - %s (%s) VENCEU!! ###\n", estado2, nome2);
        } else{
            printf("\n### O jogo empatou!! ###\n");
        }
            break;


        case 3:
            printf("\n* O atributo escolhido foi: PIB *\n");
            printf("\n## RESULTADO FINAL ##\n");
            printf("\n* Carta 1 - %s (%s) X Carta 2 - %s (%s) *\n", estado1, nome1, estado2, nome2);
            printf("PIB 1: %.2f Bilhões de reais X PIB 2: %.2f Bilhões de reais\n", pib1, pib2);
        if (pib1 > pib2){
            printf("\n### A Carta 1 - %s (%s) VENCEU!! ###\n", estado1, nome1);
        } else if (pib1 < pib2){
            printf("\n### A Carta 2 - %s (%s) VENCEU!! ###\n", estado2, nome2);
        } else{
            printf("\n### O jogo empatou!! ###\n");
        }
            break;
            

        case 4:
            printf("\n* O atributo escolhido foi: Número de pontos turísticos *\n");
            printf("\n## RESULTADO FINAL ##\n");
            printf("\n* Carta 1 - %s (%s) X Carta 2 - %s (%s) *\n", estado1, nome1, estado2, nome2);
            printf("Pontos turísticos 1: %d X Pontos turísticos 2: %d\n", pturistico1, pturistico2);
        if (pturistico1 > pturistico2){
            printf("\n### A Carta 1 - %s (%s) VENCEU!! ###\n", estado1, nome1);
        } else if (pturistico1 < pturistico2){
            printf("\n### A Carta 2 - %s (%s) VENCEU!! ###\n", estado2, nome2);
        } else{
            printf("\n### O jogo empatou!! ###\n");
        }
            break;


        case 5:
            printf("\n* O atributo escolhido foi: Densidade populacional *\n");
            printf("\n## RESULTADO FINAL ##\n");
            printf("\n* Carta 1 - %s (%s) X Carta 2 - %s (%s) *\n", estado1, nome1, estado2, nome2);
            printf("Densidade populacional 1: %.2f hab/Km² X Densidade populacional 2: %.2f hab/Km²\n", denPopulacional1, denPopulacional2);
        if (denPopulacional1 < denPopulacional2){
            printf("\n### A Carta 1 - %s (%s) VENCEU!! ###\n", estado1, nome1);
        } else if (denPopulacional1 > denPopulacional2){
            printf("\n### A Carta 2 - %s (%s) VENCEU!! ###\n", estado2, nome2);
        } else{
            printf("\n### O jogo empatou!! ###\n");
        }
            break;

            
        case 6:
            printf("\n* O atributo escolhido foi: PIB per capita *\n");
            printf("\n## RESULTADO FINAL ##\n");
            printf("\n* Carta 1 - %s (%s) X Carta 2 - %s (%s) *\n", estado1, nome1, estado2, nome2);
            printf("PIB per capita 1: %.2f reais X PIB per capita 2: %.2f reais\n", pibCapita1, pibCapita2);
        if (pibCapita1 > pibCapita2){
            printf("\n### A Carta 1 - %s (%s) VENCEU!! ###\n", estado1, nome1);
        } else if (pibCapita1 < pibCapita2){
            printf("\n### A Carta 2 - %s (%s) VENCEU!! ###\n", estado2, nome2);
        } else{
            printf("\n### O jogo empatou!! ###\n");
        }
            break; 
            
            
        default:
            printf("Opção Inválida! Tente Novamente!\n");
    }

    return 0;
}
 

