#include<stdio.h>

int main(){

    return 0;
}

/* Exercícios slides 3

Questão 1:

    float peso, altura;
    scanf("%f %f", &peso, &altura);
    printf("%.2f", peso/(altura*altura));

Questão 2:

float km;

    printf("Insira a distancia percorrida:\n");
    scanf("%f", &km);

    printf("Valor cobrado pela agencia A: %.2f\n",62+1.40*km);
    printf("Valor cobrado pela agencia B: %.2f\n",80+1.20*km);


Questão 3:

    float desconto, valorMercadoria, descontoNormalizado;

    printf("Insira o valor do produto:\n");
    scanf("%f", &valorMercadoria);

    printf("Insira a porcentagem de desconto:\n");
    scanf("%f", &desconto);

    descontoNormalizado = desconto/100;

    printf("Valor do desconto: %.2f\n", valorMercadoria*descontoNormalizado);
    printf("Valor final do produto: %.2f\n",valorMercadoria*(1-descontoNormalizado));

QUESTÃO 4:
    float kg,vezes;

    printf("Insira o peso da crianca e tecle enter:\n");
    scanf("%f", &kg);

    vezes = kg/2;
    printf("Quantidade de gotas: %.f\n", vezes*5);

Questão 5:

    int idadeEmDias;

    printf("Voce tem quantos dias de idade?\n");
    scanf("%d", &idadeEmDias);

    printf("Voce ja viveu %d anos, %d meses e %d dias\n", idadeEmDias/365, (idadeEmDias%365)/30, (idadeEmDias%365)%30);

    return 0;

RESOLUÇÕES SLIDES 4 - ESTRUTURAS CONDICIONAIS

*****QUESTÃO 1******************************************************************
    int idade;
    float peso;

    printf("Digite sua idade:\n");
    scanf("%d", &idade);

    if(idade <18 || idade>65){
            printf("Sua idade nao permite a doacao de sangue!\n");
    }else{
        printf("Digite seu peso:\n");
        scanf("%f", &peso);

        if(peso>=50)
            printf("Voce pode doar sangue!\n");
        else
            printf("Seu peso atual nao permite a doacao de sangue!\n");

    }
***************************QUESTÃO 2********************************************
    int idade, idiomasF;
    float altura;

    printf("Ola! Digite a sua idade:\n");
    scanf("%d", &idade);

    if(idade < 24){
        printf("Voce nao possui idade adequada a funcao");
    } else{
        printf("Qual a sua altura? (em metros)\n");
        scanf("%f", &altura);

        if(altura < 1.70){
            printf("Voce eh muito baixinha!");

        } else {
                printf("Quantos idiomas voce eh fluente?\n");
                scanf("%d", &idiomasF);

                if(idiomasF < 2)
                    printf("Voce nao possui formacao linguistica suficiente");
                else
                    printf("Parabens! Voce esta apta a concorrer para a vaga!\n");
        }
    }

*************************04/07/22 QUESTÃO 3 ****************************
    float salario, prestacao;

    scanf("%f %f", &salario, &prestacao);

    if(prestacao > (salario*0.3))
        printf("Nao sera possivel realizar o emprestimo");
    else
        printf("Eh possivel realizar o emprestimo");


******************************QUESTÃO 4*********************************

float dias,pesoCachorro, pesoRacao;

    printf("Digite o peso do cachorro em kg, tecle enter, depois insira o peso da racao tambem em kg:\n");
    scanf("%f %f", &pesoCachorro, &pesoRacao);

    pesoRacao*= 1000;

    if(pesoCachorro<=5){
        dias = pesoRacao/60;
    }else if(pesoCachorro >5 && pesoCachorro<=10){
        dias = pesoRacao/95;
    }else if(pesoCachorro > 10 && pesoCachorro <=15){
        dias = pesoRacao/135;
    }else if(pesoCachorro >16 && pesoCachorro<=20 ){
        dias = pesoRacao/170;
    }else
        dias = pesoRacao/215;

    printf("A racao vai durar %.f dias", dias);

*/
