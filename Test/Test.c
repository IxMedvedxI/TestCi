#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <stdlib.h>
#include "comp.h"

int f1(int n,int m) {
    srand(time(NULL));
    int** arr;
    long sum = 0;
    arr = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        arr[i] = (int*)malloc(m * sizeof(int));
        for (int j = 0; j < m; j++) {
            arr[i][j] = rand() % 101;
            sum += arr[i][j];
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++) {
        free(arr[i]);
    }
    free(arr);
    return sum;
}

int lenstr(char* str) {
    int i = 0;
    while (str[i] != NULL && str[i] != '\n') {
        i++;
    }
    return i;
}

int f2(char* str) {
    printf("\n%s\n", str);
    int x = 0;
    for (int i = 0; i < lenstr(str); i++) {
        x *= 10;
        x += str[i] - '0';
    }
    return x;
}

void f5(char* str) {
    char ch;
    int len = strlen(str);
    for (int i = 0; i < (len / 2); i++) {
        ch = str[i];
        str[i] = str[len - i];
        str[len - i] = ch;
    }
}

int f3(char* name) {
    FILE* file;
    char str[1000];
    int count = 0;
    fopen_s(&file, name, "r");
    
    while (fgets(str, 1000, file) != NULL){
        //printf("\n%s", str);
        for (int i = 0; str[i] != NULL; i++) {
            if (str[i] == '&') {
                count++;
            }
        }
    }
    return count;
}
int f7(char* name) {
    FILE* file;
    FILE* otv;
    char str[1000];
    int count = 0;
    file = fopen( name, "r");
    otv = fopen("otvet.txt", "w");
    while (fscanf(file,"%s", str) != EOF) {
        fprintf(otv,"%s ", str);
    }
    return count;
}

int main()
{
    /*char name[100];
    char str[100];
    printf("input name file: ");
    scanf_s("%s", name,100);
    printf("input number: ");
    scanf_s("%s", str,100);*/
    f7("text.txt");
    /*Comp* ch;
    Comp* ch1;
    Comp* ch2;
    ch = create(1, 5);
    ch1 = create(6, 4);
    printf("\nF1: %d", f1(10,10));
    printf("\nF2: %d", f2(str));
    printf("\nF3: %d", f3(name));
    printf("\nF4: %f\n", modul(ch));
    ch2 = sum(ch, ch1);
    printC(ch2);
    printf("\n");
    ch2 = razn(ch, ch1);
    printC(ch2);
    printf("\n");
    ch2 = umn(ch, ch1);
    printC(ch2);
    printf("\n");
    ch2 = del(ch, ch1);
    printC(ch2);
    printf("\n");*/
}

