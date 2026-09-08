Algoritmo CajeroAutomatico
	
	Definir saldo, monto Como Real
	Definir pin Como Entero
	
	Escribir "Ingrese su saldo:"
	Leer saldo
	
	Escribir "Ingrese su PIN:"
	Leer pin
	
	Escribir "Ingrese el monto a retirar:"
	Leer monto
	
	Si monto <= saldo Entonces
		saldo <- saldo - monto
		
		Escribir "Retire su dinero"
		Escribir "Retire su tarjeta"
		Escribir "Saldo restante: Bs ", saldo
	Sino
		Escribir "Saldo insuficiente"
	FinSi
	
FinAlgoritmo