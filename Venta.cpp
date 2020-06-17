#include "Venta.h"

Venta::Venta(){}
Venta::Venta (string codigo, list<VentaProducto*> ventaProductos){
    this->codigo=codigo;
    this->ventaProductos=ventaProductos; // *SE INICIALIZA LA LISTA? COMO?
}

string Venta::getCodigo(){
    return this->codigo;
}

void Venta::setCodigo(string codigo){
    this->codigo=codigo;
}

list<VentaProducto*> Venta::getVentaProductos(){
    return this->ventaProductos;
    // list<VentaProducto*> lstVtaProd;
    // for (list<VentaProducto*>::iterator it=this->ventaProductos.begin(); it!=ventaProductos.end(); ++it)
    //     lstVtaProd.push_back(*it); //revisar
    // return lstVtaProd;
}

Factura* Venta::getFactura(){
    return this->factura;
}

void Venta::setFactura (Factura* fac){
    this->factura=fac;
}

Venta::~Venta(){}
