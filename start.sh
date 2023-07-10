

#!/bin/bash

gcc main.c nodos.c -o program


# Ingresar la primera variable
read -p "Ingrese El nombre del archivo a leer: " input_var

# Ingresar la segunda variable
read -p "Ingrese el nombre del archivo de salida: " output_var




if [ -e "$input_var" ]; then
    echo "El archivo existe en la ruta especificada."
    ./program $input_var $output_var.output
else
    echo "El archivo $input_var no existe."
fi


