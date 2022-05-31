void maximum(int a, int b){
    if (a < b){
        printf(b);
    }else{
        printf(a);
    }
}

int square(int c){
    return c*c;
}

int main() {
    int d = 1, e = 2, f;
    maximum(d, e);
    f = square(e);
    printf(f);
    return 1;
}

