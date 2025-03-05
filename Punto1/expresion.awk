BEGIN {  
    suma = "\\+"
    incremento = "\\+\\+"
    entero = "^[0-9]+"
    real = "^[0-9]+\\.[0-9]+"  
}  

{
    while (length($0) > 0) {
        if (match($0, token_incremento)) {
            print "INCREMENTO"
        } else if (match($0, token_suma)) {
            print "SUMA"
        } else if (match($0, token_real)) {
            print "REAL"
        } else if (match($0, token_entero)) {
            print "ENTERO"
        } else {
            # Eliminar el primer carácter para evitar un bucle infinito
            $0 = substr($0, 1)
        }
    }
}


