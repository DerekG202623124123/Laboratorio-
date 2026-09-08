Algoritmo Credito
	
	Definir C, T, cuota, montoTotal, interesTotal Como Real
	Definir N Como Entero
	
	Escribir "Ingrese el capital prestado:"
	Leer C
	
	Escribir "Ingrese la tasa de interes mensual en decimal:"
	Leer T
	
	Escribir "Ingrese el numero de cuotas:"
	Leer N
	
	cuota <- C * (T * (1 + T)^N) / ((1 + T)^N - 1)
	montoTotal <- cuota * N
	interesTotal <- montoTotal - C
	
	Escribir "Cuota mensual: Bs ", cuota
	Escribir "Monto total: Bs ", montoTotal
	Escribir "Interes total: Bs ", interesTotal
	
FinAlgoritmo