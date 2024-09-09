import Text.XHtml (radio)
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
  data Dia = Lunes | Martes | Miercoles | Jueves | Viernes | Sabado | Domingo

  data Mes = Enero | Febrero
Ahora con esto tenemos ya nuestra bolsa de Dia
otro ejemplo: data Bool = True | False

ejemplo mal: 
siguienteDia' :: Dia -> Dia (aca si pusieramos "Lunes" en vez de Dia, nos daria mal yaque es un valor no es un tipo)
siguienteDia' x = Lunes

Para agregarle instancias a los nuevos tipos que definimos podemos hacerlo de 2 formas (se dice agregar prpiedades):
data Dia = Lunes | Martes | Miercoles | Jueves | Viernes | Sabado | Domingo
  deriving Show

Para agregar mas propiedades a un tipo lo podemos hacer como si fuera una tupĺa:
 ej: data Dia = Lunes | Martes | Miercoles | Jueves | Viernes | Sabado | Domingo
      deriving (Show, Eq, Ord)

-}

--Clase 4 9/9/2024
{-
no creo que utilizaremos mas clases que las tipicas   deriving (Show, Eq, Ord, Bounded, Enum)
ver que hace min y max Bound
cuando hay un solo clase despues del derivin no necesitamos parentesis. ej: deriving Show
fst y snd (first y second valor de una tupla)
usar para los valores nombres mas recordables. ej: en vez de r poner radio
Como dar una propia definicion de clase: (seria que no usaremos el tipico clase Eq que nos da haskell, sino que nosotros le damos el "orden")
instance Eq Figura
  where
    Circulo (x, y) r1 == Circulo (z, w) r2 = x==z && y==w


revisar las notas de la clase de lab y seguirlo con el audio que grabé: https://docs.google.com/presentation/d/11uS3l3ssxXHovrM0Uv_g0hHzyBVs8_riDQPAd2pgSN8/edit#slide=id.p

Al declarar los tipos  de alguna clase debo eliminar el tipo si ya lo escribi previamente
ej: si puse data NotaMusical = ...
            deriving (Eq, Show)

y quiero especificar su tipo de Eq. entonces debo sacar le tipo de Eq del deriving y declararlo en:
instance Eq NotaMusical
  where

Ahora veremos como hacer tipos de datos recursivos:
ej: 
data Palabra = Pvacia | Agregar Char Palabra  deriving Show




-}










