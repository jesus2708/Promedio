#include "stdafx.h"  //________________________________________ Promedio.cpp
#include "Promedio.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	Promedio app;
	return app.BeginDialog(IDI_Promedio, hInstance);
}

void Promedio::Window_Open(Win::Event& e)
{
}

void Promedio::btCalcular_Click(Win::Event& e)
{
	double sum = tbxMatematicas.DoubleValue + tbxCiencia.DoubleValue + tbxEspanol.DoubleValue + tbxFisica.DoubleValue + tbxQuimica.DoubleValue;
	double resul = sum / 5;
	tbxPromedio.DoubleValue = resul;
}

