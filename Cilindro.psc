Algoritmo Cilindro
	
	Definir R, H, areaLateral, areaTotal, volumen Como Real
	Definir A  Como Real
	
	A <- 3.1416
	
	Escribir "Ingrese el radio:"
	Leer R
	
	Escribir "Ingrese la altura:"
	Leer H
	
	areaLateral <- 2 * PI * R * H
	areaTotal <- 2 * PI * R * (R + H)
	volumen <- PI * R^2 * H
	
	Escribir "Area lateral: ", areaLateral
	Escribir "Area total: ", areaTotal
	Escribir "Volumen: ", volumen
	
FinAlgoritmo