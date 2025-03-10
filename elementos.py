def elemento(z):
    if z <= 2:
        return "Gas noble"
    elif 3 <= z <= 10:
        return "No metal"
    elif 11 <= z <= 18:
        return "Metal alcalino"
    elif 19 <= z <= 36:
        return "Metaloide"
    else:
        return "Elemento pesado"


z = int(input("Número de Quintaesencia del elemento: "))

# Llamamos a la función y mostramos el resultado
print("La categoría mística del elemento es:", elemento(z))
