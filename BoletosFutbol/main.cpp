#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
int boletosSol = 0;
int boletosSombra = 0;
int boletosPreferenciales = 0;
double totalSol = 0;
double totalSombra = 0;
double totalPreferencial = 0;
bool MasBoletos=true;
int PrecioSol = 10500;
int PrecioSombra = 20500;
int PrecioPreferencial = 25500;	

	while(MasBoletos)
{
		char Cedula [9];
		char Nombre [50];
		int Factura;
		int Localidad;
		int Boletos;
		double PrecioLocalidad;
		
		
		cout<<"Numero de Factura: ";
		cin>>Factura;
		cout<<"Ingrese numero de cedula: ";
		cin>>Cedula;
	    cout<<"Escriba el nombre: ";
		cin>>Nombre;
	while (true) {
		cout<<"Ingrese la Localidad \n (1- Sol Norte/Sur, 2- Sombra Este/Oeste, 3- Preferencial): ";
		cin>>Localidad;
		if (Localidad >= 1 && Localidad <= 3) break;
		else cout<< "Localidad no encontrada favor de ingresar 1, 2 o 3." << endl;
		}
		while (true) {
            cout << "¿Cuantas entradas desea? (maximo 4): ";
            cin >> Boletos;
            if (Boletos >= 1 && Boletos <= 4) break;
            else cout << "Cantidad no valida (maximo 4), favor de ingresar un valor entre 1 y 4." << endl;
        }
        
        switch (Localidad){
        case 1: boletosSol += Boletos;
        		  PrecioLocalidad = PrecioSol;
        		  totalSol += PrecioLocalidad * Boletos;break;
        case 2: boletosSombra += Boletos;
        		  PrecioLocalidad = PrecioSombra;
        		  totalSombra += PrecioLocalidad * Boletos;break;
        case 3: boletosPreferenciales += Boletos;
        		  PrecioLocalidad = PrecioPreferencial;
        		  totalPreferencial += PrecioLocalidad * Boletos;break;
        }
        
        int SubTotal = Boletos * PrecioLocalidad;
		int Cargo = Boletos * 1000;
		int Total = SubTotal + Cargo;
		
		cout << "\nFactura #" << Factura << endl;
        	cout << "Cedula: " << Cedula << endl;
        	cout << "Nombre cliente: " << Nombre << endl;
        	switch(Localidad){
        		case 1: cout<< "Localidad: Sol Norte/Sur"<< endl;break;
        		case 2: cout<< "Localidad: Sombra Este/Oeste"<< endl;break;
        		case 3: cout<< "Localidad: Preferencial"<< endl;break;
        		}
        	cout << "Cantidad de Entradas: " << Boletos << endl;
        	cout << "Subtotal  : " << SubTotal << endl;
        	cout << "Cargos por Servicios : " << Cargo << endl;
        	cout << "Total a pagar : " << Total << endl;
        	
			char Continuar;
        cout << "\n¿Continuar? (s/n): ";
        cin >> Continuar;
        if (Continuar != 's' && Continuar != 'S') break;
}	  
        cout << "\t >Estadisticas:\n" << endl;
    cout << "Cantidad Entradas Sol Norte/Sur: " << boletosSol << endl;
    cout << "Total de Dinero Localidad Sol Norte/Sur: " << totalSol << endl;
    cout << "Cantidad Entradas Localidad Sombra Este/Oeste: " << boletosSombra << endl;
    cout << "Total de Dinero Localidad Sombra Este/Oeste: " << totalSombra << endl;
    cout << "Cantidad Entradas Localidad Preferencial: " << boletosPreferenciales << endl;
    cout << "Total de Dinero Localidad Preferencial: " << totalPreferencial << endl;
	 
	 
	 return 0;   
}	
