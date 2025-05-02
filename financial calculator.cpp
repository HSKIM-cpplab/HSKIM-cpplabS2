#include <stdio.h>
#include <math.h>

float PV_joah(float FV, float R, float N);
float FV_joah(float PV, float FV, float R, float N);

float FV, PV, N, I_Y, R = 0;


int main_choice(void) {
    int choice = 0;
    printf("1.현재가치(PV) \n 2.미래가치(FV) \n 3.이자율");
    scanf("%d", &choice);

    if (choice == 1) {
        PV_joah(FV, R, N);
    }

    else if (choice == 2) {
        FV_joah(PV, FV, R, N);
    }

    else if (choice == 3) {
        //I_Y_joah();
        printf("아직 안 만듦");

    }

    else {
        printf("잘못된 선택");
        return -1;
    }

    return 0;
}

float PV_joah(float FV, float R, float N) {

    PV = FV / (pow((1 + R), N));
    printf("%.2f", PV);
    return PV;

}

float FV_joah(float PV, float FV, float R, float N) {
    FV = PV * (pow((1 + R), N));
    printf("%.2f", FV);
    return FV;
}

int main(void) {

    printf("현재 가치(PV)를 입력:");
    scanf("%f", &PV);

    printf("미래 가치(FV)를 입력:");
    scanf("%f", &FV);

    printf("이자률(I/Y)를 입력:");
    scanf("%f", &I_Y);

    printf("기간(N)를 입력:");
    scanf("%f", &N);

    printf("이자률(I/Y)를 입력:");
    scanf("%f", &I_Y);
    R = I_Y / 100;

    main_choice();

    return 0;
}
