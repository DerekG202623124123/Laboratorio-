Algoritmo EcuacionCuadratica
	Definir a, b, c, discriminante, x1, x2 Como Real
	Escribir "Ingrese el valor de a:"
	Leer a
	Escribir "Ingrese el valor de b:"
	Leer b
	Escribir "Ingrese el valor de c:"
	Leer c
	discriminante <- b^2 - 4*a*c
	Si discriminante > 0 Entonces
		
		x1 <- (-b + raiz(discriminante)) / (2*a)
		x2 <- (-b - raiz(discriminante)) / (2*a)
		
		Escribir "X1 = ", x1
		Escribir "X2 = ", x2
		
	Sino
		
		Si discriminante = 0 Entonces
			
			x1 <- -b / (2*a)
			Escribir "La raiz es: ", x1
			
		Sino
			
			Escribir "No existen raices reales"
			
		FinSi
		
	FinSi
FinAlgoritmo