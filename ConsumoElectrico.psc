Algoritmo ConsumoElectrico
	
	Definir kwh, tarifa, total Como Real
	
	Escribir "Ingrese consumo en kWh:"
	Leer kwh
	
	Si kwh = 0 Entonces
		
		Escribir "SIN CONSUMO REGISTRADO"
		
	Sino
		
		Si kwh <= 100 Entonces
			tarifa <- 0.30
			Escribir "Categoria basica"
			
		Sino
			Si kwh <= 300 Entonces
				tarifa <- 0.50
				Escribir "Categoria media"
				
			Sino
				Si kwh <= 600 Entonces
					tarifa <- 0.75
					Escribir "Categoria alta"
					
				Sino
					tarifa <- 1.10
					Escribir "Categoria industrial"
				FinSi
			FinSi
		FinSi
		
		total <- kwh * tarifa + 8
		
		Escribir "Monto a pagar: Bs ", total
		
	FinSi
	
FinAlgoritmo