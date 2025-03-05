## 🧷 Requerimientos

### Dependencias necesarias

- **Java JDK** (versión 8 o superior)
- **ANTLR** (instalable en Linux y macOS)
- **Python** (versión 3 o superior)

### Instalación de Java

#### Linux

```sh
sudo apt update
sudo apt install default-jdk
```

#### macOS

```sh
brew install openjdk
```

### Instalación de ANTLR

#### Linux

##### Opción 1:

```sh
sudo apt-get install antlr4
```

##### Opción 2:

```sh
cd /usr/local/lib
sudo curl -O http://www.antlr.org/download/antlr-4.13.1-complete.jar
export CLASSPATH=”.:/usr/local/lib/antlr-4.13.1-complete.jar:$CLASSPATH” 
alias antlr4=’java -Xmx500M -cp “/usr/local/lib/antlr-4.13.1-complete.jar:$CLASSPATH” org.antlr.v4.Tool’
alias grun=’java org.antlr.v4.gui.TestRig’
```


### macOs
Instalar homebrew
```
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
```
Instalar antlr
```sh
brew install antlr
```

##### Opción 2:

```sh
curl -O https://www.antlr.org/download/antlr-4.13.1-complete.jar
```

Mover el directorio:
```
mv antlr-4.13.1-complete.jar /usr/local/lib/
```

Agregarlo a `PATH` y `CLASSPATH`.
```
nano ~/.zshrc
export CLASSPATH=".:/usr/local/lib/antlr-4.13.1-complete.jar:$CLASSPATH"
alias antlr4='java -jar /usr/local/lib/antlr-4.13.1-complete.jar'
alias grun='java org.antlr.v4.gui.TestRig'
```

Recarga el perfil:
```
source ~/.zshrc
```


# ⚡Como usarlo

## Utilizar shell script

Descargar el zip en descargas
Dar permisos al sh (ejemplo java.sh)
```
chmod +x java.sh
```

Ejecutar el sh
```
./java.sh
```

## Calculadora en java

### Crear el parser
```
antlr4 -no-listener -visitor LabeledExpr.g4
```
### Compilar el programa
```
javac Calc.java LabeledExpr*.java
```
### Ejecutar el programa
```
java Calc
```
Opcionalmente se puede editar y ver las expresiones del caso de prueba t.expr usando
```
java Calc t.expr

cat t.expr
```

## Calculadora en python

Instalar Python con antlr en macOs
```
brew install antlr4-python3-runtime
```

Instalar Python con antlr en Linux
```
sudo apt install python3-pip
sudo pip3 install antlr4-python3-runtime --break-system-packages
```


Crear el parser
```
antlr4 -Dlanguage=Python3 -visitor LabeledExpr.g4
```

Correr la función principal
```
python3 Calc.py
```

### Posibles errores

ImportError: cannot import name 'Lexer' from 'antlr4' (unknown location)
```
python3 -m pip install antlr4-python3-runtime
```
