int fonction_1 (int df, int gh){
    df = df + gh;
    return df;
}


int fonction_2(int g){
    return g*2;
}


main() {
    int a = fonction_2(4); // problème patch le même pour les deux fonctions
    int c = fonction_2(2);
    printf(a);
    printf(c);

    


}
