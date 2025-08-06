#!/bin/bash

# Ruta al ejecutable (ajústalo si es necesario)
EXEC=./mysed

# Archivo de entrada base
INPUT="doc.txt"
# echo "hola que tal 123 Soy Cova" > "$INPUT"

# Función para ejecutar prueba
run_test() {
    DESC="$1"
    S1="$2"
    S2="$3"
    echo -e "\n\033[1m🔹 $DESC\033[0m"
    echo "Ejecutando: $EXEC $INPUT '$S1' '$S2'"
    $EXEC "$INPUT" "$S1" "$S2"
    echo -e "Contenido de doc.replace:\n---------------------------"
    cat doc.replace
    echo -e "---------------------------"
}

# Compilar si tienes makefile
make

# Pruebas válidas
run_test "Reemplazar 'hola' por 'ADIOS'" "hola" "ADIOS"
run_test "Reemplazar 'Cova' por 'CLeguina'" "Cova" "CLeguina"
run_test "Reemplazar '123' por '1234'" "123" "1234"
run_test "Reemplazar ' ' por '12'" " " "12"

# Pruebas inválidas
echo -e "\n\033[1m🔹 Pruebas con argumentos inválidos\033[0m"
$EXEC "$INPUT" "hola"
$EXEC "$INPUT"
$EXEC "$INPUT" "" "ADIOS"
$EXEC "$INPUT" "hola" ""

