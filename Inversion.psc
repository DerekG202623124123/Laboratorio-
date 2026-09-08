Algoritmo Inversion
	Definir C, T, M, G Como Real
	Definir N Como Entero
	Escribir "Ingrese el capital inicial:"
	Leer C
	Escribir "Ingrese la tasa anual (%):"
	Leer T
	Escribir "Ingrese el plazo en anos:"
	Leer N
	M <- C * (1 + T / 12 / 100)^(N * 12)
	G <- M - C
	Escribir "Monto acumulado: Bs ", M
	Escribir "Ganancia neta: Bs ", G
	
FinAlgoritmo