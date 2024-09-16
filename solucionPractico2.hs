
  -- Resolucion del Practico 2 Laboratorio Algoritmos

--Ejercicio 1

--a) sum cuad.xs = ⟨Pi : 0 ≤ i < #xs : xs.i ∗ xs.i⟩
sumCuad :: [Int] -> Int
sumCuad [] = 0
sumCuad (x:xs) = x * x + sumCuad xs

--b) iga.e.xs = ⟨ ∀ i : 0 ≤ i < #xs : xs.i = e ⟩
iga :: Eq a => a -> [a] -> Bool
iga e [] = True
iga e (x:xs) = e == x && iga e xs

--c) exp.x.n = x**n

expo :: Int -> Int -> Int
expo x 0 = 1
expo x n = x * (expo x (n-1))

--d) sum par.n = ⟨Pi : 0 ≤ i ≤ n ∧ par.i : i⟩  donde par.i .= i mod 2 = 0.

par :: Int -> Bool
par x = mod x 2 == 0

sumPar :: Int -> Int
sumPar 0 = 0
sumPar n
    | par n = n + sumPar (n-1)
    | otherwise = sumPar (n-1)

--e) cu ́antos.p.xs = ⟨N i : 0 ≤ i < #xs : p.(xs.i)⟩
cuantos :: (a -> Bool) -> [a] -> Int
cuantos p [] = 0
cuantos p (x:xs)
    | p x = 1 + cuantos p xs
    | otherwise = cuantos p xs


{- PRUEBA DE LO QUE EL PROFE DIO EL 2/9/24 CLASE 4 LAB  
data Dia = Lunes | Martes | Miercoles | Jueves | Viernes | Sabado | Domingo
  deriving (Show, Eq, Ord)
-}

--Ejercicio 2
--a)
data Carrera = Matematica | Fisica | Computacion | Astronomia
  deriving Eq
--b)
titulo :: Carrera -> String
titulo Matematica = "Licenciatura en Matematica"
titulo Fisica = "Licenciatura en Fisica"
titulo Computacion = "Licenciatura en Computacion"
titulo Astronomia = "Licenciatura en Astronomia"

--c)
data NotaBasica = Do | Re | Mi | Fa | Sol | La | Si
  deriving (Show, Eq, Ord, Bounded)
-- al poner :i Carrera me da informacion del nuevo tipo creado (Es como hacer un :t de algo)

--d)

cifradoAmericano :: NotaBasica -> Char
cifradoAmericano Do  = 'C'
cifradoAmericano Re  = 'D'
cifradoAmericano Mi  = 'E'
cifradoAmericano Fa  = 'F'
cifradoAmericano Sol = 'G'
cifradoAmericano La  = 'A'
cifradoAmericano Si  = 'B'


--Ejercicio 4
-- od hoc es la definicion del tipo: "algo" a => a -> ...
--a)
minimoElemento :: Ord a => [a] -> a
minimoElemento xs = minimum xs

--b) usar maxbound?
          -- Aca se me prendio la lamparita gracias a este link: https://zvon.org/other/haskell/Outputprelude/minBound_f.html

minimoElemento' :: (Ord a, Bounded a) => [a] -> a
  -- se lo copie aun chico y no funciono
minimoElemento' [] = maxBound -- esto deberia ser minBound
minimoElemento' [x] = x
minimoElemento' (x:y:xs) = x `min` y `min` (minimoElemento' xs) 
--minimoElemento' (x:xs) = x `min` (minimoElemento' xs) 

  --(x:xs) = x `min` minimoElemento xs
{-
todavia no se si esta reparado. REVISARR!!!!!!


No lo esta

-}

--Ejercicio 5
--a) 
-- ́Sinonimos de tipo
type Altura = Int
type NumCamiseta = Int
-- Tipos algebraicos sin parametros (aka enumerados)
data Zona = Arco | Defensa | Mediocampo | Delantera
  deriving (Show, Eq, Ord)
data TipoReves = DosManos | UnaMano
  deriving (Show, Eq, Ord)
data Modalidad = Carretera | Pista | Monte | BMX
  deriving (Show, Eq, Ord)
data PiernaHabil = Izquierda | Derecha
  deriving (Show, Eq, Ord)
-- Sinonimo
type ManoHabil = PiernaHabil
-- Deportista es un tipo algebraico con constructores parametricos
data Deportista = Ajedrecista
                | Ciclista Modalidad                    --Constructor con un argumento
                | Velocista Altura                      --Constructor con un argumento
                | Tenista TipoReves ManoHabil Altura    --Constructor con tres argumentos
                | Futbolista Zona NumCamiseta PiernaHabil Altura  ----Constructor con...
                    deriving (Show, Eq, Ord)
--b)
-- Ciclista :: Modalidad -> Deportista 

--c) Programa la funcion que dada una lista de deportistas xs, devuelve la cantidad de velocistas que hay dentro de xs.
--Programar contar_velocistas sin usar igualdad, utilizando pattern matching.
contarVelocistas ::  [Deportista] -> Int
contarVelocistas [] = 0
contarVelocistas ((Ajedrecista):xs) = 0 + contarVelocistas xs
contarVelocistas ((Ciclista m):xs) = 0 + contarVelocistas xs
contarVelocistas ((Velocista a):xs) = 1 + contarVelocistas xs
contarVelocistas ((Tenista t m a):xs) = 0 + contarVelocistas xs
contarVelocistas ((Futbolista z n p a):xs)  = 0 + contarVelocistas xs


{-
  aca, en el c y d, me trabe con la consigna de no usar igualdad y si usar pattern matching
  
      solucion: al decir que no se puede usar igualdad se refiere a que no use "==" eso es todo, y pattern matching es el analisis por caso
-}
--d)
contarFutbolistas :: [Deportista] -> Zona -> Int
contarFutbolistas [] z = 0
contarFutbolistas ((Futbolista Arco n p a):xs) Arco = 1 + contarFutbolistas xs Arco
contarFutbolistas ((Futbolista Defensa n p a):xs) Defensa = 1 + contarFutbolistas xs Defensa
contarFutbolistas ((Futbolista Mediocampo n p a):xs) Mediocampo = 1 + contarFutbolistas xs Mediocampo
contarFutbolistas ((Futbolista Delantera n p a):xs) Delantera = 1 + contarFutbolistas xs Delantera
contarFutbolistas (x:xs) z = contarFutbolistas xs z

--e) hacer contarFutbolistas pero con filter
{-para solucionarlo habia que crear una funcion auxioliar que hiciera lo que hicimos antes en pattern matching pero solo para 1 caso
y la hacemos de la forma que filter lo pueda usar y listo 
recordemos que el tipo de filter :: (a -> Bool) -> a -> a
-}
sacaZona :: Zona -> Deportista -> Bool
sacaZona zona (Futbolista z _ _ _ )= zona == z 
sacaZona _ _ = False

contarFutbolistas' :: [Deportista] -> Zona -> Int
contarFutbolistas' xs zona = length (filter (sacaZona zona) xs)  


--Ejercicio 6

{-
f :: Num a => a -> Int -> a
f x 0 = 0
f x n = expo x n + f x (n-1)

--f x 1 = x
--f x n = x*x +  f x (n-2)

pi :: Num a => Int -> a
pi 

f'

f''
-}

--Ejercicio 7

--verificaSi :: [a] -> (a -> Bool) -> Bool
--verificaSi xs f = 
--a)
iguales :: Eq a => [a] -> Bool
iguales [] = True
iguales [x] = True
iguales (x:y:xs) = x==y && iguales (y:xs)

--b)
minimo :: [Int] -> Int
minimo = minimum

--c)
creciente :: [Int] -> Bool
creciente [] = True
creciente [x] = True
creciente (x:y:xs) = x>=y && creciente (y:xs)

--d)
prod :: Num a => [a] -> [a] -> a
prod [] _ = 0
prod _ [] = 0
prod (x:xs) (y:ys) = x*y + prod xs ys

{-
--Ejercicio 8
--a)⟨ ∀ i : 0 ≤ i ≤ #xs : sum.(xs↑i) ≥ 0 ⟩ , con sum la funci ́on del ejercicio 1.
psum xs 

--b)sum ant.xs = ⟨ ∃ i : 0 ≤ i < #xs : xs.i = sum.(xs↑i) ⟩
sumAnt :: []
--c)sum8.xs = ⟨ ∃ i : 0 ≤ i ≤ #xs : sum.(xs↑i) = 8 ⟩
sum8 

--d)f.xs = ⟨Max i : 0 ≤ i < #xs ∧ sum.(xs↑i) = sum.(xs↓i) : i ⟩ .
funcion

-}

--Ejercicio 9
--a)que dado un natural determina si es el cuadrado de un n ́umero.
deMapABool :: [Bool] -> Bool
deMapABool [] = False
deMapABool (x:xs) = x || (deMapABool xs)

cuad :: Int -> Bool
cuad 0 = False
cuad 1 = False
cuad 2 = False
cuad x = deMapABool (map (==0) ((map (mod x) [2..(x-1)])))

--b) que cuenta la cantidad de segmentos iniciales de una lista cuya suma es igual a 8.
--n8 :: Num a => [a] Int


--Ejercicio 10   deriving (Show, Eq, Ord)
--a)
sonidoNatural :: NotaBasica -> Int
sonidoNatural Do = 0
sonidoNatural Re = 2
sonidoNatural Mi = 4
sonidoNatural Fa = 5
sonidoNatural Sol = 7
sonidoNatural La = 9
sonidoNatural Si = 11

--b)
data Alteracion = Bemol | Natural | Sostenido
  deriving (Show, Eq, Ord)
--c)
data NotaMusical = Nota NotaBasica Alteracion
  deriving (Show)


--d)
sonidoCromatico :: NotaMusical -> Int
sonidoCromatico (Nota notaBasica Bemol) = sonidoNatural notaBasica -1
sonidoCromatico (Nota notaBasica Natural) = sonidoNatural notaBasica 
sonidoCromatico (Nota notaBasica Sostenido) = sonidoNatural notaBasica +1
--    | alteracion == sonidoNatural nota +1

--e) deriving (Show, Eq, Ord)
instance Eq NotaMusical
  where
    Nota notaBasica1 alteracion1 == Nota notaBasica2 alteracion2 = 
      sonidoCromatico (Nota notaBasica1 alteracion1) == sonidoCromatico (Nota notaBasica2 alteracion2)

--f)
instance Ord NotaMusical
  where
    Nota notaBasica1 alteracion1 <= Nota notaBasica2 alteracion2 = 
      sonidoCromatico (Nota notaBasica1 alteracion1) <= sonidoCromatico (Nota notaBasica2 alteracion2)


--Ejercicio 11 
--a) Definı la funcion primerElemento que devuelve el primer elemento de una lista no vacia, o Nothing si la lista es vacıa.

primerElemento :: [a] -> Maybe a
primerElemento [] = Nothing
primerElemento xs = Just (head xs)
-- primerElemento (x:xs) = Just x


--Ejercicio 12
data Cola = VaciaC | Encolada Deportista Cola
  deriving Show
--a)
atender :: Cola -> Maybe Cola
atender VaciaC = Nothing
atender (Encolada _ cola) = Just cola
-- ejemplo de que poner en ghci para que ande: atender (Encolada Ajedrecista (Encolada Ajedrecista VaciaC))

--b)
encolar :: Deportista -> Cola -> Cola 
encolar dep1 VaciaC = Encolada dep1 VaciaC 
encolar dep1 (Encolada dep2 VaciaC) = Encolada dep2 (Encolada dep1 VaciaC)
encolar dep1 (Encolada dep2 cola) = Encolada dep2 (encolar dep1 cola)
-- Encolada Ajedrecista (Encolada Ajedrecista Encolada dep1 VaciaC))

--c)

--soloFutbolistas = (filter (sacaZona zona) xs) 

busca :: Cola -> Zona -> Maybe Deportista 
busca VaciaC _ = Nothing
busca (Encolada (Futbolista z a b c) cola) zona
      | z == zona = Just (Futbolista z a b c)
      | otherwise = busca cola zona
busca (Encolada _ cola) zona = busca cola zona

-- ejemplo para el ghci: busca (Encolada (Velocista 132) (Encolada (Ciclista BMX) (Encolada Ajedrecista (Encolada (Futbolista Arco 1 Derecha 12312) VaciaC)))) Arco


{-
papaaaa como costo estos ultimos 2!!
Perovamos quese puede!
-}

--Ejercicio 13 

data ListaAsoc a b = Vacia | Nodo a b (ListaAsoc a b)
  deriving (Show, Eq, Ord)

type Diccionario = ListaAsoc String String
type Padron      = ListaAsoc Int String 

--I ¿Como se debe instanciar el tipo ListaAsoc para representar la informacion almacenada en una guıa telefonica?
--deberia instanciarse asi: 
type GuiaTelefonica = ListaAsoc String Int 

--II
--a) que devuelve la cantidad de datos en una lista.
laLong :: ListaAsoc a b -> Int
laLong Vacia = 0
laLong (Nodo _ _ demas) = 1 + laLong demas

--b) que devuelve la concatenacion de dos listas de asociaciones.
laConcat :: ListaAsoc a b -> ListaAsoc a b -> ListaAsoc a b
laConcat Vacia Vacia = Vacia
laConcat Vacia (Nodo a b demas) = (Nodo a b demas)
laConcat (Nodo a b demas) Vacia = (Nodo a b demas)
laConcat (Nodo a1 b1 Vacia) (Nodo a2 b2 demas) = Nodo a1 b1 (Nodo a2 b2 demas)
laConcat (Nodo a1 b1 demas1) (Nodo a2 b2 demas2) = Nodo a1 b1 (laConcat demas1 (Nodo a2 b2 demas2))


--c)que agrega un nodo a la lista de asociaciones si la clave no esta en la lista, o actualiza el valor si la clave ya se encontraba

laAgregar :: Eq a => ListaAsoc a b -> a -> b -> ListaAsoc a b
laAgregar Vacia clave info = Nodo clave info Vacia
laAgregar (Nodo a b demas) clave info 
        | a == clave = Nodo a info demas
        | otherwise = Nodo a b (Nodo clave info demas)


--d) que transforma una lista de asociaciones en una lista de pares clave-dato.
laPares :: ListaAsoc a b -> [(a, b)] 
laPares Vacia = []
laPares (Nodo a b demas) =  [(a, b)] ++ laPares demas


--e) que dada una lista y una clave devuelve el dato asociado, si es que existe. En caso contrario devuelve Nothing.
laBusca :: Eq a => ListaAsoc a b -> a -> Maybe b
laBusca Vacia _ = Nothing
laBusca (Nodo a dato demas) clave
          | a == clave = Just dato
          | otherwise = laBusca demas clave


--f) que dada una clave a elimina la entrada en la lista.
laBorrar :: Eq a => a -> ListaAsoc a b -> ListaAsoc a b
laBorrar _ Vacia = Vacia
laBorrar clave (Nodo a _ demas) 
        | a == clave = Vacia
        | otherwise  = laBorrar clave demas 


--Ejercicio 14 Implementa en Haskell las funciones derivadas en el ejercicio anterior.
{-
a) ⟨ ∀ as, bs : xs = as ++ bs : sum.as ≥ 0 ⟩
b) ⟨Min as, bs, cs : xs = as ++ bs ++ cs : sum.bs ⟩
c) ⟨N as, b, bs : xs = as ++ (b ▷ bs) : b > sum.bs ⟩
d) ⟨Max as, bs, cs : xs = as ++ bs ∧ ys = as ++ cs : #as ⟩

-}


--Ejercicio 15 Implementa en Haskell las funciones derivadas en el ejercicio anterior.

{-
a) sumin.xs = ⟨Min as, bs, cs : xs = as ++ bs ++ cs : sum.bs ⟩
(suma m ́ınima de un segmento).
b) f.xs = ⟨N as, bs, cs : xs = as ++ bs ++ cs : 8 = sum.bs ⟩
(cantidad de segmentos que suman eso).
c) maxiga.e.xs = ⟨Max as, bs, cs : xs = as ++ bs ++ cs ∧ iga.e.bs : #bs ⟩
(m ́axima longitud de iguales a e)
donde iga es la funci ́on del ejercicio 2b.

-}


-- Consegui videos de las Clases de Laboratorio en YouTube de Algoritmos I: https://www.youtube.com/playlist?list=PLC0XIpyXEA7XCGKAuNq8NPoKiiDz-mAUI


--Ejercicio 16 Implementa en Haskell las funciones derivadas en el ejercicio anterior.
{-
a) f.xs = ⟨N i, j : 0 ≤ i < j < #xs : xs.i = xs.j⟩
b) g.xs = ⟨Max p, q : 0 ≤ p < q < #xs : xs.p + xs.q⟩
c) h.xs = ⟨N k : 0 ≤ k < #xs : ⟨∀i : 0 ≤ i < k : xs.i < xs.k⟩⟩
d) k.xs = ⟨∀i, j : 0 ≤ i ∧ 0 ≤ j ∧ i + j = #xs − 1 : xs.i = xs.j⟩
e) l.xs = ⟨Max p, q : 0 ≤ p ≤ q < #xs ∧ ⟨∀i : p ≤ i < q : xs.i ≥ 0⟩ : q − p⟩

-}


--Ejercicio 17 Implementa en Haskell las funciones derivadas en el ejercicio anterior.
{-
a) El elemento e ocurre un n ́umero par de veces en la lista xs.
b) El elemento e ocurre en las posiciones pares de la lista xs.
c) El elemento e ocurre  ́unicamente en las posiciones pares de la lista xs.
d) Si e ocurre en la lista xs, entonces l ocurre en alguna posicion anterior en la misma lista.
e) Existe un elemento de la lista xs que es estrictamente mayor a todos los dem ́as.
f) En la lista xs solo ocurren valores que anulan la funcion f.
-}





