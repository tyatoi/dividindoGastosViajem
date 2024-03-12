#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int a = 0, vm = 0;
	float o = 0.0, h = 0.0, l = 0.0, g = 0.0;
	printf("Em quantos amigos voces foram? \n");
	scanf("%d", &a);
	printf("Qual foi o valor da hospedagem? \n");
	scanf("%f", &o);
	printf("Quantas horas durou a viajem de carro? \n");
	scanf("%f", &h);
	printf("Qual foi a velocidade media do carro? \n");
	scanf("%d", &vm);
	printf("Qual o valor do litro de combustivel? \n");
	scanf("%f", &l);
	g = (vm * h * l + o) / a;
	printf("Cada amigo vai pagar: %.2f\n", g);
	return 0;
}