// queue::push/pop
#include "Evaluador.h"
#include <iostream>
#include "tinyxml2.h"
#include <iostream>
#include <list>
using namespace std;
using namespace tinyxml2;

//Fuente del XML:
//http://openweathermap.org/current

//Sugerencia: investigar sobre la funcion atof para convertir string a float

//Dado el formato xml en el ejemplo clima.xml realizar los siguientes ejercicios:
//Devuelve el attributo value del tag temperature
float getTemperature(string nombre_archivo)
{
    XMLDocument doc;
    doc.LoadFile(nombre_archivo.c_str());
    XMLElement* Current = doc.FirstChildElement("current");
    XMLElement* Temperature = Current->FirstChildElement("temperature");
    float t = atof(Temperature->Attribute("value"));
    return t;
}

//Devuelve el attributo value del tag humidity
int getHumidity(string nombre_archivo)
{
    XMLDocument doc;
    doc.LoadFile(nombre_archivo.c_str());
    XMLElement* Current = doc.FirstChildElement("current");
    XMLElement* Humidity = Current->FirstChildElement("humidity");
    int u = atoi(Humidity->Attribute("value"));
    return u;
}

//Devuelve el attributo value del tag pressure
int getPressure(string nombre_archivo)
{
    XMLDocument doc;
    doc.LoadFile(nombre_archivo.c_str());
    XMLElement* Current = doc.FirstChildElement("current");
    XMLElement* Pressure = Current->FirstChildElement("pressure");
    int p = atoi(Pressure->Attribute("value"));
    return p;
}

//Devuelve el attributo value del tag speed dentro del tag wind
float getWindSpeed(string nombre_archivo)
{
    XMLDocument doc;
    doc.LoadFile(nombre_archivo.c_str());
    XMLElement* Current = doc.FirstChildElement("current");
    XMLElement* Wind = Current->FirstChildElement("wind");
    XMLElement* Speed = Wind->FirstChildElement("speed");
    float ws = atof(Speed->Attribute("value"));
    return ws;
}

//Devuelve el attributo name del tag city
string getCityName(string nombre_archivo)
{
    XMLDocument doc;
    doc.LoadFile(nombre_archivo.c_str());
    XMLElement* Current = doc.FirstChildElement("current");
    XMLElement* City = Current->FirstChildElement("city");
    return City->Attribute("name");
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
