#include <stdio.h>

int main() {
    int carta, populacao, PT, carta2, PT2, populacao2;
    char estado[8], code[5], cidade[40], estado2[8], cidade2[40], code2[4];
    float area, PIB, area2, PIB2;

        printf("Digite o numero de uma carta: \n");
    scanf("%d", &carta);  
    
    printf("Digite o estado da primeira carta: \n");
    scanf(" %s", estado);  
    
    printf("Digite o código da carta (ex: A01): \n");
    scanf(" %s", code); 
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade);  
    
    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);  
    
    printf("Digite a área: \n");
    scanf("%f", &area);  
    
    printf("Digite o PIB: \n");
    scanf("%f", &PIB);  
    
    printf("Digite os pontos turísticos: \n");
    scanf("%d", &PT);  
    
    printf("Carta: %d\n", carta);  
    printf("Estado: %s\n", estado);  
    printf("Código da Carta: %s%s\n", code, estado);  
    printf("Nome da Cidade: %s\n", cidade);  
    printf("População: %d\n", populacao);  
    printf("Área: %.2f km^2\n", area);  
    printf("PIB: %.2f\n", PIB);   
    printf("Número de Pontos Turísticos: %d\n", PT);  
    
    printf("\n\n\n");

    printf("Digite o numero de uma carta: \n");
    scanf("%d", &carta2);  
    
    printf("Digite o estado da segunda carta: \n");
    scanf(" %s", estado2); 
    
    printf("Digite o código da carta (ex: A01): \n");
    scanf(" %s", code2);  
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);  
    
    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao2); 
    
    printf("Digite a área: \n");
    scanf("%f", &area2); 
    
    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);  
    
    printf("Digite os pontos turísticos: \n");
    scanf("%d", &PT2);  
    
    printf("Carta: %d\n", carta2);  
    printf("Estado: %s\n", estado2);  
    printf("Código da Carta: %s%s\n", code2, estado2);  
    printf("Nome da Cidade: %s\n", cidade2);  
    printf("População: %d\n", populacao2);  
    printf("Área: %.2f km^2\n", area2);  
    printf("PIB: %.2f\n", PIB2);    
    printf("Número de Pontos Turísticos: %d\n", PT2);  
    return 0;
}
