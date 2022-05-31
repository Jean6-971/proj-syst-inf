int main() {
    int a = 1, b = 2;
    if (a == 1){
        if (a>b){
            printf(a);
        }else{
            printf(b);
        }
    }else if (a == 2*b){
        printf(b);
    }else{
        printf(a);
    }
    printf(a);
    return 1;
}
