#include <iostream>
#include <random>
#include<algorithm>
#include<string>

int main(){
    constexpr int R{5};
    constexpr int T{30};
    std::cout << "Enter grid width: ";
    int W{},H{},My_num{},My_row{},My_col{};
    std::cin >> W;
    std::cout << "Enter grid height: ";
    std::cin >> H;
    int My_Grid[W][H];
    std::cout << "Enter intital number of infected individuals between 0 and " << W*H << ": ";
    int I{};
    std::cin >> I;
    std::cout << "Enter infection probability: ";
    double p{},w{};
    std::cin >> p;
    std::cout << "Enter worsening probability: ";
    std::cin >> w;
    int Up{0},Down{0},Left{0},Right{0},H_count{0},I_count{0},R_count{0},D_count{0};
    char My_Array[W][H];
    int Check_5[W][H];

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> My_p(0.0, 1.0);
    std::uniform_real_distribution<> My_w(0.0, 1.0);


    for(int i{0};i<W;i++){
        for(int j {0};j<H;j++){
            My_Grid[i][j] = 0;
        }
    }

    for(int i{0};i<W;i++){
        for(int j {0};j<H;j++){
            Check_5[i][j] = 0;
        }
    }

    for(int i{0}; i< I; i++){
        My_num = rand() % 9 + 1;
        My_row = rand() % (W-1) + 0;
        My_col = rand() % (H-1) + 0;
        My_Grid[My_row][My_col] = My_num;
    }
    for(int i{0};i<W;i++){
        for(int j {0};j<H;j++){
            if(My_Grid[i][j]==0){
                My_Array[i][j] = '.';
            }
            else if(My_Grid[i][j]>=1 && My_Grid[i][j] <=9){
                My_Array[i][j] = '0' + My_Grid[i][j];

            }
        }}

    std::cout << "Initial State grid: " <<std::endl;
    for(int i{0};i<W;i++){
        for(int j {0};j<H;j++){
            std::cout << My_Array[i][j];
        }
        std::cout << std::endl;
    }
    


    for(int i{1}; i <= T;i++){
       I_count = 0;
       R_count = 0;
       D_count = 0;
       H_count = 0;
       for(int x{0};x<W;x++){
        for(int j {0};j<H;j++){

           if(My_Grid[x][j] >=1 && My_Grid[x][j] <=9){
            if(Check_5[x][j]==5){
                My_Grid[x][j] = -1;
                Check_5[x][j] = -1;
            } 
            else Check_5[x][j] +=1;

           }
            if(My_Grid[x][j]==0){
            
            double r = My_p(gen);
            if(r<p && p!=0.0){
            if(x==0 && j==0){
                Down = My_Grid[x+1][j];
                Right = My_Grid[x][j+1];
                Up = 0;
                Left = 0;
            }
            else if(x==W-1 && j==0){
                Up = My_Grid[x-1][j];
                Right = My_Grid[x][j+1];
                Down = 0;
                Left = 0;
            }
            else if(x==0 && j==H-1){
                Left = My_Grid[x][j-1];
                Down = My_Grid[x+1][j];
                Up = 0;
                Right = 0;
            }
            else if(x==W-1 && j==H-1){
                Up = My_Grid[x-1][j];
                Left = My_Grid[x][j-1];
                Down = 0;
                Right = 0;
            }
            else if(x==0){
                Left = My_Grid[x][j-1];
                Down = My_Grid[x+1][j];
                Right = My_Grid[x][j+1];
                Up = 0;
            }
            else if(j==0){
                Up = My_Grid[x-1][j];
                Left = 0;
                Down = My_Grid[x+1][j];
                Right = My_Grid[x][j+1];
            }
            else if(j==H-1){
                Up = My_Grid[x-1][j];
                Left = My_Grid[x][j-1];
                Down = My_Grid[x+1][j];
                Right = 0;
            }
            else if(x==W-1){
                Up = My_Grid[x-1][j];
                Left = My_Grid[x][j-1];
                Down = 0;
                Right = My_Grid[x][j+1];
            }
            else{
               Up = My_Grid[x-1][j];
               Down = My_Grid[x+1][j];
               Left =My_Grid[x][j-1];
               Right = My_Grid[x][j+1];}
               int My_max{0};

            if(Right>0 && Right<10 && Left>0 && Left<10 ||Right>0 && Right<10 && Up>0 && Up<10||Right>0 && Right<10 && Down>0 && Down<10||Left>0 && Left<10 && Up>0 && Up<10||Down>0 && Down<10 && Left>0 && Left<10||Up>0 && Up<10 && Down>0 && Down<10){

            if(Up >=1 && Up <=9){
                My_max = Up;
            }
            else if(Down >= 1 && Down <=9){
                if(Down > My_max)My_max = Down;
            }
            else if(Right >= 1 && Right <=9){
                if(Right > My_max)My_max = Right;
            }
            else if(Left >= 1 && Left <=9){
                if(Left > My_max)My_max = Left;
            }
            My_Grid[x][j] = My_max;}
            if(Right>0 && Right <10 && Left==0 && Up==0 && Down==0 ||Left>0 && Left <10 && Right==0 && Up==0 && Down==0 ||Up>0 && Up <10 && Left==0 && Right==0 && Down==0 ||Down>0 && Down <10 && Left==0 && Up==0 && Right==0 ){
                if(Right>0){
                    My_Grid[x][j] = rand() % Right+ 1;
                }
                if(Left>0){
                    My_Grid[x][j] = rand() % Left+ 1;
                }
                if(Up>0){
                    My_Grid[x][j] = rand() % Up+ 1;
                }
                if(Down>0){
                    My_Grid[x][j] = rand() % Down + 1;
                }
            
            }

            }}
    
    if(My_Grid[x][j]>=1 && My_Grid[x][j] <=9){
        double My_r = My_w(gen);
        if(My_r<w && w!=0.0){
            My_Grid[x][j] +=1;
        }
        else{
            My_Grid[x][j] -=1;
            if(My_Grid[x][j] == 0){My_Grid[x][j]=-1;}
        }

    }
       if(My_Grid[x][j]>=1 && My_Grid[x][j]<=9)I_count +=1;
       else if(My_Grid[x][j]==0)H_count+=1;
       else if(My_Grid[x][j]==-1)R_count+=1;
       else D_count +=1;
    } }
    std::cout << "Day " << i << ": Healthy: " << H_count << ",Infected: " << I_count << ",Recovered: " << R_count << ",Dead: " << D_count << std::endl;

}
std::cout << "Final state grid: " << std::endl;
  for(int i{0};i<W;i++){
        for(int j {0};j<H;j++){
            if(My_Grid[i][j]==0){
                My_Array[i][j] = '.';
            }
            else if(My_Grid[i][j]>=1 && My_Grid[i][j] <=9){
                My_Array[i][j] = '0' + My_Grid[i][j];
            }
            else if(My_Grid[i][j]==-1){
                My_Array[i][j] = 'R';
            }
            else {My_Array[i][j]='X';}

            }
        }
    for(int i{0};i<W;i++){
        for(int j {0};j<H;j++){
            std::cout << My_Array[i][j];
        }
        std::cout << std::endl;
    }
            }

