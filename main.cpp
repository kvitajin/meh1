#include <iostream>
#include <vector>
void resizeMatrix(std::vector<std::vector<bool> > &pole, int &N){
    pole.resize(N);
    for (int i = 0; i < N; ++i) {
        pole[i].resize(N);
    }

}
void clean(std::vector<std::vector<bool> > &pole, int &N){
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            pole[i][j]= false;
        }
    }
}
void a1(std::vector<std::vector<bool> > &pole, int &N){
    auto tmp=(int)((N/2)+0.5);
    for (int i = 0; i < N; ++i) {
        pole[i][i]=true;
        pole[i][N-i]=true;
    }
    for (int j = 0; j < N; ++j) {
        pole[j][tmp]=true;
        pole[tmp][j]=true;
    }

}
void a2(std::vector<std::vector<bool> > &pole, int &N){
    auto tmp=(int)((N/2)+0.5);
    for (int i = 0; i < N; ++i) {
        pole[0][i]=true;
        pole[i][0]=true;
        pole[N][i]=true;
        pole[i][N]=true;
    }
    for (int j = 0; j < N; ++j) {
        pole[j][tmp]=true;
        pole[tmp][j]=true;
    }
}

void a3(std::vector<std::vector<bool> > &pole, int &N){
    for (int i = 0; i < N; ++i) {
        pole[0][i]=true;
        pole[i][0]=true;
        pole[N][i]=true;
        pole[i][N]=true;
        pole[i][i]=true;
        pole[i][N-i]=true;
    }
}

void a4(std::vector<std::vector<bool> > &pole, int &N) {
    for (int i = 0; i < N; ++i) {
        pole[0][i] = true;
        pole[N][i] = true;
        pole[i][N-i]=true;

    }
}

void a5(std::vector<std::vector<bool> > &pole, int &N) {
    for (int i = 0; i < N; ++i) {
        pole[0][i] = true;
        pole[N][i] = true;
        pole[i][i]=true;

    }
}

void a6(std::vector<std::vector<bool> > &pole, int &N) {
    for (int i = 0; i < N; ++i) {
        pole[i][i] = true;
        pole[i][0] = true;
        pole[i][N] = true;
    }
}

void a7(std::vector<std::vector<bool> > &pole, int &N) {
    for (int i = 0; i < N; ++i) {
        pole[i][i] = true;
        pole[i][0] = true;
        pole[i][N-i] = true;
    }
}

void a8(std::vector<std::vector<bool> > &pole, int &N) {
    for (int j = 0; j < N; ++j) {
        if (j%2==0){
            for (int i = 0; i < N; ++i) {
                pole[j][i] = true;
            }
        } else{
            for (int i = 0; i < N; ++i) {
                if(i%2==0){
                    pole[j][i]=true;
                }
            }
        }
    }
}

void a9(std::vector<std::vector<bool> > &pole, int &N) {
    int tmp=N/3;
    for (int i = 0; i < N; ++i) {
        pole[tmp][i]=true;
    }




}




int main() {
    std::vector<std::vector<bool> > pole;
    int N, flag=0;
    std::cout   <<  "napis N: " <<  std::endl;
    std::cin    >>  N;
    if (std::cin.fail()){
        std::cout   <<  "chyba";
        return 1;
    }
    resizeMatrix(pole, N);
    clean(pole, N);
    a1(pole, N);

    clean(pole, N);
    a2(pole, N);

    clean(pole, N);
    a3(pole, N);

    clean(pole, N);
    a4(pole, N);

    clean(pole, N);
    a5(pole, N);

    clean(pole, N);
    a6(pole, N);

    clean(pole, N);
    a7(pole, N);

    clean(pole, N);
    a8(pole, N);

    clean(pole, N);
    a1(pole, N);





    return 0;
}