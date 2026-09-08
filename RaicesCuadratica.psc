Algoritmo RaicesCuadratica
	
	Definir a, b, c Como Real
	Definir discriminante, x1, x2, parteReal, parteImaginaria Como Real
	
	Escribir "Ingrese a:"
	Leer a
	
	Escribir "Ingrese b:"
	Leer b
	
	Escribir "Ingrese c:"
	Leer c
	
	Si a = 0 Entonces
		
		Si b = 0 Entonces
			
			Si c = 0 Entonces
				Escribir "La ecuacion es una identidad."
			Sino
				Escribir "La ecuacion no tiene solucion."
			FinSi
			
		Sino
			
			x1 <- -c / b
			Escribir "Es una ecuacion lineal."
			Escribir "X = ", x1
			
		FinSi
		
	Sino
		
		discriminante <- b^2 - 4 * a * c
		
		Si discriminante > 0 Entonces
			
			x1 <- (-b + raiz(discriminante)) / (2 * a)
			x2 <- (-b - raiz(discriminante)) / (2 * a)
			
			Escribir "Dos raices reales:"
			Escribir "X1 = ", x1
			Escribir "X2 = ", x2
			
		Sino
			
			Si discriminante = 0 Entonces
				
				x1 <- -b / (2 * a)
				
				Escribir "Raiz real doble:"
				Escribir "X = ", x1
				
			Sino
				
				parteReal <- -b / (2 * a)
				parteImaginaria <- raiz(-discriminante) / (2 * a)
				
				Escribir "Raices complejas:"
				Escribir "X1 = ", parteReal, " + ", parteImaginaria, "i"
				Escribir "X2 = ", parteReal, " - ", parteImaginaria, "i"
				
			FinSi
			
		FinSi
		
	FinSi
	
FinAlgoritmo