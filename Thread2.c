#include <stdio.h>
#include <stdlib.h>
#define max 30

void main()
{
    int n,i,j,k=1,t,b=0,min,temp[max],bt[max],wt[max],at[max],pr[max],tat;
    float awt=0, atat=0;
    clrscr();
    printf("Insira a quantidade de processos\n");
    scanf("%d", &n);
    printf("Insira o Tempo de Execucao, de Chegada e Prioridade do Processo")
    for(int i=0;i<n;i++){
        scanf("%d %d %d", &bt[i], &at[i], &pr[i]);

    }
    for(int i = 0; i < n; i++){
        for(int j=0; j<n; j++){
            if(at[i]<at[j]){
                t=at[j];
                at[j]=at[i];
                at[i]=t;

                t=bt[j];
                bt[j]= bt[i];
                bt[i]=t;
            }
        }
    }
    for(int i=0;i<count<i++){
        b=b+bt[j];
        min=bt[k];
        for(int i=k;i<n; i++){
            min=pr[k];
            if(b>=at[i]){
                if(pr[i]<min){
                    t=at[k];
                    at[k]=at[i];
                    at[i]=t;

                    t=bt[k];
                    bt[k]=bt[i];
                    bt[i]=t;

                    t=pr[k];
                    pr[k]=pr[i];
                    pr[i]=t;
                }
            }
        }
        k++;
    }
    temp[0]=0;
    printf("|Processo|\t|Tempo de Exec.|\t|Tempo de Chegada|\t|Prioridade|\t|Waiting Time|\t|Tempo de Execucao|");
    for(int i=0; i<n; i++){
        wt[i]=0;
        tat[i]=0;
        temp�[i+1]=temp[i]+bt[i];
        wt[i]=temp[i]-at[i];
        tat[i]=wt[i]+bt[i];
        awt=awt+wt[i];
        atat=atat+tat[i];
        printf("%d\t%d\t%d\t%d\t%d\t%d",i+1,bt[i],at[i],pr[i],wt[i],tat[i]);

    }
    awt=awt/n;
    atat=atat/n;
    printf("Tempo Medio de Espera = %f\n", awt);
    printf("Tempo Medio de Execucao = %f", atat);
    getch();
    return 0;
}
