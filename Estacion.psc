Algoritmo Estacion
	
	Definir dia, mes, anio Como Entero
	
	Escribir "Ingrese dia:"
	Leer dia
	
	Escribir "Ingrese mes:"
	Leer mes
	
	Escribir "Ingrese ano:"
	Leer anio
	
	Si (mes = 3 Y dia >= 21) O mes = 4 O mes = 5 O (mes = 6 Y dia < 21) Entonces
		
		Escribir "Otono"
		
	Sino
		Si (mes = 6 Y dia >= 21) O mes = 7 O mes = 8 O (mes = 9 Y dia < 21) Entonces
			
			Escribir "Invierno"
			
		Sino
			Si (mes = 9 Y dia >= 21) O mes = 10 O mes = 11 O (mes = 12 Y dia < 21) Entonces
				
				Escribir "Primavera"
				
			Sino
				
				Escribir "Verano"
				
			FinSi
		FinSi
	FinSi
	
FinAlgoritmo