#ifndef MESA
#define MESA
#include <stdio.h>
#include <list>
#include "DtProductoCantidad.h"
#include "VentaLocal.h"
#include "DtProductoCantidad.h"
using namespace std;

class Mesa{
    private:
        int numero;
        VentaLocal* ventaLocal;
    public:
        Mesa();
        Mesa(int);
        bool tieneVenta();
        void agregarProducto(DtProductoCantidad);
        list<DtProducto> listarProductos()
        void quitarProducto(DtProductoCantidad);
        ~Mesa();
        
}
#endif