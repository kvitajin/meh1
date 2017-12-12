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


void a1(std::vector<std::vector<bool> > &pole, int &N){
    auto tmp=(int)((N/2)+0.5);
    for (int i = 0; i < N; ++i) {
        pole[i][i]=true;
        pole[i][N-1-i]=true;
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
        pole[N-1][i]=true;
        pole[i][N-1]=true;
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
        pole[N-1][i]=true;
        pole[i][N-1]=true;
        pole[i][i]=true;
        pole[i][N-1-i]=true;
    }
}

void a4(std::vector<std::vector<bool> > &pole, int &N) {
    for (int i = 0; i < N; ++i) {
        pole[0][i] = true;
        pole[N-1][i] = true;
        pole[i][N-1-i]=true;

    }
}

void a5(std::vector<std::vector<bool> > &pole, int &N) {
    for (int i = 0; i < N; ++i) {
        pole[0][i] = true;
        pole[N-1][i] = true;
        pole[i][i]=true;

    }
}

void a6(std::vector<std::vector<bool> > &pole, int &N) {
    for (int i = 0; i < N; ++i) {
        pole[i][i] = true;
        pole[i][0] = true;
        pole[i][N-1] = true;
    }
}

void a7(std::vector<std::vector<bool> > &pole, int &N) {
    for (int i = 0; i < N; ++i) {
        pole[i][N-1] = true;
        pole[i][0] = true;
        pole[i][N-1-i] = true;
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
        pole[2*tmp][i]=true;
        pole[i][tmp]=true;
        pole[i][2*tmp]=true;
    }
}

void a10(std::vector<std::vector<bool> > &pole, int &N) {
    for (int i = 0; i < N; ++i) {
       if (i%2==0){
           for (int j = 0; j < N; ++j) {
               pole[i][j]=true;
           }
       }
        if (i%4==1){
            pole[i][N-1]=true;
        }
        if (i%4==3){
            pole[i][0]=true;
        }
    }

}

void a11(std::vector<std::vector<bool> > &pole, int &N) {
    for (int i = 0; i < N; ++i) {
        if (i%2==0){
            for (int j = 0; j < N; ++j) {
                pole[j][i]=true;
            }
        }
        if (i%4==1){
            pole[N-1][i]=true;
        }
        if (i%4==3){
            pole[0][i]=true;
        }
    }

}

void a12(std::vector<std::vector<bool> > &pole, int &N) {
    for (int i = 0; i < N; ++i) {
        if (i%2==1) {
            for (int j = 0; j < N; ++j) {
                if (j%2==0){
                    pole[i][j]=true;
                }
            }
        } else{
            for (int j = 0; j < N; ++j) {
                if (j%2==1){
                    pole[i][j]=true;
                }
            }
        }
    }

}

void a13(std::vector<std::vector<bool> > &pole, int &N) {
    int tmp=N/2;
    for (int i = 0; i < tmp; ++i) {
        pole[i][0]=true;
        pole[i][tmp-1]=true;
        pole[0][i]=true;
        pole[tmp-1][i]=true;
    }
    for (int j = tmp; j < N; ++j) {
        pole[j][N-1]=true;
        pole[N-1][j]=true;
        pole[j][tmp]=true;
        pole[tmp][j]=true;
    }

}

void a14(std::vector<std::vector<bool> > &pole, int &N) {
    int tmp=N/2;
    for (int i = 0; i < tmp; ++i) {
        for (int j = tmp; j < N; ++j) {
            pole[i][j]= true;
        }
    }
    for (int j = tmp; j < N; ++j) {
        for (int i = 0; i < tmp; ++i) {
            pole[j][i]=true;
        }
    }

}

void a15(std::vector<std::vector<bool> > &pole, int &N) {
    int tmp=N/2;
    for (int i = 0; i < tmp; ++i) {
        pole[i][tmp+i]=true;
        pole[i+tmp][i]=true;
        pole[tmp-1-i][i]=true;
        pole[tmp+tmp-1-i][tmp+i]=true;
    }
}

void a16(std::vector<std::vector<bool> > &pole, int &N) {
    int tmp=N/2;
    for (int i = tmp; i < N; ++i) {
        for (int j = 0; j < tmp; ++j) {
            pole[i][j]= true;
        }
    }

}

void a17(std::vector<std::vector<bool> > &pole, int &N) {
    for (int j = 0; j < N; ++j) {
        for (int i = 0; i < N; ++i) {
            if ((i+j)%3==0){
                pole[j][i]=true;
            }
        }
    }
}

void a18(std::vector<std::vector<bool> > &pole, int &N) {
    int tmp=N/2;
    /*for (int k = 0; k < N; ++k) {

        for (int j = 0; j < 4; ++j) {
            for (int i = 0; i < N; ++i) {
                if ((i - j) % 3 == 0) {
                    pole[j][i] = true;
                }
            }
        }
        for (int j = 4; j < 9; ++j) {
            for (int i = 0; i < N; ++i) {
                if ((i + j) % 3 == 0) {
                    pole[j][i] = true;
                }
            }
        }
    }*/

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (((j-i)%8)>4){
                if ((i - j) % 3 == 0) {
                    pole[i][j] = true;
                }
            } else{
                if ((i + j) % 3 == 0) {
                    pole[i][j] = true;
                }
            }
        }
    }

}

void a19(std::vector<std::vector<bool> > &pole, int &N) {
    int tmp=N/2;

    for (int k = 0; k < tmp; ++k) {
        for (int j = 0; j < N-k; ++j) {
            pole[k][j]= true;
        }
        for (int i = 0; i < k; ++i) {
            pole[k][i]= false;
        }
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
    print(pole, N);

    clean(pole, N);
    a2(pole, N);
    print(pole, N);

    clean(pole, N);
    a3(pole, N);
    print(pole, N);

    clean(pole, N);
    a4(pole, N);
    print(pole, N);

    clean(pole, N);
    a5(pole, N);
    print(pole, N);

    clean(pole, N);
    a6(pole, N);
    print(pole, N);

    clean(pole, N);
    a7(pole, N);
    print(pole, N);

    clean(pole, N);
    a8(pole, N);
    print(pole, N);

    clean(pole, N);
    a9(pole, N);
    print(pole, N);

    clean(pole, N);
    a10(pole, N);
    print(pole, N);

    clean(pole, N);
    a11(pole, N);
    print(pole, N);

    clean(pole, N);
    a12(pole, N);
    print(pole, N);

    clean(pole, N);
    a13(pole, N);
    print(pole, N);

    clean(pole, N);
    a14(pole, N);
    print(pole, N);

    clean(pole, N);
    a15(pole, N);
    print(pole, N);

    /*clean(pole, N);       //todo
    a16(pole, N);
    print(pole, N);*/

    clean(pole, N);
    a17(pole, N);
    print(pole, N);

    clean(pole, N);
    a18(pole, N);
    print(pole, N);

    clean(pole, N);
    a19(pole, N);
    print(pole, N);

    return 0;
}