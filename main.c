#include <stdio.h>

int main(void) {
    int i;
    int errore;
    const int NVAL=10;
    const float TMIN=-20.0f;
    const float TMAX=50.0f;
    float temp,valoreMinimo;
    valoreMinimo=TMAX+1;
    for(i=0;i<NVAL;i++){
        do{
            errore=0;
            printf("inserisci la temperatura:");
            scanf("%f",&temp);
            if((temp<TMIN)||(temp>TMAX)){
                printf("la temperatura deve essere comprersa tra %.2f e %.2f\n",TMIN,TMAX);
                errore=1;
            }
        }while(errore==1);
        if(temp<valoreMinimo){
            valoreMinimo=temp;
        }
    }
    printf("il valore della temperatura minima e':%f\n",valoreMinimo);
    return 0;
}
