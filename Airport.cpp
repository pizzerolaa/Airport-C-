#include <iostream>
#include <string.h>
#include <string>
#include <cstdlib>

using namespace std;

class Aeropuerto{
    private:
        string nombreAeropuerto;
        string ciudad;
        string pais;
        int capacidad;
    public:
        Aeropuerto();
        Aeropuerto(string, string, string, int);
            string getNombreAeropuerto();
            string getCiudad();
            string getPais();
            int getCapacidad();
            void setNombreAeropuerto(string);
            void setCiudad(string);
            void setPais(string);
            void setCapacidad(int);
};

class Cliente : public Aeropuerto{
    private:
        string nombreCliente;
        string apellido;
        string nacionalidad;
        int edad;
    public:
        Cliente();
        Cliente(string, string, string, int, string, string, string, int);
            string getNombreCliente();
            string getApellido();
            string getNacionalidad();
            int getEdad();
            void setNombreCliente(string);
            void setApellido(string);
            void setNacionalidad(string);
            void setEdad(int);
};

class Vuelo: public Aeropuerto{
    private:
        string aerolinea;
        string destino;
        string origen;
        int hora;
        int minuto;
    public:
        Vuelo();
        Vuelo(string, string, string, int, string, string, string, int, int);
            string getAerolinea();
            string getDestino();
            string getOrigen();
            int getHora();
            int getMinuto();
            void setAerolinea(string);
            void setDestino(string);
            void setOrigen(string);
            void setHora(int);
            void setMinuto(int);
};

class Boleto: public Vuelo{
    private:
        int numBoleto;
        int numAsiento;
        string clase;
        float precio;
    public:
        Boleto();
        Boleto(string, string, string, int, string, string, string, int, int, int, int, string);
            int getNumBoleto();
            int getNumAsiento();
            string getClase();
            float getPrecio();
            void setNumBoleto(int);
            void setNumAsiento(int);
            void setClase(string);
            void setPrecio(float);
};

class Equipaje: public Cliente{
    private:
        float peso;
        float volumen;
        int maletasExtra;
        float precioFinal;
    public:
        Equipaje();
        Equipaje(string, string, string, int, string, string, string, int, float, float, int, float);
        float getPeso();
        float getVolumen();
        int getMaletasExtra();
        void setPeso(float);
        void setVolumen(float);
        void setMaletasExtra(int);
        float getCalculaPrecio();
        void setCalculaPrecio(float);
};


//class Empleado: public  Aeropuerto, 
Aeropuerto::Aeropuerto(){
    nombreAeropuerto = "Nombre por defecto";
    ciudad = "Ciudad por defecto";
    pais = "País por defecto";
    capacidad = 0;
};

Aeropuerto::Aeropuerto(string _nombreAeropuerto, string _ciudad, string _pais, int _capacidad){
    nombreAeropuerto = _nombreAeropuerto;
    ciudad = _ciudad;
    pais = _pais;
    capacidad = _capacidad;
};

    string Aeropuerto::getNombreAeropuerto(){
        return nombreAeropuerto;
    };
    string Aeropuerto::getCiudad(){
        return ciudad;
    };
    string Aeropuerto::getPais(){
        return pais;
    };
    int Aeropuerto::getCapacidad(){
        return capacidad;
    };
    void Aeropuerto::setNombreAeropuerto(string _nombreAeropuerto){
        nombreAeropuerto = _nombreAeropuerto;
    };
    void Aeropuerto::setCiudad(string _ciudad){
        ciudad = _ciudad;
    };
    void Aeropuerto::setPais(string _pais){
        pais = _pais;
    };
    void Aeropuerto::setCapacidad(int _capacidad){
        capacidad = _capacidad;
    };

Cliente::Cliente(){
    nombreCliente = "Nombre por defecto";
    apellido = "Apellido por defecto";
    nacionalidad = "Nacionalidad por defecto";
    edad = 0;
};
Cliente::Cliente(string _nombreAeropuerto, string _ciudad, string _pais, int _capacidad, string _nombreCliente, string _apellido, string _nacionalidad, int _edad) : Aeropuerto(_nombreAeropuerto, _ciudad, _pais, _capacidad){
    nombreCliente = _nombreCliente;
    apellido = _apellido;
    nacionalidad = _nacionalidad;
    edad = _edad;
};

    string Cliente::getNombreCliente(){
        return nombreCliente;
    };
    string Cliente::getApellido(){
        return apellido;
    };
    string Cliente::getNacionalidad(){
        return nacionalidad;
    };
    int Cliente::getEdad(){
        return edad;
    };
    void Cliente::setNombreCliente(string _nombreCliente){
        nombreCliente = _nombreCliente;
    };
    void Cliente::setApellido(string _apellido){
        apellido = _apellido;
    };
    void Cliente::setNacionalidad(string _nacionalidad){
        nacionalidad = _nacionalidad;
    };
    void Cliente::setEdad(int _edad){
        edad = _edad;
    };
Vuelo::Vuelo(){
    aerolinea = "Aerolínea por defecto";
    destino = "Destino por defecto";
    origen = "origen por defecto";
    hora = 0;
    minuto = 0;
}   
Vuelo::Vuelo(string _nombreAeropuerto, string _ciudad, string _pais, int _capacidad, string _aerolinea, string _destino, string _origen, int _hora, int _minuto) : Aeropuerto(_nombreAeropuerto, _ciudad, _pais, _capacidad){
    aerolinea = _aerolinea;
    destino = _destino;
    origen = _origen;
    hora = _hora;
    minuto = _minuto;
};
    string Vuelo::getAerolinea(){
        return aerolinea;
    };
    string Vuelo::getDestino(){
        return destino;
    };
    string Vuelo::getOrigen(){
        return origen;
    };
    int Vuelo::getHora(){
        return hora;
    };
    int Vuelo::getMinuto(){
        return minuto;
    };
    void Vuelo::setAerolinea(string _aerolinea){
        aerolinea = _aerolinea;
    };
    void Vuelo::setDestino(string _destino){
        destino = _destino;
    };
    void Vuelo::setOrigen(string _origen){
        origen = _origen;
    };
    void Vuelo::setHora(int _hora){
        hora = _hora;
    };
    void Vuelo::setMinuto(int _minuto){
        minuto = _minuto;
    };
Boleto::Boleto(){
    numBoleto = 0;
    numAsiento = 0;
    clase = "Clase por defecto";
}
Boleto::Boleto(string _nombreAeropuerto, string _ciudad, string _pais, int _capacidad, string _aerolinea, string _destino, string _origen, int _hora, int _minuto, int _numBoleto, int _numAsiento, string _clase) : Vuelo(_nombreAeropuerto, _ciudad, _pais, _capacidad, _aerolinea, _destino, _origen, _hora, _minuto){
    numBoleto = _numBoleto;
    numAsiento = _numAsiento;
    clase = _clase;
};
    int Boleto::getNumBoleto(){
        return numBoleto;
    };
    int Boleto::getNumAsiento(){
        return numAsiento;
    };
    string Boleto::getClase(){
        return clase;
    };
    void Boleto::setNumBoleto(int _numBoleto){
        numBoleto = _numBoleto;
    };
    void Boleto::setNumAsiento(int _numAsiento){
        numAsiento = _numAsiento;
    };
    void Boleto::setClase(string _clase){
        clase = _clase;
    };

Equipaje::Equipaje(){
    peso = 0.0;
    volumen = 0.0;
    maletasExtra = 0;
    precioFinal = 0.0;
}

Equipaje::Equipaje(string _nombreAeropuerto, string _ciudad, string _pais, int _capacidad, string _nombreCliente, string _apellido, string _nacionalidad, int _edad, float _peso, float _volumen, int _maletasExtras, float _precioFinal){
    peso = _peso;
    volumen = _volumen;
    maletasExtra = _maletasExtras;
    precioFinal = _precioFinal;
}

float Equipaje::getPeso(){
    return peso;
}
float Equipaje::getVolumen(){
    return volumen;
}
int Equipaje::getMaletasExtra(){
    return maletasExtra;
}
void Equipaje::setPeso(float _peso){
    peso = _peso;
}
void Equipaje::setVolumen(float _volumen){
    volumen = _volumen;
}
void Equipaje::setMaletasExtra(int _maletasExtra){
    maletasExtra = _maletasExtra;
}
float Equipaje::getCalculaPrecio(){
    return precioFinal;
}
void Equipaje::setCalculaPrecio(float _precioFinal){
    precioFinal = _precioFinal;
}
//----------------------------------------------------------------------------------------------------//
int main(){
    Aeropuerto NomAero1;

    string _nombreAeropuerto;
    string _ciudad; 
    string _pais;
    int _capacidad;

    cout<<"...................DATOS DEL VUELO..................."<<endl;
    cout<<"Introduzaca el nombre del Aeropuerto: "<<endl; 
    getline(cin,_nombreAeropuerto);
    cout<<"Ciudad: "<<endl; getline(cin,_ciudad);
    cout<<"Pais: "<<endl; getline(cin,_pais);
    cout<<"Capacidad del avion: "<<endl; cin>>_capacidad;

    NomAero1.setNombreAeropuerto(_nombreAeropuerto);
    NomAero1.setCiudad(_ciudad);
    NomAero1.setPais(_pais);
    NomAero1.setCapacidad(_capacidad);
    
//-------------------------------------------------------------------------------------------------------//

    Cliente P1;

    string _nombreCliente;
    string _apellido;
    string _nacionalidad;
    int _edad;

    cout<<"...................DATOS DEL CLIENTE..................."<<endl;
    cout<<"Nombre: "<<endl; cin>>_nombreCliente;
    cout<<"Apellido: "<<endl; cin>>_apellido;
    cout<<"Nacionalidad: "<<endl; cin>>_nacionalidad;
    cout<<"Edad: "<<endl; cin>>_edad;

    P1.setNombreCliente(_nombreCliente);
    P1.setApellido(_apellido);
    P1.setNacionalidad(_nacionalidad);
    P1.setEdad(_edad);   
    
//-------------------------------------------------------------------------------------------------------//

    Vuelo fly1;

    string _aerolinea;
    string _destino;
    string _origen;
    int _hora;
    int _minuto;

    cout<<"...................DATOS DEL VUELO..................."<<endl;
    cout<<"Aerolinea: "<<endl; cin>>_aerolinea;
    cout<<"Destino: "<<endl; cin>>_destino;
    cout<<"Origen: "<<endl; cin>>_origen;
    cout<<"Hora de salida: "<<endl; cin>>_hora;
    cout<<"Minuto de salida: "<<endl; cin>>_minuto;

    fly1.setAerolinea(_aerolinea);
    fly1.setDestino(_destino);
    fly1.setOrigen(_origen);
    fly1.setHora(_hora);
    fly1.setMinuto(_minuto);

//-------------------------------------------------------------------------------------------------------//

    Boleto bol1;

    int _numBoleto;
    int _numAsiento;
    string _clase;

    cout<<"...................DATOS DEL BOLETO..................."<<endl;
    cout<<"Numero de boleto: "<<endl; cin>>_numBoleto;
    cout<<"Numero de asiento: "<<endl; cin>>_numAsiento;
    cout<<"Clase: "<<endl; cin>>_clase;

    bol1.setNumBoleto(_numBoleto);
    bol1.setNumAsiento(_numAsiento);
    bol1.setClase(_clase);

//-------------------------------------------------------------------------------------------------------//

    Equipaje equipaje1;

    float _peso;
    float _volumen;
    int _maletasExtra;
    string pregunta;

    cout<<"...................DATOS DEL EQUIPAJE..................."<<endl;
    cout<<"Peso del equipaje: "<<endl; cin>>_peso;
    cout<<"Volumen del equipaje: "<<endl; cin>>_volumen;    
    cout<<"¿Llevara alguna maleta extra?:"<<endl; cin>>pregunta;
    if (pregunta == "s")
    {
        cout<<"Cantidad de maletas extras: "<<endl; cin>>_maletasExtra;
    }
    else
    {
        _maletasExtra = 0;
    }

    equipaje1.setPeso(_peso);
    equipaje1.setVolumen(_volumen);
    equipaje1.setMaletasExtra(_maletasExtra);

    Equipaje imprimirTodo;
    float _precioFinal;
    _precioFinal= 2000.0 +_peso + 15.0 * _volumen + (_maletasExtra * 200.0);//2,000.00 precio del boleto
    imprimirTodo.setCalculaPrecio(_precioFinal);

//--------------------------------------------------------------------------------------------------------//
    cout<<">-----------------AEROPUERTO---------------<"<<endl;
    cout<<"El Aeropuerto de salida es: "<<NomAero1.getNombreAeropuerto()<<endl;
    cout<<"La Ciudad de salida es: "<<NomAero1.getCiudad()<<endl;
    cout<<"El Pais de salida es: "<<NomAero1.getPais()<<endl;
    cout<<"La capacidad del Aeropuerto es de: "<<NomAero1.getCapacidad()<<" personas\n"<<endl;

    cout<<">----------------- CLIENTE ------------------<"<<endl;
    cout<<"El nombre del cliente es: "<<P1.getNombreCliente()<<endl;
    cout<<"El apellido del cliente es: "<<P1.getApellido()<<endl;
    cout<<"Nacionalidad del cliente: "<<P1.getNacionalidad()<<endl;
    cout<<"Edad del cliente: "<<P1.getEdad()<<" años\n"<<endl;

    cout<<">-----------------AEROLINEA----------------<"<<endl;
    cout<<"La aerolinea del vuelo es: "<<fly1.getAerolinea()<<endl;
    cout<<"El destino del vuelo es: "<<fly1.getDestino()<<endl;
    cout<<"El origen del vuelo es: "<<fly1.getOrigen()<<endl;
    cout<<"La salida del vuelo es a las "<<fly1.getHora()<<":"<<fly1.getMinuto()<<"\n"<<endl;

    cout<<">-----------------BOLETO-------------------<"<<endl;
    cout<<"El numero de boleto es: "<<bol1.getNumBoleto()<<endl;
    cout<<"El asiento elegido es: "<<bol1.getNumAsiento()<<endl;
    cout<<"La clase del asiento es: "<<bol1.getClase()<<"\n"<<endl;
    
    cout<<">-----------------EQUIPAJE-----------------<"<<endl;
    cout<<"El peso del quipaje es de: "<<equipaje1.getPeso()<<" kg."<<endl;
    cout<<"El volumen de su equipaje: "<<equipaje1.getVolumen()<<" m3."<<endl;
    cout<<"Maletas extras agregadas: "<<equipaje1.getMaletasExtra()<<"\n"<<endl;

    cout<<">-----------------PRECIO-----------------<"<<endl;
    cout<<"EL TOTAL A PAGAR ES DE: $"<<imprimirTodo.getCalculaPrecio()<<endl;

    return 0;
}