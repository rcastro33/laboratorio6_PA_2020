main: Comun.o ControladorAgregarProducto.o ControladorAltaProducto.o ControladorBajaProducto.o ControladorFacturar.o ControladorIniciarVenta.o ControladorQuitarProducto.o ControladorCargarDatos.o DtFacturaLocal.o DtFecha.o DtFechaHora.o DtProductoMenu.o DtProductoComun.o DtProducto.o DtProductoBase.o DtProductoCantidad.o DtProductoFactura.o Empleado.o Fabrica.o Factura.o ManejadorEmpleado.o ManejadorMesa.o ManejadorProducto.o ManejadorVenta.o Menu.o Mesa.o Mozo.o Producto.o ProductoMenu.o Venta.o VentaLocal.o VentaProducto.o main.o
	g++ Comun.o ControladorAgregarProducto.o ControladorAltaProducto.o ControladorBajaProducto.o ControladorFacturar.o ControladorIniciarVenta.o ControladorQuitarProducto.o ControladorCargarDatos.o DtFacturaLocal.o DtFecha.o DtFechaHora.o DtProductoMenu.o DtProductoComun.o DtProducto.o DtProductoBase.o DtProductoCantidad.o DtProductoFactura.o Empleado.o Fabrica.o Factura.o ManejadorEmpleado.o ManejadorMesa.o ManejadorProducto.o ManejadorVenta.o Menu.o Mesa.o Mozo.o Producto.o ProductoMenu.o Venta.o VentaLocal.o VentaProducto.o main.o -o labo

Comun.o: Comun.cpp

ControladorAgregarProducto.o: ControladorAgregarProducto.cpp

ControladorAltaProducto.o: ControladorAltaProducto.cpp

ControladorBajaProducto.o: ControladorBajaProducto.cpp

ControladorFacturar.o: ControladorFacturar.cpp

ControladorIniciarVenta.o: ControladorIniciarVenta.cpp

ControladorQuitarProducto.o: ControladorQuitarProducto.cpp

ControladorCargarDatos.o: ControladorCargarDatos.cpp

DtFacturaLocal.o: DtFacturaLocal.cpp

DtFecha.o: DtFecha.cpp

DtFechaHora.o: DtFechaHora.cpp

DtProductoMenu.o: DtProductoMenu.cpp

DtProductoComun.o: DtProductoComun.cpp

DtProducto.o: DtProducto.cpp

DtProductoBase.o: DtProductoBase.cpp

DtProductoCantidad.o: DtProductoCantidad.cpp

DtProductoFactura.o: DtProductoFactura.cpp

Empleado.o: Empleado.cpp

Fabrica.o: Fabrica.cpp

Factura.o: Factura.cpp

ManejadorEmpleado.o: ManejadorEmpleado.cpp

ManejadorMesa.o: ManejadorMesa.cpp

ManejadorProducto.o: ManejadorProducto.cpp

ManejadorVenta.o: ManejadorVenta.cpp

Menu.o: Menu.cpp

Mesa.o: Mesa.cpp

Mozo.o: Mozo.cpp

Producto.o: Producto.cpp

ProductoMenu.o: ProductoMenu.cpp

Venta.o: Venta.cpp

VentaLocal.o: VentaLocal.cpp

VentaProducto.o: VentaProducto.cpp

main.o: main.cpp

clean:
	rm -rf *.o labo
