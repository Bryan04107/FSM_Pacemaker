#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "mylib/mylib.h"

int main() {
    int cs1=0, cs2=0, i1=0, i2=0, ns1=0, ns2=0, o1=0, o2=0;
    while(true){
        if (ns1==0 && ns2==0){
            system("clear");
            printf("Normal Mode\n");
            printf("   _______________________________ \n");
            printf("  /                               \\ \n");
            printf(" /   ___________________________   \\ \n");
            printf("|   |          _    __          |   |______ \n");
            printf("|   |  |\\  |  / \\  |__| |\\  /|  |   |_____ \\ \n");
            printf("|   |  | \\ | |   | | \\  | \\/ |  |   |     \\ \\ \n");
            printf("|   |  |  \\|  \\_/  |  \\ |    |  |   |      \\ \\ \n");
            printf("|   |___________________________|   |       \\ \n");
            printf(" \\                                 / \n");
            printf("  \\_______________________________/ \n");
        }
        else if (ns1==0 && ns2==1){
            system("clear");
            printf("Tachycardia\n");
            printf("   _______________________________ \n");
            printf("  /                               \\ \n");
            printf(" /   ___________________________   \\ \n");
            printf("|   |  _____  ___               |   |______ \n");
            printf("|   |    |   |     |    |  \\ /  |   |_____ \\ \n");
            printf("|   |    |   |     |----|   |   |   |     \\ \\ \n");
            printf("|   |    |   |___  |    |   |   |   |      \\ \\ \n");
            printf("|   |___________________________|   |       \\ \n");
            printf(" \\                                 / \n");
            printf("  \\_______________________________/ \n");
        }
        else if (ns1==1 && ns2==0){
            system("clear");
            printf("Bradycardia\n");   
            printf("   _______________________________ \n");
            printf("  /                               \\ \n");
            printf(" /   ___________________________   \\ \n");
            printf("|   |   ___    __    __         |   |______ \n");
            printf("|   |  |   /  |__|  |  \\   \\ /  |   |_____ \\ \n");
            printf("|   |  |--|   | \\   |   |   |   |   |     \\ \\ \n");
            printf("|   |  |___\\  |  \\  |__/    |   |   |      \\ \\ \n");
            printf("|   |___________________________|   |       \\ \n");
            printf(" \\                                 / \n");
            printf("  \\_______________________________/ \n");
        }
        else if (ns1==1 && ns2==1){
            system("clear");
            printf("Off\n");   
            printf("   _______________________________ \n");
            printf("  /                               \\ \n");
            printf(" /   ___________________________   \\ \n");
            printf("|   |       _     ___   ___     |   |______ \n");
            printf("|   |      / \\   |__   |__      |   |_____ \\ \n");
            printf("|   |     |   |  |     |        |   |     \\ \\ \n");
            printf("|   |      \\_/   |     |        |   |      \\ \\ \n");
            printf("|   |___________________________|   |       \\ \n");
            printf(" \\                                 / \n");
            printf("  \\_______________________________/ \n");
        }
        printf("\nOutput: %d%d\n", o1, o2);
        printf("Input: %d%d\n", i1, i2);

        printf("\n1. Maintained Heart Rate (00)\n");
        printf("2. Increased Heart Rate (01)\n");
        printf("3. Decreased Heart Rate (10)\n");
        printf("4. Shutting Off Pacemaker (11)\n");
        printf("\nEnter state 1, 2, 3 or 4: ");
        int input;
        scanf("%d", &input);
        if (input == 1){
            i1 = 0;
            i2 = 0;
        }
        else if (input == 2){
            i1 = 0;
            i2 = 1;
        }
        else if (input == 3){
            i1 = 1;
            i2 = 0;
        }
        else if (input == 4){
            i1 = 1;
            i2 = 1;
        }
        else{
            i1 = 0;
            i2 = 0;
        }

        state(cs1, cs2, i1, i2, &ns1, &ns2);
        output(ns1, ns2, &o1, &o2);
        cs1 = ns1;
        cs2 = ns2;
    }
    return 0;
}