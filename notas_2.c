#include <stdio.h>
int main()
{
    float n1, n2, n3, media;
    float frequencia;
    float categoria;

    printf ("digite as tres notas:");
    scanf("%f %f %f", &n1, &n2, &n3);

    media = (n1 + n2 + n3)/3.0;

    printf ("digite a frequencia do estudante:\n");
    scanf("%f", &frequencia);

    if (media<0 || media > 10 || frequencia <0 || frequencia > 100){
      printf("erro: valores inválidos. A media deve estar entre 0 e 10, e a frequencia entre 0%% e 100%%.\n");
      return 1;
    }
    
    if (media>8.0 && frequencia >=75.0){
        printf("aprovado com distinção.");
        categoria =1;
    }
    else if (media>=6.0 && frequencia >=75.0){
        printf("aprovado direto.");
        categoria = 2;
    }
    else if ((media>=4.0 && media < 6.0 && frequencia >=75.0) ||
            (media>=6.0 &&  frequencia < 75.0)||
            (media>=4.0 && frequencia > 50.0 && frequencia <75.0)){
        printf("vai para a final.");
        categoria = 3;
    }
    else{
        printf("reprovado direto.");
        categoria = 4;
    }
    if (categoria==1)
    printf("\n O estudante foi %s pois teve media %.1f e frequencia %.1f%%.\n",
           media, frequencia);
    else if (categoria==2)
    printf("\n O estudante foi %s pois teve media %.1f e frequencia %.1f%%.\n",
           media, frequencia);
    else if (categoria==3)
    printf("\n O estudante foi %s pois teve media %.1f e frequencia %.1f%%.\n",
           media, frequencia);
    else
    printf("\n O estudante foi %s pois teve media %.1f e frequencia %.1f%%.\n",
           media, frequencia);
    return 0;
}
