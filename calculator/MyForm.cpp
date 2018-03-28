#include "MyForm.h"
#include <Windows.h>
#include <iostream>
#include <string>
#include "stack.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace calculator;


int main()
{	
	//MyForm::stos.set(5);

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm());

	return 0;
}


