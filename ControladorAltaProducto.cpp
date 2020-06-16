#include <stdexcept> //para el invalid_argument
#include "ControladorAltaProducto.h"
#include "Menu.h"
#include "ManejadorProducto.h"



ControladorAltaProducto::ControladorAltaProducto(){};

list<DtProductoBase> ControladorAltaProducto::listarProductosComunes(){
    ManejadorProducto* mP=ManejadorProducto::getInstancia();
    list<Producto*> productos=mP->getProductos();
    list<DtProductoBase> dtproductos;
    for (list<Producto*>::iterator it=productos.begin(); it != productos.end(); it++){
        DtProductoBase dtpb=(*it)->getDtProductoBase();
        if ((*it)->getTipoProducto() == COMUN )
            dtproductos.push_back(dtpb);
    }
    return dtproductos;
}

list<DtProductoBase> ControladorAltaProducto::listarProductosMenu(){
    ManejadorProducto* mP=ManejadorProducto::getInstancia();
    list<Producto*> productos=mP->getProductos();
    list<DtProductoBase> dtproductos;
    for (list<Producto*>::iterator it=productos.begin(); it != productos.end(); it++){
        DtProductoBase dtpb=(*it)->getDtProductoBase();
        if ((*it)->getTipoProducto() == MENU )
            dtproductos.push_back(dtpb);
    }
    return dtproductos;
}

void ControladorAltaProducto::datosProductoComun(string cod, string desc, float precio){
    this->codComun=cod;
    this->descComun=desc;
    this->precioComun=precio;
}


void ControladorAltaProducto::confirmarProductoComun(){
    ManejadorProducto* mP = ManejadorProducto::getInstancia();
    bool existe=mP->existeProducto(this->codComun);
    //try catch antes de confirmarlo
    if(!existe){
        Comun* c=new Comun(this->codComun,this->precioComun,this->descComun);
        mP->agregarProducto(c);
    }else
        throw invalid_argument("ERROR: YA EXISTE UN PRODUCTO CON ESE IDENTIFICADOR\n");
    
}

void ControladorAltaProducto::cancelarProductoComun(){
    this->codComun.clear();
    this->descComun.clear();
}

void ControladorAltaProducto::datosProductoMenu(string cod, string desc){
    this->codMenu=cod;
    this->descMenu=desc;
}

void ControladorAltaProducto::agregarAlProductoMenu(DtProductoCantidad pc){
    this->ProductoComun.push_back(pc);
}

void ControladorAltaProducto::confirmarProductoMenu(){
    ManejadorProducto* mP=ManejadorProducto::getInstancia();
    bool existe=mP->existeProducto(this->codMenu);
    //try catch antes de confirmarlo
    if(!existe){
        Menu* m=new Menu(this->codMenu,0,this->descMenu,0);
        m->agregarComunes(this->ProductoComun);
        m->calcularPrecio();
        mP->agregarProducto(m);
        cancelarProductoMenu();
    }else
        throw invalid_argument("ERROR: YA EXISTE UN PRODUCTO CON ESE IDENTIFICADOR\n");
}

void ControladorAltaProducto::cancelarProductoMenu(){
    this->codMenu.clear();
    this->descMenu.clear();
    this->ProductoComun.clear();
}

ControladorAltaProducto::~ControladorAltaProducto(){};