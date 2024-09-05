import Data.Text.Internal.Fusion.CaseMapping (titleMapping)
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
cifradoAmericano Do = 'C' 
cifradoAmericano Re = 'D'
cifradoAmericano Mi = 'E'
cifradoAmericano Fa = 'F'
cifradoAmericano Sol = 'G'
cifradoAmericano La = 'A'
cifradoAmericano Si = 'B'


--Ejercicio 4
-- od hoc es la definicion del tipo: "algo" a => a -> ...
--a)
minimoElemento :: Ord a => [a] -> a
--minimoElemento [] = -11111111111111111111111111111111
minimoElemento (x:xs) = x `min` minimoElemento xs

--b)
minimoElemento' :: Bounded a => [a] -> a
minimoElemento' [] = False
minimoElemento' (x:xs) = minimum (x:xs)

