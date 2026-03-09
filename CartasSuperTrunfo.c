

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// João Vitor Dallo Nascimento
// nível novato

int main() {
    char estado[50], codigo[50], nome[50];
    int populaçao,turisticos;
    float area, PIB;

    char estado2[50], codigo2[50], nome2[50];
    int populaçao2,turisticos2;
    float area2, PIB2;

    printf("carta 1\n");
    printf("Digite o estado:\n");
    scanf("%s", estado);

    printf("Digite o código da carta\n");
    scanf("%s", codigo);

    printf("Nome do estado:\n");
    scanf("%s", nome);

    printf("População:\n");
    scanf("%d", &populaçao);

    printf("Qual sua área total?:\n");
    scanf("%f", &area);

    printf("Qual é o PIB?:\n");
    scanf("%f", &PIB);

    printf("tem quantos pontos turisticos?:\n");
    scanf("%d", &turisticos);

    //-----------------------------

    printf("carta 2\n");
    printf("Digite o estado:\n");
    scanf("%s", estado2);

    printf("Digite o código da carta\n");
    scanf("%s", codigo2);

    printf("Nome do estado:\n");
    scanf("%s", nome2);

    printf("População:\n");
    scanf("%d", &populaçao2);

    printf("Qual sua área total?:\n");
    scanf("%f", &area2);

    printf("Qual é o PIB?:\n");
    scanf("%f", &PIB2);

    printf("tem quantos pontos turisticos?:\n");
    scanf("%d", &turisticos2);

    printf("carta 1\n");
    printf("Estado: %s\n", estado);
    printf("Código da cidade: %s\n", codigo);
    printf("Nome da cidade: %s\n", nome);
    printf("População: %d\n", populaçao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", PIB);
    printf("Número de pontos turísticos: %d\n\n", turisticos);
   

    //---------------------------

    printf("carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código da cidade: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %d\n", populaçao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", PIB2);
    printf("Número de pontos turísticos: %d\n", turisticos2);

    return 0;
}
