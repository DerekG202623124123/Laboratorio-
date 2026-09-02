Algoritmo DescuentoCompra
    Definir monto, montoFinal Como Real
	
    Escribir "Ingrese el monto de la compra (Bs):"
    Leer monto
	
    Si monto > 100 Entonces
        montoFinal <- monto * 0.90
        Escribir "Aplica un 10% de descuento."
    Sino
        montoFinal <- monto
    FinSi
	
    Escribir "El total final a pagar es: ", montoFinal, " Bs"
FinAlgoritmo