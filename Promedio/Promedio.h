#pragma once  //______________________________________ Promedio.h  
#include "Resource.h"
class Promedio: public Win::Dialog
{
public:
	Promedio()
	{
	}
	~Promedio()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Textbox tbxMatematicas;
	Win::Textbox tbxCiencia;
	Win::Textbox tbxEspanol;
	Win::Textbox tbxFisica;
	Win::Textbox tbxQuimica;
	Win::Label lb1;
	Win::Label lb2;
	Win::Label lb3;
	Win::Label lb4;
	Win::Label lb5;
	Win::Button btCalcular;
	Win::Textbox tbxPromedio;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx=Sys::Convert::CentimetersToDlgUnitX(5.37104);
		dlgTemplate.cy=Sys::Convert::CentimetersToDlgUnitY(6.79979);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Promedio";
		tbxMatematicas.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 2.69875, 0.55563, 2.35479, 0.60854, hWnd, 1000);
		tbxCiencia.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 2.69875, 1.61396, 2.40771, 0.60854, hWnd, 1001);
		tbxEspanol.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 2.69875, 2.64583, 2.32833, 0.60854, hWnd, 1002);
		tbxFisica.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 2.69875, 3.70417, 2.27542, 0.60854, hWnd, 1003);
		tbxQuimica.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 2.64583, 4.78896, 2.35479, 0.60854, hWnd, 1004);
		lb1.CreateX(NULL, L"Matematicas", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.31750, 0.39688, 1.85208, 0.60854, hWnd, 1005);
		lb2.CreateX(NULL, L"Ciencias", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.42333, 1.71979, 1.95792, 0.60854, hWnd, 1006);
		lb3.CreateX(NULL, L"Espanol", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.58208, 2.72521, 1.90500, 0.60854, hWnd, 1007);
		lb4.CreateX(NULL, L"Fisica", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.68792, 3.62479, 1.77271, 0.60854, hWnd, 1008);
		lb5.CreateX(NULL, L"Quimica", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.63500, 4.84187, 1.79917, 0.60854, hWnd, 1009);
		btCalcular.CreateX(NULL, L"Calcular", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 2.91042, 5.92667, 2.27542, 0.68792, hWnd, 1010);
		tbxPromedio.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 0.71437, 6.00604, 2.01083, 0.60854, hWnd, 1011);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		tbxMatematicas.Font = fontArial009A;
		tbxCiencia.Font = fontArial009A;
		tbxEspanol.Font = fontArial009A;
		tbxFisica.Font = fontArial009A;
		tbxQuimica.Font = fontArial009A;
		lb1.Font = fontArial009A;
		lb2.Font = fontArial009A;
		lb3.Font = fontArial009A;
		lb4.Font = fontArial009A;
		lb5.Font = fontArial009A;
		btCalcular.Font = fontArial009A;
		tbxPromedio.Font = fontArial009A;
	}
	//_________________________________________________
	void btCalcular_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btCalcular.IsEvent(e, BN_CLICKED)) {btCalcular_Click(e); return true;}
		return false;
	}
};
