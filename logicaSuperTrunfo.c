#include <stdio.h>


int main(){
    char nome[50];

    // Variaveis Carta 1 e 2
    char estado[50], estado2[50];
    char codcart[3], codcart2[3];
    char nomecidade[30], nomecidade2[30];
    unsigned long int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int npt, npt2; // Número de Pontos Turísticos.
    float DP, DP2, inversaDP, inversaDP2; // Densidade Populacional
    float PIBPC, PIBPC2; //PIB per Capita
    float superpoder, superpoder2;
    int resultado;
    int pontos1 = 0;
    int pontos2 = 0;
    int menu;
    


    // ENTRADA DE DADOS CARTA 1

    printf("Olá usuario, qual o seu nome: "); //Pergunta o nome do usuario.
    fgets(nome, sizeof(nome), stdin); //Faz a leitura inteira da linha digitada pelo usuario, o fgets pega a string (o teclado) nesse caso a entrada padrao é o stdin (teclado).
    
    printf("Vamos começar o jogo. Por favor digite o estado da sua carta: ");
    fgets(estado, sizeof(estado), stdin);

    printf("Digite o Codigo da Carta (exemplo A01, B02): ");
    scanf("%s", codcart);
    while(getchar() != '\n'); // Precisei usar o while pois antes do fgets se tiver scanf ele ocorre um bug!

    printf("Digite o Nome da Cidade: ");
    fgets(nomecidade, sizeof(nomecidade), stdin);
    
    printf("Digite a População: ");
    scanf("%u", &populacao);

    printf("Digite a Area (tamanho da cidade em km): ");
    scanf("%f", &area);
    
    DP = (float)populacao / area;
    inversaDP = (float) area / populacao;

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    PIBPC = (float)(pib * 1000000000) / populacao;

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &npt);
    while(getchar() != '\n');

    superpoder = (long double)(populacao + pib + PIBPC + inversaDP + npt + area) / 6;


    printf("INFORMACOES DA CARTA 1 FINALIZADA, VAMOS PARA A CARTA 2\n\n"); // Cadastro da primeira carta finalizada!


    // ENTRADA DE DADOS CARTA 2

    printf("Por favor digite o Estado da sua segunda carta: ");
    fgets(estado2, sizeof(estado2), stdin);

    printf("Digite o codigo da carta2 (Exemplo: A01, A02): ");
    scanf("%s", codcart2);
    while(getchar() != '\n');

    printf("Digite o nome da cidade da carta2: ");
    fgets(nomecidade2, sizeof(nomecidade2), stdin);

    printf("Digite a População da carta2: ");
    scanf("%u", &populacao2);

    printf("Digite a Area (tamanho da cidade em km) da carta2: ");
    scanf("%f", &area2);

    DP2 = (float)populacao2 / area2;
    inversaDP2 = (float)area2 / populacao2;

    printf("Digite o PIB carta2: ");
    scanf("%f", &pib2);

    PIBPC2 = (float)(pib2 * 1000000000) / populacao2;

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &npt2);

    superpoder2 = (long double)(populacao2 + pib2 + PIBPC2 + inversaDP2 + npt2 + area2) / 6;

    printf("Parabens por concluir os registros das cartas.\n\n"); //Cadastro das duas cartas foi finalizado!

    // MOSTRANDO AO USUARIO A CARTA 1

    printf("CARTA 1\n\n");

    printf("Estado: %s", estado);
    printf("Código: %s\n", codcart);
    printf("Nome da Cidade: %s", nomecidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", npt);
    printf("Densidade Populacional: %.2f\n", DP);
    printf("PIB per Capita: %.2f\n", PIBPC);
    printf("Média do Super Poder: %.2f\n\n", superpoder);


    // MOSTRANDO AO USUARIO A CARTA 2
    printf("CARTA 2\n\n");

    printf("Estado: %s", estado2);
    printf("Código: %s\n", codcart2);
    printf("Nome da Cidade: %s", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", npt2);
    printf("Densidade Populacional: %.2f\n", DP2);
    printf("PIB per Capita: %.2f\n", PIBPC2);
    printf("Média do Super Poder: %.2f\n\n", superpoder2);


    // Aqui Mostra quem ganhou
    printf("Lembrando que a carta com menor densidade populacional ganha ponto!.\n");

    // População
    if(populacao > populacao2){
        printf("População: Carta 1 Venceu\n");
        pontos1++;
    } else if (populacao < populacao2) {
        printf("População: Carta 2 Venceu\n");
        pontos2++;

    } else {
        printf("População: Empate\n");
    
    }

    // Area
    if(area > area2){
        printf("Área: Carta 1 Venceu \n");
        pontos1++;
    } else if (area < area2) {
        printf("Área: Carta 2 Venceu\n");
        pontos2++;

    } else {
        printf("Área: Empate\n");
        
    }

    //Pib
    if(pib > pib2){
        printf("PIB: Carta 1 Venceu\n");
        pontos1++;
    } else if (pib < pib2) {
        printf("PIB: Carta 2 Venceu\n");
        pontos2++;
    } else {
        printf("PIB: Empate\n");
        
    }


    // Numero de Pontos Turisticos
    if(npt > npt2){
        printf("Pontos Turisticos: Carta 1 Venceu\n");
        pontos1++;
    } else if (npt < npt2) {
        printf("Pontos Turisticos: Carta 2 Venceu\n");
        pontos2++;
    } else {
        printf("Pontos Turisticos: Empate\n");
        
    }

    // Densidade Populacional
    if(DP < DP2){
        printf("Densidade Populacional: Carta 1 Venceu\n");
        pontos1++;
    } else if (DP > DP2) {
        printf("Densidade Populacional:  Carta 2 Venceu\n");
        pontos2++;
    } else {
        printf("Densidade Populacional: Empate\n");
    
    }

    //Pib
    if(pib > pib2){
        printf("PIB per Capita: Carta 1 Venceu\n");
        pontos1++;
    } else if (pib < pib2) {
        printf("PIB per Capita: Carta 2 Venceu\n");
        pontos2++;

    } else {
        printf("PIB per Capita: Empate\n");
       
    }

    // Super Poder
    if(superpoder > superpoder2){
        printf("Super Poder: Carta 1 Venceu\n\n");
        pontos1++;
    } else if (superpoder < superpoder2) {
        printf("Super Poder: Carta 2 Venceu\n\n");
        pontos2++;

    } else {
        printf("Super Poder: Empate\n\n");
       
    }


    printf("Escolha qual atributo deseja comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demografica (A menor vence)\n");
    printf("Digite a opção: ");
    scanf("%d", &menu);
    
    switch (menu){
        // Menu População
        case 1:
        populacao > populacao2 ? printf("A População da Carta 1 Venceu.\n") : printf("A População da Carta 1 Venceu.\n");
        
        break;

        // Menu Area
        case 2:
        area > area2 ? printf("A Área da Carta 1 Venceu\n") : printf("A Área da Carta 2 Venceu\n");

        break;
    
        case 3:
        pib > pib2 ? printf("O PIB da Carta 1 Venceu\n") : printf("O PIB da Carta 2 Venceu\n");

        break;
             
        case 4:
        npt > npt2 ? printf("O Número de pontos turísticos da Carta 1 Venceu\n") : printf("O Número de pontos turísticos da Carta 2 Venceu\n");

        break;

        case 5:
        DP < DP2 ? printf("A Densidade Populacional da Carta 1 Venceu\n") : printf("A Densidade Populacional da Carta 2 Venceu\n");

        break;

    default:
    printf("Opcao invalida");

        break;
    }

    // Pontos
    printf("Pontos Carta 1: %d\n", pontos1);
    printf("Pontos Carta 2: %d\n\n", pontos2);

    if(pontos1 > pontos2) {
        printf("Carta 1 Venceu Por maior pontos\n");
    }
    else if (pontos1 == pontos2) {
        printf("Nnehuma das cartas venceu, deu empate\n");
    } else {
        printf("Carta 2 Venceu Por maior pontos\n");
    }
    

    return 0;

}