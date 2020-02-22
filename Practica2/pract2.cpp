
//  Copyright © 2020 Marisol Villegas. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>


int main(int argc, const char * argv[]) {
    bool bool1 = false;
    bool bool2 = false;
    int a,b,s,r,m,d,e;
    float aa,bb,ss;
    double aaa, bbb,sss;
    char char1, char2;
    char y[1000];
    
    printf("Introduzca dos numeros\n");
    scanf("%d%d",&a,&b);
    s=a+b;
    printf("La suma de los numeros es:%d\n",s);
    r=a-b;
    printf("La resta de los numeros es:%d\n",r);
    m=a*b;
    printf("La multiplicacion es:%d\n",m);
    d=a/b;
    printf("La division es:%d\n",d);
    e=a%b;
    printf("El modulo es:%d\n",e);
    printf("%d>=%d\n",a,b);
    if (a>=b) {
        printf("Verdadero\n");
    }
    else {
        printf("Falso\n");
    }
    printf("%d<=%d\n",a,b);
    if (a<=b) {
        printf("Verdadero\n");
    }
    else {
        printf("Falso\n");
    }
    printf("%d>%d\n",a,b);
    if (a>b) {
        printf("Verdadero\n");
    }
    else {
        printf("Falso\n");
    }
    printf("%d<%d\n",a,b);
    if (a<b) {
        printf("Verdadero\n");
    }
    else {
        printf("Falso\n");
    }
    
    printf("Introduzca dos numeros\n");
    scanf("%f%f",&aa,&bb);
    ss=aa+bb;
    printf("La suma de los numeros es:%.2f\n",ss);
    ss=aa-bb;
    printf("La resta de los numeros es:%.2f\n",ss);
    ss=aa*bb;
    printf("La multiplicacion es:%.2f\n",ss);
    ss=aa/bb;
    printf("La division es:%.2f\n",ss);
    printf("%.2f>=%.2f\n",aa,bb);
    if (aa>=bb) {
        printf("Verdadero\n");
    }
    else {
        printf("Falso\n");
    }
    printf("%.2f<=%.2f\n",aa,bb);
    if (aa<=bb) {
        printf("Verdadero\n");
    }
    else {
        printf("Falso\n");
    }
    printf("%.2f>%.2f\n",aa,bb);
    if (aa>bb) {
        printf("Verdadero\n");
    }
    else {
        printf("Falso\n");
    }
    printf("%.2f<%.2f\n",aa,bb);
    if (aa<bb) {
        printf("Verdadero\n");
    }
    else {
        printf("Falso\n");
    }
    
    printf("Introduzca dos numeros\n");
    scanf("%lf%lf",&aaa,&bbb);
    sss=aaa+bbb;
    printf("La suma de los numeros es:%.2lf\n",sss);
    sss=aaa-bbb;
    printf("La resta de los numeros es:%.2lf\n",ss);
    sss=aaa*bbb;
    printf("La multiplicacion es:%.2lf\n",sss);
    sss=aaa/bbb;
    printf("La division es:%.2lf\n",sss);
    printf("%.2lf>=%.2lf\n",aaa,bbb);
    if (aaa>=bbb) {
        printf("Verdadero\n");
    }
    else {
        printf("Falso\n");
    }
    printf("%.2lf<=%.2lf\n",aaa,bbb);
    if (aaa<=bbb) {
        printf("Verdadero\n");
    }
    else {
        printf("Falso\n");
    }
    printf("%.2lf>%.2lf\n",aaa,bbb);
    if (aaa>bbb) {
        printf("Verdadero\n");
    }
    else {
        printf("Falso\n");
    }
    printf("%.2lf<%.2lf\n",aaa,bbb);
    if (aaa<bbb) {
        printf("Verdadero\n");
    }
    else {
        printf("Falso\n");
    }
    fflush stdin;
    printf("Introduzca un caracter\n");
    scanf("%c",&char1);
    fflush stdin;
	printf("Introduzca un caracter\n");
    scanf("%c",&char2);
    
    printf("%c == %c",char1,char2);
    if (char1==char2) {
        printf("Verdadero\n");
    }
    else {
        printf("Falso\n");
    }
    
    return 0;
}

