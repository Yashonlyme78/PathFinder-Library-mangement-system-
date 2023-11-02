#include "student or admin.h"



using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<System::String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Create your main form and show it
    Application::Run(gcnew studentandadmin::studentoradmin());

    return 0;
}