// gcc -Wall t1.c -o t1.out

#include<stdio.h>

#include<string.h>

#define sTam 50

int main(){
    char t1[sTam], t2[sTam], t3[sTam], t4[sTam], t5[sTam];
    int c,resultSC, j, vogaisCount, ConsoCount;
    char b;

    printf("Digite a string t1: ");

    scanf("%s", t1);
    while((c = getchar()) != '\n' && c != EOF);

    printf("Digite a string t2: ");
    gets(t2);

    printf("Digite a string t3: ");
    fgets(t3, sTam, stdin);

    printf("Digite a string t4: ");
    gets(t4);

    printf("\nt1: %s", t1);
    printf("\nt2: %s", t2);
    printf("\nt3: %s", t3);
    printf("\nt4: %s", t4);

    for (int i=0; i<sTam; i++){
        printf("\nt1[%d]: %c", i,t1[i]);
    }
    printf("\n");

    for (int i=0; i<sTam; i++){
        printf("\nt2[%d]: %c", i,t3[i]);
    }
    printf("\n");

    for (int i=0; i<sTam; i++){
        printf("\nt3[%d]: %c", i,t3[i]);
    }
    printf("\n");

    int sizeT1, sizeT2, sizeT3;;
    sizeT1 = sizeT2 = sizeT3 = 0;

    for (int i=0; i<sTam; i++){
        if (t1[i] != '\0') {
            sizeT1++;
        } else {
            break;
        }
    }

    for (int i=0; i<sTam; i++){
        if (t2[i] != '\0'){
            sizeT2++;
        } else {
            break;
        }
    }

    for (int i=0; i<sTam; i++){
        if (t3[i] != '\n'){
            sizeT3++;
        } else {
            break;
        }
    }

    printf("\n\nsizeT1: %d", sizeT1);
    printf("\nsizeT2: %d", sizeT2);
    printf("\nsizeT3: %d\n", sizeT3);

    printf("\n\nstrlen(t1): %d", strlen(t1));
    printf("\nstrlen(t2): %d", strlen(t2));
    printf("\nstrlen(t3): %d\n", strlen(t3));

    int palavraIgual=1;
    for (int i=0; i<sTam; i++){
        if (t2[i] == t4[i]){
            printf("\nt2[i] == t4[i] i: %d, valor: %c", i, t2[i]);
        } else {
            if ((t2[i] != '\0') || (t4[i] != '\0')) {
                palavraIgual=0;
            }
            break;
        }
    }

    if (palavraIgual == 1) {
        printf("\nt2 == t4, %s == %s, palavras são iguais\n", t2, t4);
    } else {
        printf("\nt2 != t4, %s != %s, palavras são diferentes\n", t2, t4);
    }

    resultSC= strcmp(t2, t4);
    if (resultSC == 0) {
        printf("\nt2 == t4, %s == %s, palavras são iguais\n", t2, t4);
    } else {
        printf("\nt2 != t4, %s != %s, palavras são diferentes\n", t2, t4);
    }

    printf("\nstrcmp(t2, t3): %d\n", strcmp(t2, t4));

    j=0;
    for (int i=0; i<sTam; i++){
        if (t4[i] != '\0') {
            if ((t4[i] != 'a') && (t4[i] != 'e') &&(t4[i] != 'i') &&(t4[i] != 'o') &&(t4[i] != 'u')){
                if ((t4[i] != 'A') && (t4[i] != 'E') &&(t4[i] != 'I') &&(t4[i] != 'O') &&(t4[i] != 'U')){
                    t5[j]=t4[i];
                    j++;
                }
            }
        } else {
            break;
        }
    }
    printf("\nt4: %s sem vogais t5: %s\n", t4, t5);

    vogaisCount = ConsoCount = 0;
    for (int i=0; i<sTam; i++){
        if (t4[i] != '\0'){
            if ((t4[i] != 'a') && (t4[i] != 'e') && (t4[i] != 'i') && (t4[i] != 'o') && (t4[i] != 'u')){
                if ((t4[i] != 'A') && (t4[i] != 'E') && (t4[i] != 'I') && (t4[i] != 'O') && (t4[i] != 'U')){
                    if (t4[i] != ' '){
                        ConsoCount++;
                    }
                } else {
                    if (t4[i] != ' '){
                        vogaisCount++;
                    }
                }
            } else {
                if (t4[i] != ' '){
                    vogaisCount++;
                }
            }
        } else {
            break;
        }
    }
    printf("\nvogaisCount: %d ConsoCount: %d palavra t4: %s\n", vogaisCount, ConsoCount, t4);

    printf("\n A: %d", 'A');
    printf("\n Z: %d", 'Z');
    printf("\n a: %d", 'a');
    printf("\n z: %d\n\n", 'z');

    // A: 65
    // Z: 90
    // a: 97
    // z: 122

    for(int i=65; i<=122; i++){
        char ch = i;
        printf("\n%d %c", i, ch);
    }

    printf("\n\n");
    for (int i=0; i<sTam; i++){
        int k = t4[i];
        printf("\nvalor: %c, %d", t4[i], t4[i]);

        if ((k >= 65) && (k <= 90) || (k >= 97) && (k <= 122)){
            printf(" a-z");
        }
    }

    printf("\n\n");
}
