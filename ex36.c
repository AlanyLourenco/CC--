#include<stdio.h>
int main(){
    float a,b,c,d,m2,m1,m,m3;
    
    scanf("%f %f %f %f",&a,&b,&c,&d);
    if ((a>b)&&(a>c)&&(a>d)){
    m=a;}
    else if ((b>c)&&(b>d)){
        m=b;}
        else if ((c>d)){
            m=c;}
            else {
                m=d;}
    if ((m=a)&&(b>c)&&(b>d)){
        m1=b;
        if(c>d){
            m2=c;}
            else if (d>c){
            m2=d;}}
        else if ((m=a)&&(c>d)){
        m1=c;
        if(b>d){
            m2=b;}
            else if (d>b){
            m2=d;}}
            else if ((m=a)){
                m1=d;
                if(d>c){
                    m2=d;}
                    else if (c>d){
                     m2=d;}}
    else if ((m=b)&&(a>c)&&(a>d)){
        m1=a;
        if(c>d){
            m2=c;}
            else if (d>c){
            m2=d;}}
        else if ((m=b)&&(c>d)){
        m1=c;
        if(a>d){
            m2=a;}
            else if (d>a){
            m2=d;}}
    else if ((m=c)&&(a>b)&&(a>d)){
        m1=a;
         if(b>d){
            m2=b;}
            else if (d>b){
            m2=d;}}
        else if ((m=c)&&(b>d)){
        m1=b;
         if(a>d){
            m2=a;}
            else if (d>a){
            m2=d;}}
    else if ((m=d)&&(a>b)&&(a>c)){
        m1=a; 
        if(b>c){
            m2=b;}
            else if (c>b){
            m2=c;}}
        else if ((m=d)&&(b>c)){
        m1=b; 
        if(a>c){
            m2=a;}
            else if (c>a){
            m2=c;}}
    printf("%f %f %f",m,m1,m2);
    return 0;
}