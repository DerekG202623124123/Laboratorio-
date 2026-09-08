Algoritmo Saltenieria
	
	Definir pollo, carne, queso, refresco, agua Como Entero
	Definir totalPollo, totalCarne, totalQueso, totalRefresco, totalAgua, total Como Real
	
	Escribir "=== SALTENIERIA ==="
	
	Escribir "Cantidad de saltenas de pollo:"
	Leer pollo
	
	Escribir "Cantidad de saltenas de carne:"
	Leer carne
	
	Escribir "Cantidad de empanadas de queso:"
	Leer queso
	
	Escribir "Cantidad de refrescos:"
	Leer refresco
	
	Escribir "Cantidad de aguas minerales:"
	Leer agua
	
	totalPollo <- pollo * 3.50
	totalCarne <- carne * 4.00
	totalQueso <- queso * 3.00
	totalRefresco <- refresco * 5.00
	totalAgua <- agua * 3.00
	
	total <- totalPollo + totalCarne + totalQueso + totalRefresco + totalAgua
	
	Escribir ""
	Escribir "=== TOTAL DE COMPRA ==="
	Escribir "Saltena de pollo: Bs ", totalPollo
	Escribir "Saltena de carne: Bs ", totalCarne
	Escribir "Empanada de queso: Bs ", totalQueso
	Escribir "Refresco: Bs ", totalRefresco
	Escribir "Agua mineral: Bs ", totalAgua
	Escribir "TOTAL: Bs ", total
	
FinAlgoritmo