Algoritmo CalculoSalario
    Definir horas, pagoHora, salarioBase, salarioTotal Como Real
	
    Escribir "Ingrese las horas trabajadas:"
    Leer horas
    Escribir "Ingrese el pago por hora:"
    Leer pagoHora
	
    salarioBase <- horas * pagoHora
	
    Si horas > 40 Entonces
        salarioTotal <- salarioBase * 1.10
        Escribir "Aplica bono del 10% por trabajar mas de 40 horas."
    Sino
        salarioTotal <- salarioBase
    FinSi
	
    Escribir "El salario total a cobrar es: ", salarioTotal, " Bs"
FinAlgoritmo