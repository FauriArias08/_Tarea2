#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
int contadorOperario=0;
int contadorTecnico=0;
int contadorProfesional=0;	
double salarioOperario=0;
double salarioTecnico=0;
double salarioProfesional=0;
char TipoDeEmpleado;
double Aumento;
float SalarioBase;
double SalarioBruto;
double SalarioNeto;
double HorasLaboradas;
double Deducciones;
double PrecioPorHora;
bool MasRegistros=true;
char Cedula[10];
char Nombre[50];

       while (MasRegistros)
{
       cout<<"Digite numero de cedula: ";
       cin>>Cedula;
	   cout<<"Ingrese su nombre completo: "; 
       cin>>Nombre;
  	   cout<<"Ingrese el tipo de empleado \n 1-Operario 2-Tecnico 3-Profesional: ";
       cin>>TipoDeEmpleado;
       cout<<"Digite numero de horas laboradas: ";
       cin>>HorasLaboradas;
       cout<<"Digite el precio por hora: ";
       cin>>PrecioPorHora;
    
       SalarioBase = (HorasLaboradas * PrecioPorHora);
       
       switch(TipoDeEmpleado)
{
	   case '1': Aumento = SalarioBase * 0.15; break;
       case '2': Aumento = SalarioBase * 0.10; break;
       case '3': Aumento = SalarioBase * 0.05; break;
}	
	   SalarioBruto = SalarioBase + Aumento;
       Deducciones = SalarioBruto * 0.0917 ;
       SalarioNeto = SalarioBruto - Deducciones;
    
       switch(TipoDeEmpleado)
{
		case '1': contadorOperario++;
		salarioOperario = salarioOperario + SalarioNeto; break;
		case '2': contadorTecnico++;
		salarioTecnico = salarioTecnico + SalarioNeto; break;
		case '3': contadorProfesional++;
		salarioProfesional = salarioProfesional + SalarioNeto; break;
}    
       cout << "\t >Informacion del empleado:\n";
        cout << "Cedula: " << Cedula << endl;
        cout << "Nombre: " << Nombre << endl;
        cout << "Tipo Empleado: " << TipoDeEmpleado << endl;
        cout << "Salario por Hora: " << PrecioPorHora << endl;
        cout << "Cantidad de Horas: " << HorasLaboradas << endl;
        cout << "Salario Ordinario: " << SalarioBase << endl;
        cout << "Aumento: " << Aumento << endl;
        cout << "Salario Bruto: " << SalarioBruto << endl;
        cout << "Deducción CCSS: " << Deducciones << endl;
        cout << "Salario Neto: " << SalarioNeto << endl;
    	
    	char Continuar;
        cout << "\n¿Continuar? (s/n): ";
        cin >> Continuar;
        if (Continuar != 's' && Continuar != 'S') {
        	MasRegistros = false;
        }
}

	double promedioOperario = contadorOperario > 0 ? salarioOperario / contadorOperario : 0;
    double promedioTecnico = contadorTecnico > 0 ? salarioTecnico / contadorTecnico : 0;
    double promedioProfesional = contadorProfesional > 0 ? salarioProfesional / contadorProfesional : 0;
    
    cout << "\t >Estadisticas Finales:\n";
    cout << "Cantidad Empleados Tipo Operarios: " << contadorOperario << endl;
    cout << "Acumulado Salario Neto para Operarios: " << salarioOperario << endl;
    cout << "Promedio Salario Neto para Operarios: " << promedioOperario << endl;
    cout << "Cantidad Empleados Tipo Tecnicos: " << contadorTecnico << endl;
    cout << "Acumulado Salario Neto para Tecnicos: " << salarioTecnico << endl;
    cout << "Promedio Salario Neto para Tecnicos: " << promedioTecnico << endl;
    cout << "Cantidad Empleados Tipo Profesionales: " << contadorProfesional << endl;
    cout << "Acumulado Salario Neto para Profesionales: " << salarioProfesional << endl;
    cout << "Promedio Salario Neto para Profesionales: " << promedioProfesional << endl;
    
	return 0;	
	
}
