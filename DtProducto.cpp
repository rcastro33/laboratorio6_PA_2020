#include "DtProducto.h"

DtProducto::DtProducto(){}
DtProducto::DtProducto(string codigo,string desc,float precio,int cant):DtProductoBase(codigo, desc){
    this->precio = precio;
    this->cantidad = cant;
}
void DtProducto::setPrecio(float precio){
    this->precio = precio;
}
float DtProducto::getPrecio(){
    return this->precio;
}
void DtProducto::setCantidad(int cant){
    this->cantidad = cant;
}
int DtProducto::getCantidad(){
    return this->cantidad;
}

ostream& operator <<(ostream& salida,const DtProducto& dtpb){
	cout << (DtProductoBase)dtpb <<"Precio: " << dtpb.precio <<  " ";
	cout << "Cantidad: " << dtpb.cantidad << endl;
	return salida;
}

DtProducto::~DtProducto(){}