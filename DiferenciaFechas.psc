Algoritmo DiferenciaFechas
	
	Definir dia1, mes1, dia2, mes2 Como Entero
	Definir fecha1, fecha2, diferencia, meses, dias Como Entero
	
	Escribir "Ingrese fecha inicial (DD MM):"
	Leer dia1, mes1
	
	Escribir "Ingrese fecha final (DD MM):"
	Leer dia2, mes2
	
	fecha1 <- mes1 * 30 + dia1
	fecha2 <- mes2 * 30 + dia2
	
	diferencia <- fecha2 - fecha1
	
	meses <- trunc(diferencia / 30)
	dias <- diferencia MOD 30
	
	Escribir "Diferencia: ", meses, " meses y ", dias, " dias"
	
FinAlgoritmo