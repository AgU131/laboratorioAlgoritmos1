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

--4 {paratodo i : 0<= i < #xs : xs.i>0}
cuatroA :: [Int] -> Bool
cuatroA [] = True
cuatroA (x:xs) = x>0 && cuatroA xs


{- 4b) {existe i : 0<= i < #xs : xs.i=x}
cuatroB :: [Int] -> Bool
cuatroB [] = True
cuatroB (x:xs)
cuatroB = x==z && cuatroB xs
-}

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
{-
esPrimo :: Int -> Bool
esPrimo = 



-- f)
factorial' 


multiplicaPrimos :: [Int] -> Int


esFib :: Int -> Bool


todosFib :: [Int] -> Bool


-}


--ejercicio 10 (dada una lista de n numeros xs duplica cada valor de xs)

dobleLista :: [Int] -> [Int]
dobleLista [] = []
dobleLista (x:xs) = x*2: dobleLista xs 
{- recordemos que map funciona asi: 
map (+1) [1,2,3]
-}
dobleLista' :: [Int] -> [Int]
dobleLista' = map (*2)


