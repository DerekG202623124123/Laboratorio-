Algoritmo NotaFinal
	
	Definir parcial1, parcial2, examenFinal, proyecto, nota Como Real
	
	Escribir "Ingrese nota del primer parcial:"
	Leer parcial1
	
	Escribir "Ingrese nota del segundo parcial:"
	Leer parcial2
	
	Escribir "Ingrese nota del examen final:"
	Leer examenFinal
	
	Escribir "Ingrese nota del proyecto:"
	Leer proyecto
	
	nota <- parcial1 + parcial2 + examenFinal + proyecto
	
	Escribir "Nota final: ", nota
	
	Si nota >= 51 Entonces
		Escribir "APROBO"
	Sino
		Escribir "REPROBO"
	FinSi
	
FinAlgoritmo