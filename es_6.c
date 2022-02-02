#include  <stdio.h>
int  main ( int argc, char *argv[])
{
    int a, b, num, somma = 0, conta = 0;
    double media;
    do
    {
        printf("Inserisci il valore di a\n");
        scanf("%d", &a);
        printf("Inserisci il valore di b\n");
        scanf("%d", &b);
    }while(a >= b);
    do
    {
        printf("Inserisci un numero\n");
        scanf("%d", &num);
        if(num >= a && num <= b)
        {
            somma += num;
            conta++;
        }
    }while (num >= a && num <= b);
    media = (double)somma/(double)conta;
    printf("La media dei valori inseriti è: %f /n", &media);
    return 0;
}
