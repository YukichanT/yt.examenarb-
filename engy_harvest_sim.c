#include <stdio.h>
#include <math.h>

/*エナジーハーベスタのプロトタイプ(変数の参考に)
/E = N⋅f⋅η⋅m⋅g⋅h
E 発電量 J
N=歩行者の数（一時間に通る数）人
f=一人当たりの平均歩数（１㎡あたり）歩
η=効率（0.1パーセント）
m=平均体重　kg
g=重力加速度（９．８１）m/s^2
h=一歩にかかる変位　m
*/


int main(void){

    double N = 0;
    double f = 0;
    double eta = 0;
    double m = 0;
    double h = 0;

    double g = 9.81; //constant number

    printf("====Energy Harvester Simulation====\n");
    printf("Number of Pedestrians per hour N: "); scanf("%lf", &N);
    printf("Number of steps per person f: "); scanf("%lf", &f);
    printf("Avarage weight m(kg) :"); scanf("%lf", &m);
    printf("Floor displacement h(m): "); scanf("%lf", &h);
    printf("Efficiency Eta(e.g. 0.001 = 0.1%%):"); scanf("%lf", &eta);
    
    //Power generation calculation
    double E = N * f * eta * m * g * h;
    double Wh = E / 3600.0;

    //Result output
    printf("====Result====\n");
    printf("Total Power generation is approximately %.4f J.\n", E);
    printf("This corresponds %.6f Wh\n", Wh);
    
    return 0;
}