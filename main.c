#include <stdio.h>

typedef enum _eGAMMA_COEF_MODE
{
    eGAMMA_COEF_MODE_STANDARD = 0,
    eGAMMA_COEF_MODE_VARIABLE,

    eGAMMA_COEF_MODE_NUM
} eGAMMA_COEF_MODE;

static eGAMMA_COEF_MODE g_GammaCoefMode[2] = {eGAMMA_COEF_MODE_STANDARD, eGAMMA_COEF_MODE_STANDARD};

int main()
{

    printf("Hello World\n");
    printf("Nula: %d\n",g_GammaCoefMode[0]);
    printf("Nula: %d\n",g_GammaCoefMode[1]);

    return 0;
}