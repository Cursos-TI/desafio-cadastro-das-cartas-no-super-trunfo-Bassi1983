#include<stdio.h>

int main(){

int carta1;
char estado1 [] = "Minas Gerais";
char codigo_da_carta1[] = "A01";
char cidade1[] = "Juiz de Fora";
float população1 =  565.764;
float área1 = 1435.749;
float Pib1 = 35145.140;
int pontos_turisticos1 = 32;



int carta2;
char estado2 [] = " Minas Gerais";
char codigo_da_carta2[] = "B01";
char cidade2[] = "Belo_horizonte";
float população2 = 2521.600;
float área2 = 331.401;
float Pib2 = 105.0000000;
int pontos_turisticos2 = 50;

printf ("carta1:%d\n", carta1);
printf ("estado1:%s\n", estado1);
printf ("codigo_da_carta1:%s\n", codigo_da_carta1);
printf ("cidde1:%s\n", cidade1);
printf ("populacao1:%.3f\n", população1);
printf ("area1:%f\n",área1);
printf ("pib1:%f\n", Pib1);
printf ("pontos_turisticos1:%d\n", pontos_turisticos1);

printf ("carta2:%d\n", carta2);
printf ("estado2:%s\n", estado2);
printf ("codigo_da_carta2:%s\n", codigo_da_carta2);
printf ("cidade2:%s\n", cidade2);
printf ("populacao2:%.2f\n", população2);
printf ("area2:%f\n", área2);
printf ("pib2:%f\n", Pib2);
printf ("pontos_turisticos2:%d\n", pontos_turisticos2);
 return 0;
}

//git add supertrunfo.c
//git commit -m "Salvar versão para envio à faculdade"
//git push origin main

