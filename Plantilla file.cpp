#include "stdafx.h"
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

string Plantilla() {
	string plantilla_1;

	plantilla_1 =	
		"#include<iostream>\n"
		"#include<conio.h>\n"
		"using namespace std;\n"
		"int main(){"
			"cout<<\"Hola Mundo\"<<endl;"
			"getch();"
			"return 0;"
		"}";

	return plantilla_1;
}
void Create_file() {
	ofstream File_1;
	File_1.open("prueba.cpp");
	File_1 << Plantilla();
	File_1.close();
}
void Compile_fle() {
	system("c++ prueba.cpp");
}

int main()
{
	Create_file();
	Compile_fle();
	system("a.exe");

	system("pause");
    return 0;
}

