Algoritmo ConvertirMinutos
	
	Definir minutos, dias, horas, resto Como Entero
	
	Escribir "Ingrese cantidad de minutos:"
	Leer minutos
	
	dias <- trunc(minutos / 1440)
	resto <- minutos MOD 1440
	
	horas <- trunc(resto / 60)
	minutos <- resto MOD 60
	
	Escribir dias, " dias"
	Escribir horas, " horas"
	Escribir minutos, " minutos"
	
FinAlgoritmo