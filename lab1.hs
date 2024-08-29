import Language.Haskell.TH (prim)
 -- Prueba/ practica de haskell again babyyY!!!
   --  Arrancamos con haskel!!! en el lab
             --   19/082024

-- ejercicio lab 1
esCero :: Int -> Bool
esCero x = x==0


esPositivo :: Int -> Bool
esPositivo x = x>0


esVocal :: Char -> Bool
esVocal a = a=='a' || a=='e' || a=='i' || a=='o' || a=='u'

-- AltGr + 1 = | 
-- || = or

valorAbsoluto  :: Int -> Int
valorAbsoluto x
   | (x >=0) = x
   | otherwise = -x
{- OTRA FORMA
valorAbsoluto x =
                 if (x>=0) then x 
                  else (-x)       -}


-- ejercicio lab 2

paraTodo :: [Bool] -> Bool
paraTodo [] = True
paraTodo (x:xs) = x==True && paraTodo xs

sumatoria :: [Int] -> Int
sumatoria [] = 0
sumatoria (x:xs) = x + sumatoria xs

productoria :: [Int] -> Int
productoria [] = 1
productoria (x:xs) = x * productoria xs

factorial :: Int -> Int
factorial 0 = 1
factorial x = x * factorial (x-1)


-- ejercicio lab 3 (usar ejercicios 4a), 4b) y 4d))

--4a) {paratodo i : 0<= i < #xs : xs.i>0}
cuatroA :: [Int] -> Bool
cuatroA [] = True
cuatroA (x:xs) = x>0 && cuatroA xs


--4b) {existe i : 0<= i < #xs : xs.i=x}
cuatroB :: [Int] -> Int -> Bool
cuatroB [] _ = False
cuatroB (x:xs) n = x==n || cuatroB xs n


--4d) {paratodo i : 0<= i < #xs-1 : xs.i= xs.(i+1)}
cuatroD :: [Int] -> Bool
cuatroD [] = False
cuatroD (x:xs) = x == xs !!0 || cuatroD xs


{-
es imbolo que hace que saques una ubicacion de una lista es !!
-}


-- ejercicio lab 5. <paratodo i: o<=i<#xs: xs.i> (verifica que todos lo elem de una lista son true)

todos :: [Bool] -> Bool
todos [] = True
todos (x:xs) = x && todos xs


-- ejercicio lab 6 (usar ejercicios 11b), 11c) y 11d))

--11b) n es el elem mas grande de xs
elementoMasGrande :: [Int] -> Int
elementoMasGrande xs = maximum xs

--11c) el producto de elem pares de xs

productoElementosPares :: [Int] -> Int
productoElementosPares [] = 1
productoElementosPares (x:xs)
                     | even x    = x * productoElementosPares xs
                     | otherwise = productoElementosPares xs

--11d) la suma de los elem en posicion par de xs

sumaElementosPosicionPares :: [Int] -> Int
sumaElementosPosicionPares []       = 0
sumaElementosPosicionPares [x]      = x
sumaElementosPosicionPares (x:y:xs) = x + sumaElementosPosicionPares xs

-- ejercicio lab 7


paraTodo' :: [a] -> (a -> Bool) -> Bool
paraTodo' [] t = True
paraTodo' (x:xs) t = t x && paraTodo' xs t


existe' :: [a] -> (a -> Bool) -> Bool
existe' [] t = False
existe' (x:xs) t = t x || existe' xs t


sumatoria' :: [a] -> (a -> Int) -> Int
sumatoria' [] t = 0
sumatoria' (x:xs) t = t x + sumatoria' xs t


productoria' :: [a] -> (a -> Int) -> Int
productoria' [] t = 1
productoria' (x:xs) t = t x * productoria' xs t

{-
funciones de haskell
mod x 2 determina si un numero es divisible por 2, se puede usar en casos pàra saber si es par
-}
-- ejercicio lab 9

-- a)
todosPares :: [Int] -> Bool
todosPares xs = paraTodo' xs even

-- b)
esMultiplo :: Int -> Int -> Bool
esMultiplo n x = mod x n == 0


hayMultiplo :: Int -> [Int] -> Bool
hayMultiplo n xs = existe' xs (esMultiplo n)

{- Explicacion del Profe
existe' :: [a] -> (a -> Bool) -> Bool
xs :: [Int] 
existe' xs :: (Int -> Bool) -> Bool
a <-> Int
esMultiplo n :: Int -> Bool
existe' xs (esMultiplo n) :: Bool 
-}

-- c)
cuadrado :: Int -> Int
cuadrado x = x * x

sumaCuadrados :: Int -> Int
sumaCuadrados n = sumatoria' [(n-1)..0] cuadrado

-- d)
divide :: Int -> Int -> Bool
divide n x = mod n x == 0

existeDivisor :: Int -> [Int] -> Bool  -- existe algun elemento en la lista ls que divide a n
existeDivisor n ls = existe' ls (divide n)

-- e)

esPrimo :: Int -> Bool
esPrimo n = not (existeDivisor n [2..(n-1)]) && mod n n == 0   -- agregando la ultima cosa despues del "&&" se repara el error que estaba dando de contar al 0 como primo


{-algo que saque de internet https://www.utnianos.com.ar/foro/tema-problema-haskell-numeros-primos

factores :: Int -> [Int]
factores n = [x | x <- [1..n], mod n x == 0]

esPrimo :: Int -> Bool
esPrimo n = factores n == [1,n]

primos :: [Int] -> [Int]
primos n = [x | x <- [2..n], esPrimo x]
-}

-- f) redefinir factorial sin recursion
factorial' :: Int -> Int
factorial' x = productoria' [1..x] (*1)
--o tambien: factorial' x = productoria [1..x]

--g)
primosDeUnaLista :: [Int] -> [Int]     -- saca los primos de una lista con filter
primosDeUnaLista xs = filter esPrimo xs

multiplicaPrimos :: [Int] -> Int
multiplicaPrimos xs = productoria (primosDeUnaLista xs)


--h)
fib :: Int -> Int
fib 0 = 0
fib 1 = 1
fib n = fib (n-1) + fib (n-2)
--evaluacion de la funcion en n=3
-- fib 3= fib 2 + fib 1
   --fib 1 + fib 0 + fib 1
   -- 1    +  0    +  1 = 2

esFib :: Int -> Bool
esFib n = n == fib n

--i)
todosFib :: [Int] -> Bool
todosFib xs = paraTodo' xs esFib


--ejercicio 10 (dada una lista de n numeros xs duplica cada valor de xs)

dobleLista :: [Int] -> [Int]
dobleLista [] = []
dobleLista (x:xs) = x*2: dobleLista xs
{- recordemos que map funciona asi: 
map (+1) [1,2,3]
-}
dobleLista' :: [Int] -> [Int]
dobleLista' = map (*2)

--ejercicio 11 lab. dada una lista de num xs, calcula una lista que tiene como elementos aquellos n´umeros de xs que son primos

listaAListaPrimos :: [Int] -> [Int]
listaAListaPrimos [] = []
listaAListaPrimos (x:xs)
                      | esPrimo x = x : listaAListaPrimos xs
                      | otherwise = listaAListaPrimos xs

listaAListaPrimos' :: [Int] -> [Int]
listaAListaPrimos' xs = filter esPrimo xs


--ejercicio 12 lab

primIgualesA :: Eq a => a -> [a] -> [a]
primIgualesA n [] = []
--primIgualesA n [y] = []
primIgualesA n (x:xs)
                  | n == x = x : primIgualesA n xs
                  | otherwise = []


primIgualesA' :: Eq a => a -> [a] -> [a]
primIgualesA' n = takeWhile (n == )


--ejercicio 13 lab

primIguales :: Eq a => [a] -> [a]
primIguales [] = []
primIguales (x:y:xs) 
                  | x == y = x : primIguales (y:xs)
                  | otherwise = [x]


primIguales' :: Eq a => [a] -> [a]
primIguales' (x:xs) =  primIgualesA' x (x:xs)


--ejercicio 14 lab
{-
cuantGen :: (b -> b -> b) -> b -> [a] -> (a -> b) -> b
cuantGen cuantificador n (x:xs) func = cuantificador xs (func x) n
-}
