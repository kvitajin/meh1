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

void print(std::vector<std::vector<bool> > &pole, int &N){
    for (int l = 0; l < N; ++l) {
        for (int i = 0; i < N; ++i) {
            if (pole[l][i]== true){
                std::cout   <<  "x ";
            }
            else std::cout  <<  "  ";
        }
        std::cout   <<  std::endl;
    }
    std::cout   <<  std::endl;
    std::cout   <<  std::endl;

}

void a3(std::vector<std::vector<bool> > &pole, int &N){
    for (int i = 0; i < N; ++i) {
        pole[0][i]=true;
        pole[i][0]=true;
        pole[N-1][i]=true;
        pole[i][N-1]=true;
        pole[i][i]=true;
        pole[i][N-1-i]=true;
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
    a3(pole, N);
    print(pole, N);

    return 0;
}