-- Apuntes de las clases del Laboratorio

--Clase 19/08/2024

{-
-comandos basicos para navegar en linux: abrir terminalctrl alt t
  ls listar.    cd   (change directory) + tab. ll (no se que hace).   cd (solo vuelve al home) y con ../ vuelve al respositorio anterior.    rm "archivo.hs"  (ELIMINA ARCHIVO).    mv "nombre.hs" "nuevonombre.hs" (cambia el nombre del archivo).     tree "repositorio/lugar en donde estas" (hace un arbol de lo que contiene la carpeta).    mkdir "nombre" (crea carpeta).    touch "nombre.hs" (crea doc de texto).   
-}
{-
-- comandos de haskell
  ghci "nombre del archivo.hs" (compila el archivo).   :l "nombre.hs" (:l==:load, carga el archivo dentro de ghci).    :r (:r==:reload, recarga el archivo previamente cargado).   :q (salir de ghci).    ctrl + d (salir de ghci o de algo de la terminal).   ctrl + l (limpia la pantalla de la terminal)
maxBound o minBound (hace max o min hasta infinito).    :t "funcion" (me da el tipo de lafuncion).      :i "Tipo" (da informacion del Tipo).     
para escribir una funcion que toma 2 argumentdos en el medio usamos ``, ej: 12 `mod` 2

-}
{-
ghc es el compiolador, siendo que ghci es el interprete
las expresiones y funciones tienen tipos unicos
-}


-- Clase 26/08/2024 Teorico Laboratorio
{- 
Veremos: 
-Pattern matching
se puede poner como resultado un "error" que diga algo, ej: esVacia (x:xs) = error "Aca"



-Aplicacion parcial + Alto Orden
la aplicacion es poner la funcion y dejar un espacio para el/los argumentos, ej: esVacia []. Y en c se usas los () y pegados
es aplicar de a un argumento a la vez a una funcion(que es una funcion valida a haskel)
ej: esMultiplo :: Int -> Int -> Bool 
esMultiplo m n = mod n m == 0

y si ponemos :t esMultiplo 2 estamos haciendo la aplicacion parcial (el de a poco)


esPar :: Int -> Bool
esPar m = esMultiplo 2 m
Tambien en Alto Orden tiene que ver con los valores del lenguaje (lo que se puede imprimir, numeros, bool, etc)

esPar2 :: Int -> Bool
esPar2 = esMultiplo 2         (lo que te voy a dar aca debe cumplir que tenga el mismo tipo)


-polimorfismo parametrico y Ad-Hoc
en varios casos en los que necesitamos usar exactamente la mismoa funcion pero de diferentes tipos, entra el polimorfismo
mientras mas general es el tipo, menos funciones uno puede escribir, porque cada modificacion ya deja fuera muchos valores
ej: headA :: [a] -> a
headA [] =  error "bla"
headA (x:xs) = x
si a headA le sumamos 1 (x + 1) se nos acorta la bolsa de a para usar dejando fuera muchos valores como Bool
e incluso si pusieramos headA :: a -> a, la unica opcion posible es del tipo headA a = a. porque no sabemos nada de esa funcion y lo que toma, etc
de cualquier tipo sabemos muy poco
-}

--Clase 3 - 2/9/2024
{-
Que hace esta funcion? :
    siguienteDia (Int, Int, Int, Int) -> (Int, Int, Int, Int)
    siguienteDia (hora, dia, mes, año)
      | dia < 30 = (hora, dia+1, mes, año)
      | mes < 12 = (hora, dia+1, mes, año
      | otherwise = (hora, dia+1, mes, año

Usaremos "data" poara defiunir constructores de nuestros contructores (lo definido debe empezar por Mayusc)
  data Dia 0 Lunes | Martes | Miercoles | Jueves | Viernes Sabado | Domingo

  data Mes = Enero | Febrero
Ahora con esto tenemos ya nuestra bolsa de Dia
otro ejemplo: data Bool = True | False

ejemplo mal: 
siguienteDia' :: Dia -> Dia (aca si pusieramos "Lunes" en vez de Dia, nos daria mal yaque es un valor no es un tipo)
siguienteDia' x = Lunes



-}














