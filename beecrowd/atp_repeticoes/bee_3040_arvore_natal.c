//
// Created by rogerio on 22/02/2026.
//
    #include <stdio.h>

    int main() {
        int n, h, d, g;
        scanf("%i",&n);
        for(int i=0; i<n; i++){
            scanf("%i%i%i",&h, &d, &g);
            int valida = (h>=200 && h<=300) && (d>=50) && (g>=150);
            if (valida) printf("Sim\n");
            else printf("Nao\n");
        }

        return 0;
    }
